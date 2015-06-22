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
static const char *ng0 = "D:/Projects/2IN35/Lab4/Sources/A4/test.v";
static int ng1[] = {0, 0};
static int ng2[] = {7, 0};
static int ng3[] = {8, 0};
static int ng4[] = {15, 0};
static int ng5[] = {1, 0};
static const char *ng6 = "%c";
static const char *ng7 = "input.bin";
static const char *ng8 = "rb";
static const char *ng9 = "Error: Failed to open input file, input.bin\nExiting Simulation.";
static const char *ng10 = "output.bin";
static const char *ng11 = "wb";
static const char *ng12 = "Error: Failed to open output file, output.bin\nExiting Simulation.";
static int ng13[] = {1684366346, 0, 1847616878, 0, 1635019119, 0, 1768781164, 0, 83, 0};
static const char *ng14 = "";



static void Cont_27_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 6712);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_31_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 6728);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_33_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7000);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 6744);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_42_3(char *t0)
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

LAB0:    t1 = (t0 + 5648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5456);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2384);
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
    t24 = (t0 + 2384);
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

static void Always_49_4(char *t0)
{
    char t6[8];
    char t17[8];
    char t26[8];
    char t34[8];
    char t75[8];
    char t78[8];
    char t79[8];
    char t80[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    int t88;
    char *t89;
    unsigned int t90;
    int t91;
    int t92;
    char *t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;

LAB0:    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 6760);
    *((int *)t2) = 1;
    t3 = (t0 + 5928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t34, t6, 8);

LAB12:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t2) == 0)
        goto LAB32;

LAB34:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB35:    memset(t17, 0, 8);
    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t20 = (t16 & t15);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t5) != 0)
        goto LAB38;

LAB39:    t13 = (t17 + 4);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t13);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB40;

LAB41:    memcpy(t34, t17, 8);

LAB42:    t48 = (t34 + 4);
    t67 = *((unsigned int *)t48);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB50;

LAB51:
LAB52:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1344U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t18) == 0)
        goto LAB13;

LAB15:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB16:    memset(t26, 0, 8);
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t17);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t27) != 0)
        goto LAB19;

LAB20:    t35 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t6 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB13:    *((unsigned int *)t17) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB19:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB20;

LAB21:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t6 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB23;

LAB24:    xsi_set_current_line(50, ng0);

LAB27:    xsi_set_current_line(52, ng0);
    t72 = (t0 + 3184);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    *((int *)t75) = xsi_vlogfile_fgetc(*((unsigned int *)t74));
    t76 = (t75 + 4);
    *((int *)t76) = 0;
    t77 = (t0 + 2704);
    t81 = (t0 + 2704);
    t82 = (t81 + 72U);
    t83 = *((char **)t82);
    t84 = ((char*)((ng1)));
    t85 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t78, t79, t80, ((int*)(t83)), 2, t84, 32, 1, t85, 32, 1);
    t86 = (t78 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (!(t87));
    t89 = (t79 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (!(t90));
    t92 = (t88 && t91);
    t93 = (t80 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (!(t94));
    t96 = (t92 && t95);
    if (t96 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    *((int *)t6) = xsi_vlogfile_fgetc(*((unsigned int *)t4));
    t5 = (t6 + 4);
    *((int *)t5) = 0;
    t12 = (t0 + 2704);
    t13 = (t0 + 2704);
    t18 = (t13 + 72U);
    t19 = *((char **)t18);
    t25 = ((char*)((ng3)));
    t27 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t17, t26, t34, ((int*)(t19)), 2, t25, 32, 1, t27, 32, 1);
    t33 = (t17 + 4);
    t7 = *((unsigned int *)t33);
    t58 = (!(t7));
    t38 = (t26 + 4);
    t8 = *((unsigned int *)t38);
    t59 = (!(t8));
    t88 = (t58 && t59);
    t39 = (t34 + 4);
    t9 = *((unsigned int *)t39);
    t91 = (!(t9));
    t92 = (t88 && t91);
    if (t92 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3664);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    *((int *)t6) = xsi_vlogfile_ferror(*((unsigned int *)t4), t13, 640);
    t18 = (t6 + 4);
    *((int *)t18) = 0;
    t19 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t19, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB26;

LAB28:    t97 = *((unsigned int *)t80);
    t98 = (t97 + 0);
    t99 = *((unsigned int *)t78);
    t100 = *((unsigned int *)t79);
    t101 = (t99 - t100);
    t102 = (t101 + 1);
    xsi_vlogvar_wait_assign_value(t77, t75, t98, *((unsigned int *)t79), t102, 0LL);
    goto LAB29;

LAB30:    t10 = *((unsigned int *)t34);
    t95 = (t10 + 0);
    t11 = *((unsigned int *)t17);
    t14 = *((unsigned int *)t26);
    t96 = (t11 - t14);
    t98 = (t96 + 1);
    xsi_vlogvar_wait_assign_value(t12, t6, t95, *((unsigned int *)t26), t98, 0LL);
    goto LAB31;

LAB32:    *((unsigned int *)t6) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t17) = 1;
    goto LAB39;

LAB38:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB39;

LAB40:    t18 = (t0 + 1344U);
    t19 = *((char **)t18);
    memset(t26, 0, 8);
    t18 = (t19 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t18) != 0)
        goto LAB45;

LAB46:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t27 = (t17 + 4);
    t33 = (t26 + 4);
    t38 = (t34 + 4);
    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t38);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB42;

LAB43:    *((unsigned int *)t26) = 1;
    goto LAB46;

LAB45:    t25 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB46;

LAB47:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t38);
    *((unsigned int *)t34) = (t46 | t47);
    t39 = (t17 + 4);
    t40 = (t26 + 4);
    t50 = *((unsigned int *)t17);
    t51 = (~(t50));
    t52 = *((unsigned int *)t39);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t40);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t62 & t60);
    t63 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB49;

LAB50:    xsi_set_current_line(57, ng0);

LAB53:    xsi_set_current_line(58, ng0);
    t49 = ((char*)((ng1)));
    t66 = (t0 + 3824);
    t72 = (t66 + 56U);
    t73 = *((char **)t72);
    t87 = *((unsigned int *)t49);
    t90 = *((unsigned int *)t73);
    t94 = (t87 | t90);
    *((unsigned int *)t75) = t94;
    t74 = (t49 + 4);
    t76 = (t73 + 4);
    t77 = (t75 + 4);
    t97 = *((unsigned int *)t74);
    t99 = *((unsigned int *)t76);
    t100 = (t97 | t99);
    *((unsigned int *)t77) = t100;
    t103 = *((unsigned int *)t77);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB54;

LAB55:
LAB56:    t83 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t83, t75, 0, 0, 1, 0LL);
    goto LAB52;

LAB54:    t105 = *((unsigned int *)t75);
    t106 = *((unsigned int *)t77);
    *((unsigned int *)t75) = (t105 | t106);
    t81 = (t49 + 4);
    t82 = (t73 + 4);
    t107 = *((unsigned int *)t81);
    t108 = (~(t107));
    t109 = *((unsigned int *)t49);
    t88 = (t109 & t108);
    t110 = *((unsigned int *)t82);
    t111 = (~(t110));
    t112 = *((unsigned int *)t73);
    t91 = (t112 & t111);
    t113 = (~(t88));
    t114 = (~(t91));
    t115 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t115 & t113);
    t116 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t116 & t114);
    goto LAB56;

}

static void Always_63_5(char *t0)
{
    char t6[8];
    char t17[8];
    char t26[8];
    char t34[8];
    char t75[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;

LAB0:    t1 = (t0 + 6144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 6776);
    *((int *)t2) = 1;
    t3 = (t0 + 6176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t34, t6, 8);

LAB12:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t2) == 0)
        goto LAB28;

LAB30:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB31:    memset(t17, 0, 8);
    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t20 = (t16 & t15);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t5) != 0)
        goto LAB34;

LAB35:    t13 = (t17 + 4);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t13);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB36;

LAB37:    memcpy(t34, t17, 8);

LAB38:    t48 = (t34 + 4);
    t67 = *((unsigned int *)t48);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB46;

LAB47:
LAB48:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1824U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t18) == 0)
        goto LAB13;

LAB15:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB16:    memset(t26, 0, 8);
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t17);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t27) != 0)
        goto LAB19;

LAB20:    t35 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t6 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB13:    *((unsigned int *)t17) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB19:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB20;

LAB21:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t6 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB23;

LAB24:    xsi_set_current_line(64, ng0);

LAB27:    xsi_set_current_line(66, ng0);
    t72 = (t0 + 3344);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t76 = (t0 + 1984U);
    t77 = *((char **)t76);
    memset(t75, 0, 8);
    t76 = (t75 + 4);
    t78 = (t77 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (t79 >> 8);
    *((unsigned int *)t75) = t80;
    t81 = *((unsigned int *)t78);
    t82 = (t81 >> 8);
    *((unsigned int *)t76) = t82;
    t83 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t83 & 255U);
    t84 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t84 & 255U);
    xsi_vlogfile_fwrite(*((unsigned int *)t74), 0, 0, 1, ng6, 2, t0, (char)118, t75, 8);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1984U);
    t12 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 255U);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng6, 2, t0, (char)118, t6, 8);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB26;

LAB28:    *((unsigned int *)t6) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t17) = 1;
    goto LAB35;

LAB34:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB35;

LAB36:    t18 = (t0 + 1824U);
    t19 = *((char **)t18);
    memset(t26, 0, 8);
    t18 = (t19 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t18) != 0)
        goto LAB41;

LAB42:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t27 = (t17 + 4);
    t33 = (t26 + 4);
    t38 = (t34 + 4);
    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t38);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB38;

LAB39:    *((unsigned int *)t26) = 1;
    goto LAB42;

LAB41:    t25 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB42;

LAB43:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t38);
    *((unsigned int *)t34) = (t46 | t47);
    t39 = (t17 + 4);
    t40 = (t26 + 4);
    t50 = *((unsigned int *)t17);
    t51 = (~(t50));
    t52 = *((unsigned int *)t39);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t40);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t62 & t60);
    t63 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB45;

LAB46:    xsi_set_current_line(70, ng0);

LAB49:    xsi_set_current_line(71, ng0);
    t49 = ((char*)((ng1)));
    t66 = (t0 + 3984);
    t72 = (t66 + 56U);
    t73 = *((char **)t72);
    t79 = *((unsigned int *)t49);
    t80 = *((unsigned int *)t73);
    t81 = (t79 | t80);
    *((unsigned int *)t75) = t81;
    t74 = (t49 + 4);
    t76 = (t73 + 4);
    t77 = (t75 + 4);
    t82 = *((unsigned int *)t74);
    t83 = *((unsigned int *)t76);
    t84 = (t82 | t83);
    *((unsigned int *)t77) = t84;
    t85 = *((unsigned int *)t77);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB50;

LAB51:
LAB52:    t102 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t102, t75, 0, 0, 1, 0LL);
    goto LAB48;

LAB50:    t87 = *((unsigned int *)t75);
    t88 = *((unsigned int *)t77);
    *((unsigned int *)t75) = (t87 | t88);
    t78 = (t49 + 4);
    t89 = (t73 + 4);
    t90 = *((unsigned int *)t78);
    t91 = (~(t90));
    t92 = *((unsigned int *)t49);
    t93 = (t92 & t91);
    t94 = *((unsigned int *)t89);
    t95 = (~(t94));
    t96 = *((unsigned int *)t73);
    t97 = (t96 & t95);
    t98 = (~(t93));
    t99 = (~(t97));
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t100 & t98);
    t101 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t101 & t99);
    goto LAB52;

}

static void Initial_75_6(char *t0)
{
    char t4[8];
    char t15[8];
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

LAB0:    t1 = (t0 + 6392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);

LAB4:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 6200);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng8);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3184);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(86, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng10, ng11);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3344);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6200);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB6:    xsi_set_current_line(82, ng0);

LAB9:    xsi_set_current_line(83, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(84, ng0);
    xsi_vlog_finish(1);
    goto LAB8;

LAB10:    xsi_set_current_line(87, ng0);

LAB13:    xsi_set_current_line(88, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(89, ng0);
    xsi_vlog_finish(1);
    goto LAB12;

LAB14:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(97, ng0);

LAB15:    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 6200);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB16:    xsi_set_current_line(97, ng0);
    t13 = (t0 + 6792);
    *((int *)t13) = 1;
    t14 = (t0 + 6424);
    *((char **)t14) = t13;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(97, ng0);

LAB19:    xsi_set_current_line(99, ng0);
    *((int *)t15) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t16 = (t15 + 4);
    *((int *)t16) = 0;
    t17 = (t0 + 3824);
    xsi_vlogvar_wait_assign_value(t17, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    *((int *)t4) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 1, 0LL);
    goto LAB15;

LAB20:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng13)));
    xsi_vlogfile_fwrite(*((unsigned int *)t2), 1, 0, 0, ng14, 1, t0);
    xsi_set_current_line(110, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000001728239293_1417908790_init()
{
	static char *pe[] = {(void *)Cont_27_0,(void *)Cont_31_1,(void *)Cont_33_2,(void *)Always_42_3,(void *)Always_49_4,(void *)Always_63_5,(void *)Initial_75_6};
	xsi_register_didat("work_m_00000000001728239293_1417908790", "isim/multitest_isim_beh.exe.sim/work/m_00000000001728239293_1417908790.didat");
	xsi_register_executes(pe);
}
