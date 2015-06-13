package nl.tue.win;

import java.io.*;

public class CoefficientsPrinter {
    private static final double EPSILON = 0.000000000001d;

    private static double sinc(double t) {
        if(Math.abs(t) < EPSILON) {
            return 1d;
        }

        final double pi_t = t * Math.PI;

        return Math.sin(pi_t) / pi_t;
    }

    private static double lanczos2(double t) {
        if(Math.abs(t) >= 2d) {
            return 0d;
        }

        return sinc(t) * sinc(t / 2d);
    }

    private static long[] getCoefs(int L, final int num_wires) {
        if(L < 1 || num_wires < 1) {
            throw new IllegalArgumentException();
        }
        final int max_val = (int) (Math.pow(2, num_wires - 1) - 1);
        final int L4 = 4 * L;
        double[] temp = new double[L4];
        long[] ret = new long[L4];

        final double d = 1d / (double) L;

        double t = -2d;
        double sum = 0d;

        for(int i = 0; i < L4; i++) {
            temp[i] = lanczos2(t);
            sum += temp[i];
            t += d;
        }

        final double LdivSum = L / sum;

        for(int i = 0; i < L4; i++) {
            ret[i] = Math.round(temp[i] * LdivSum * max_val);
        }

        return ret;
    }

    private static void printHex(final PrintWriter pw, final long[] coefs, final int string_length) {
        if(string_length < 1 || coefs == null || coefs.length == 0) {
            throw new IllegalArgumentException();
        }
        final long max_num = (long) Math.pow(16, string_length) - 1;
        final String format = "%0" + string_length + "x";

        for(long l : coefs) {
            pw.println(String.format(format, l & max_num));
        }
    }

    public static void main(String[] args) throws IOException {
        if(args.length < 2) {
            System.err.println("L and number of wires are required input.");
            System.exit(1);
        }
        final int L = Integer.parseInt(args[0]);
        final int num_wires = Integer.parseInt(args[1]);
        int string_length = 4;

        if(args.length > 2) {
            string_length = Integer.parseInt(args[2]);
        }

        File file = null;
        if(args.length > 3) {
            file = new File(args[3]);
            if(file.isDirectory()) {
                System.err.println("Given output path is not a valid file.");
                System.exit(1);
            }
            file.getParentFile().mkdirs();
            boolean b = file.createNewFile();
            if(!b) {
                System.out.println("File already exists. Overwriting...");
            }
        }

        PrintWriter pw;
        if(file == null) {
            pw = new PrintWriter(new OutputStreamWriter(System.out, "UTF-8"));
        } else {
            pw = new PrintWriter(file);
        }

        printHex(pw, getCoefs(L, num_wires), string_length);
        pw.flush();
        pw.close();
    }
}