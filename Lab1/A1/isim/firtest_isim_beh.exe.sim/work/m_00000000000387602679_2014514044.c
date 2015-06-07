/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/OneDrive/Documents/TUe/2IN35/firtest.v";
static const char *ng1 = "%c";
static int ng2[] = {0, 0};
static const char *ng3 = "input.bin";
static const char *ng4 = "rb";
static const char *ng5 = "Error: Failed to open input file, input.bin\nExiting Simulation.";
static const char *ng6 = "output.bin";
static const char *ng7 = "wb";
static const char *ng8 = "Error: Failed to open output file, output.bin\nExiting Simulation.";
static int ng9[] = {7, 0};
static int ng10[] = {8, 0};
static int ng11[] = {15, 0};
static int ng12[] = {1684366346, 0, 1847616878, 0, 1635019119, 0, 1768781164, 0, 83, 0};
static const char *ng13 = "";



static void Always_35_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4160);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 2152);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2152);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_38_1(char *t0)
{
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t1 = (t0 + 4600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5168);
    *((int *)t2) = 1;
    t3 = (t0 + 4632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 2312);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);

LAB9:    xsi_set_current_line(40, ng0);
    t13 = (t0 + 2792);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 1752U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 8);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 8);
    *((unsigned int *)t17) = t23;
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 255U);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 255U);
    xsi_vlogfile_fwrite(*((unsigned int *)t15), 0, 0, 1, ng1, 2, t0, (char)118, t16, 8);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1752U);
    t6 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 255U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 255U);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng1, 2, t0, (char)118, t16, 8);
    goto LAB8;

}

static void Initial_46_2(char *t0)
{
    char t4[8];
    char t15[8];
    char t18[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;

LAB0:    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);

LAB4:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2152);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(53, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng3, ng4);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB5;

LAB6:
LAB7:    xsi_set_current_line(58, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng6, ng7);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB13;

LAB1:    return;
LAB5:    xsi_set_current_line(54, ng0);

LAB8:    xsi_set_current_line(55, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(56, ng0);
    xsi_vlog_finish(1);
    goto LAB7;

LAB9:    xsi_set_current_line(59, ng0);

LAB12:    xsi_set_current_line(60, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(61, ng0);
    xsi_vlog_finish(1);
    goto LAB11;

LAB13:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(69, ng0);

LAB14:    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB15:    xsi_set_current_line(69, ng0);
    t13 = (t0 + 5184);
    *((int *)t13) = 1;
    t14 = (t0 + 4880);
    *((char **)t14) = t13;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(69, ng0);

LAB18:    xsi_set_current_line(71, ng0);
    *((int *)t15) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t16 = (t15 + 4);
    *((int *)t16) = 0;
    t17 = (t0 + 3432);
    xsi_vlogvar_assign_value(t17, t15, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2312);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB19:    xsi_set_current_line(73, ng0);

LAB22:    xsi_set_current_line(75, ng0);
    t7 = (t0 + 2632);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((int *)t4) = xsi_vlogfile_fgetc(*((unsigned int *)t14));
    t16 = (t4 + 4);
    *((int *)t16) = 0;
    t17 = (t0 + 2472);
    t20 = (t0 + 2472);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng2)));
    t24 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t15, t18, t19, ((int*)(t22)), 2, t23, 32, 1, t24, 32, 1);
    t25 = (t15 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t18 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    *((int *)t4) = xsi_vlogfile_fgetc(*((unsigned int *)t5));
    t6 = (t4 + 4);
    *((int *)t6) = 0;
    t7 = (t0 + 2472);
    t13 = (t0 + 2472);
    t14 = (t13 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng10)));
    t20 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t15, t18, t19, ((int*)(t16)), 2, t17, 32, 1, t20, 32, 1);
    t21 = (t15 + 4);
    t8 = *((unsigned int *)t21);
    t27 = (!(t8));
    t22 = (t18 + 4);
    t9 = *((unsigned int *)t22);
    t30 = (!(t9));
    t31 = (t27 && t30);
    t23 = (t19 + 4);
    t10 = *((unsigned int *)t23);
    t34 = (!(t10));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3272);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    *((int *)t4) = xsi_vlogfile_ferror(*((unsigned int *)t5), t13, 640);
    t14 = (t4 + 4);
    *((int *)t14) = 0;
    t16 = (t0 + 3112);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 32);
    goto LAB21;

LAB23:    t36 = *((unsigned int *)t19);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t18);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t17, t4, t37, *((unsigned int *)t18), t41, 0LL);
    goto LAB24;

LAB25:    t11 = *((unsigned int *)t19);
    t37 = (t11 + 0);
    t12 = *((unsigned int *)t15);
    t26 = *((unsigned int *)t18);
    t40 = (t12 - t26);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t7, t4, t37, *((unsigned int *)t18), t41, 0LL);
    goto LAB26;

LAB27:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng12)));
    xsi_vlogfile_fwrite(*((unsigned int *)t2), 1, 0, 0, ng13, 1, t0);
    xsi_set_current_line(89, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000000387602679_2014514044_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Always_38_1,(void *)Initial_46_2};
	xsi_register_didat("work_m_00000000000387602679_2014514044", "isim/firtest_isim_beh.exe.sim/work/m_00000000000387602679_2014514044.didat");
	xsi_register_executes(pe);
}
