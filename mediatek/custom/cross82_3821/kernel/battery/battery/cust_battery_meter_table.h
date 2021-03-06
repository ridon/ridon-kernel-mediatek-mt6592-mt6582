#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#define RBAT_PULL_DOWN_R		   27000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#define RBAT_PULL_DOWN_R		  100000	
#endif
#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
    /*
    old table
        {-20,67790},
        {-15,53460},
        {-10,42450},
        { -5,33930},
        {  0,27280},
        {  5,22070},
        { 10,17960},
        { 15,14700},
        { 20,12090},
        { 25,10000},
        { 30,8312},
        { 35,6942},
        { 40,5826},
        { 45,4911},
        { 50,4158},
        { 55,3536},
        { 60,3019}

*/
//new table
    	{-30,127475},
    	{-25,96862},
        {-20,74353},
        {-15,57626},
        {-10,45067},
        { -5,35548},
        {  0,28267},
        {  5,22649},
        { 10,18280},
        { 15,14855},
        { 20,12150},
        { 25,10000},
        { 30,8278},
        { 35,6891},
        { 40,5768},
        { 45,4852},
        { 50,4101},
        { 55,3482},
        { 60,2970},
        { 65,2544},
        { 80,1636}

//end

		
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
{0  , 4303},
{2  , 4282},
{4  , 4265},
{6  , 4249},
{8  , 4232},
{10 , 4214},
{12 , 4196},
{14 , 4176},
{16 , 4155},
{18 , 4130},
{20 , 4098},
{23 , 4071},
{25 , 4047},
{27 , 4024},
{29 , 3998},
{31 , 3973},
{33 , 3953},
{35 , 3937},
{37 , 3924},
{39 , 3914},
{41 , 3905},
{43 , 3897},
{45 , 3889},
{47 , 3881},
{49 , 3874},
{51 , 3870},
{53 , 3869},
{55 , 3865},
{57 , 3858},
{60 , 3850},
{62 , 3841},
{64 , 3831},
{66 , 3820},
{68 , 3810},
{70 , 3800},
{72 , 3790},
{74 , 3781},
{76 , 3771},
{78 , 3761},
{80 , 3755},
{82 , 3747},
{84 , 3735},
{86 , 3727},
{87 , 3722},
{88 , 3719},
{89 , 3716},
{89 , 3713},
{90 , 3712},
{91 , 3710},
{91 , 3708},
{92 , 3707},
{92 , 3706},
{93 , 3705},
{93 , 3704},
{94 , 3703},
{94 , 3701},
{95 , 3701},
{95 , 3700},
{95 , 3699},
{96 , 3698},
{96 , 3697},
{96 , 3696},
{97 , 3694},
{97 , 3693},
{97 , 3691},
{97 , 3690},
{98 , 3688},
{98 , 3687},
{98 , 3685},
{98 , 3683},
{98 , 3681},
{99 , 3679},
{99 , 3677},
{99 , 3675},
{99 , 3673},
{99 , 3672},
{99 , 3669},
{99 , 3668},
{99 , 3666},
{100, 3664},
{100, 3662},
{100, 3660},
{100, 3659},
{100, 3659},
{100, 3657},
{100, 3400}
};


BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
{0  , 4323},
{1  , 4298},
{3  , 4265},
{4  , 4232},
{6  , 4207},
{7  , 4189},
{9  , 4171},
{10 , 4156},
{12 , 4142},
{13 , 4127},
{15 , 4112},
{16 , 4098},
{17 , 4088},
{19 , 4080},
{20 , 4069},
{22 , 4051},
{23 , 4026},
{25 , 4001},
{26 , 3981},
{28 , 3963},
{29 , 3949},
{31 , 3937},
{32 , 3926},
{33 , 3918},
{35 , 3910},
{36 , 3903},
{38 , 3894},
{39 , 3886},
{41 , 3877},
{42 , 3870},
{44 , 3863},
{45 , 3855},
{46 , 3849},
{48 , 3842},
{49 , 3836},
{51 , 3830},
{52 , 3824},
{54 , 3818},
{55 , 3813},
{57 , 3807},
{58 , 3802},
{60 , 3797},
{61 , 3793},
{62 , 3788},
{64 , 3784},
{65 , 3780},
{67 , 3777},
{68 , 3773},
{70 , 3770},
{71 , 3765},
{73 , 3761},
{74 , 3757},
{76 , 3753},
{77 , 3748},
{78 , 3742},
{80 , 3737},
{81 , 3731},
{83 , 3725},
{84 , 3718},
{86 , 3709},
{87 , 3702},
{89 , 3698},
{90 , 3693},
{91 , 3689},
{93 , 3682},
{94 , 3666},
{96 , 3633},
{97 , 3607},
{97 , 3584},
{98 , 3563},
{98 , 3546},
{99 , 3531},
{99 , 3518},
{99 , 3507},
{99 , 3498},
{99 , 3490},
{100, 3483},
{100, 3479},
{100, 3475},
{100, 3470},
{100, 3466},
{100, 3464},
{100, 3461},
{100, 3459},
{100, 3457},
{100, 3400}
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
{0  , 4334},
{1  , 4316},
{3  , 4300},
{4  , 4285},
{5  , 4270},
{6  , 4256},
{8  , 4241},
{9  , 4226},
{10 , 4212},
{12 , 4198},
{13 , 4184},
{14 , 4171},
{15 , 4156},
{17 , 4143},
{18 , 4129},
{19 , 4116},
{21 , 4102},
{22 , 4089},
{23 , 4079},
{25 , 4072},
{26 , 4059},
{27 , 4039},
{28 , 4017},
{30 , 3998},
{31 , 3984},
{32 , 3971},
{34 , 3962},
{35 , 3951},
{36 , 3939},
{37 , 3929},
{39 , 3919},
{40 , 3908},
{41 , 3898},
{43 , 3889},
{44 , 3880},
{45 , 3872},
{46 , 3864},
{48 , 3857},
{49 , 3851},
{50 , 3844},
{52 , 3838},
{53 , 3832},
{54 , 3826},
{55 , 3821},
{57 , 3816},
{58 , 3811},
{59 , 3806},
{61 , 3802},
{62 , 3798},
{63 , 3793},
{65 , 3789},
{66 , 3785},
{67 , 3781},
{68 , 3777},
{70 , 3771},
{71 , 3766},
{72 , 3762},
{74 , 3757},
{75 , 3753},
{76 , 3748},
{77 , 3744},
{79 , 3739},
{80 , 3734},
{81 , 3729},
{83 , 3721},
{84 , 3715},
{85 , 3710},
{86 , 3702},
{88 , 3692},
{89 , 3689},
{90 , 3687},
{92 , 3685},
{93 , 3682},
{94 , 3676},
{96 , 3650},
{97 , 3606},
{98 , 3546},
{100, 3464},
{100, 3333},
{100, 3299},
{100, 3287},
{100, 3282},
{100, 3279},
{100, 3276},
{100, 3275},
{100, 3263}
};

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
{0  , 4341},
{1  , 4326},
{3  , 4312},
{4  , 4297},
{5  , 4282},
{6  , 4267},
{8  , 4252},
{9  , 4238},
{10 , 4223},
{12 , 4209},
{13 , 4194},
{14 , 4181},
{15 , 4166},
{17 , 4153},
{18 , 4139},
{19 , 4126},
{20 , 4113},
{22 , 4099},
{23 , 4086},
{24 , 4073},
{26 , 4060},
{27 , 4048},
{28 , 4035},
{29 , 4022},
{31 , 4010},
{32 , 3998},
{33 , 3986},
{35 , 3974},
{36 , 3960},
{37 , 3945},
{38 , 3932},
{40 , 3920},
{41 , 3908},
{42 , 3898},
{43 , 3889},
{45 , 3881},
{46 , 3872},
{47 , 3865},
{49 , 3857},
{50 , 3850},
{51 , 3843},
{52 , 3838},
{54 , 3832},
{55 , 3825},
{56 , 3820},
{57 , 3814},
{59 , 3809},
{60 , 3804},
{61 , 3800},
{63 , 3795},
{64 , 3791},
{65 , 3787},
{66 , 3782},
{68 , 3776},
{69 , 3768},
{70 , 3758},
{72 , 3752},
{73 , 3746},
{74 , 3740},
{75 , 3734},
{77 , 3730},
{78 , 3726},
{79 , 3722},
{80 , 3718},
{82 , 3713},
{83 , 3707},
{84 , 3701},
{86 , 3696},
{87 , 3689},
{88 , 3681},
{89 , 3678},
{91 , 3676},
{92 , 3675},
{93 , 3671},
{95 , 3662},
{96 , 3632},
{97 , 3586},
{98 , 3524},
{100, 3439},
{100, 3301},
{100, 3259},
{100, 3250},
{100, 3246},
{100, 3244},
{100, 3244},
{100, 3244}
};    
           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};      

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{              
	{288 , 4303},
	{933 , 4282},
	{958 , 4265},
	{965 , 4249},
	{968 , 4232},
	{968 , 4214},
	{970 , 4196},
	{980 , 4176},
	{995 , 4155},
	{1033, 4130},
	{1093, 4098},
	{1175, 4071},
	{1235, 4047},
	{1265, 4024},
	{1275, 3998},
	{1278, 3973},
	{1288, 3953},
	{1293, 3937},
	{1295, 3924},
	{1298, 3914},
	{1298, 3905},
	{1298, 3897},
	{1298, 3889},
	{1298, 3881},
	{1298, 3874},
	{1305, 3870},
	{620 , 3869},
	{385 , 3865},
	{290 , 3858},
	{248 , 3850},
	{230 , 3841},
	{218 , 3831},
	{213 , 3820},
	{215 , 3810},
	{218 , 3800},
	{225 , 3790},
	{233 , 3781},
	{238 , 3771},
	{240 , 3761},
	{258 , 3755},
	{453 , 3747},
	{1180, 3735},
	{1318, 3727},
	{1305, 3722},
	{1298, 3719},
	{1290, 3716},
	{1285, 3713},
	{1280, 3712},
	{1278, 3710},
	{1270, 3708},
	{1268, 3707},
	{1268, 3706},
	{1265, 3705},
	{1260, 3704},
	{1258, 3703},
	{1255, 3701},
	{1255, 3701},
	{1253, 3700},
	{1248, 3699},
	{1245, 3698},
	{1245, 3697},
	{1240, 3696},
	{1238, 3694},
	{1233, 3693},
	{1230, 3691},
	{1225, 3690},
	{1220, 3688},
	{1218, 3687},
	{1215, 3685},
	{1210, 3683},
	{1208, 3681},
	{1200, 3679},
	{1198, 3677},
	{1190, 3675},
	{1185, 3673},
	{1183, 3672},
	{1175, 3669},
	{1173, 3668},
	{1168, 3666},
	{1168, 3664},
	{1163, 3662},
	{1153, 3660},
	{1153, 3659},
	{1153, 3659},
	{1150, 3657},
	{503 , 3400}
};

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{              
	{235 , 4323},
	{415 , 4298},
	{425 , 4265},
	{470 , 4232},
	{525 , 4207},
	{555 , 4189},
	{570 , 4171},
	{585 , 4156},
	{595 , 4142},
	{600 , 4127},
	{600 , 4112},
	{600 , 4098},
	{610 , 4088},
	{628 , 4080},
	{633 , 4069},
	{628 , 4051},
	{615 , 4026},
	{605 , 4001},
	{608 , 3981},
	{603 , 3963},
	{605 , 3949},
	{605 , 3937},
	{603 , 3926},
	{610 , 3918},
	{610 , 3910},
	{613 , 3903},
	{610 , 3894},
	{613 , 3886},
	{613 , 3877},
	{618 , 3870},
	{618 , 3863},
	{623 , 3855},
	{628 , 3849},
	{633 , 3842},
	{635 , 3836},
	{640 , 3830},
	{645 , 3824},
	{648 , 3818},
	{655 , 3813},
	{658 , 3807},
	{660 , 3802},
	{665 , 3797},
	{668 , 3793},
	{670 , 3788},
	{675 , 3784},
	{678 , 3780},
	{683 , 3777},
	{690 , 3773},
	{698 , 3770},
	{703 , 3765},
	{710 , 3761},
	{723 , 3757},
	{733 , 3753},
	{745 , 3748},
	{758 , 3742},
	{773 , 3737},
	{783 , 3731},
	{803 , 3725},
	{818 , 3718},
	{833 , 3709},
	{855 , 3702},
	{883 , 3698},
	{913 , 3693},
	{953 , 3689},
	{1000, 3682},
	{1043, 3666},
	{1078, 3633},
	{1020, 3607},
	{960 , 3584},
	{910 , 3563},
	{868 , 3546},
	{830 , 3531},
	{800 , 3518},
	{768 , 3507},
	{748 , 3498},
	{733 , 3490},
	{710 , 3483},
	{700 , 3479},
	{693 , 3475},
	{680 , 3470},
	{670 , 3466},
	{663 , 3464},
	{660 , 3461},
	{653 , 3459},
	{650 , 3457},
	{508 , 3400}
};

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{              
	{140, 4334},
	{188, 4316},
	{193, 4300},
	{193, 4285},
	{193, 4270},
	{195, 4256},
	{198, 4241},
	{203, 4226},
	{205, 4212},
	{205, 4198},
	{210, 4184},
	{213, 4171},
	{210, 4156},
	{215, 4143},
	{218, 4129},
	{218, 4116},
	{220, 4102},
	{223, 4089},
	{225, 4079},
	{235, 4072},
	{230, 4059},
	{220, 4039},
	{213, 4017},
	{213, 3998},
	{218, 3984},
	{215, 3971},
	{220, 3962},
	{215, 3951},
	{208, 3939},
	{205, 3929},
	{203, 3919},
	{200, 3908},
	{198, 3898},
	{200, 3889},
	{200, 3880},
	{200, 3872},
	{198, 3864},
	{195, 3857},
	{200, 3851},
	{198, 3844},
	{198, 3838},
	{198, 3832},
	{198, 3826},
	{195, 3821},
	{193, 3816},
	{193, 3811},
	{190, 3806},
	{190, 3802},
	{193, 3798},
	{188, 3793},
	{190, 3789},
	{190, 3785},
	{190, 3781},
	{190, 3777},
	{185, 3771},
	{183, 3766},
	{185, 3762},
	{183, 3757},
	{185, 3753},
	{188, 3748},
	{185, 3744},
	{180, 3739},
	{173, 3734},
	{173, 3729},
	{163, 3721},
	{158, 3715},
	{158, 3710},
	{155, 3702},
	{148, 3692},
	{150, 3689},
	{153, 3687},
	{155, 3685},
	{160, 3682},
	{168, 3676},
	{165, 3650},
	{178, 3606},
	{195, 3546},
	{228, 3464},
	{288, 3333},
	{253, 3299},
	{223, 3287},
	{210, 3282},
	{200, 3279},
	{198, 3276},
	{188, 3275},
	{160, 3263}
};

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{              
	{115, 4341},
	{113, 4326},
	{115, 4312},
	{115, 4297},
	{118, 4282},
	{115, 4267},
	{115, 4252},
	{118, 4238},
	{115, 4223},
	{115, 4209},
	{118, 4194},
	{120, 4181},
	{118, 4166},
	{120, 4153},
	{120, 4139},
	{123, 4126},
	{125, 4113},
	{123, 4099},
	{125, 4086},
	{125, 4073},
	{125, 4060},
	{125, 4048},
	{128, 4035},
	{130, 4022},
	{130, 4010},
	{133, 3998},
	{133, 3986},
	{130, 3974},
	{130, 3960},
	{125, 3945},
	{123, 3932},
	{123, 3920},
	{118, 3908},
	{118, 3898},
	{118, 3889},
	{118, 3881},
	{118, 3872},
	{118, 3865},
	{118, 3857},
	{118, 3850},
	{118, 3843},
	{120, 3838},
	{123, 3832},
	{120, 3825},
	{120, 3820},
	{120, 3814},
	{120, 3809},
	{120, 3804},
	{125, 3800},
	{125, 3795},
	{125, 3791},
	{125, 3787},
	{128, 3782},
	{128, 3776},
	{120, 3768},
	{118, 3758},
	{118, 3752},
	{120, 3746},
	{118, 3740},
	{115, 3734},
	{118, 3730},
	{120, 3726},
	{118, 3722},
	{120, 3718},
	{120, 3713},
	{120, 3707},
	{120, 3701},
	{123, 3696},
	{123, 3689},
	{120, 3681},
	{120, 3678},
	{120, 3676},
	{125, 3675},
	{125, 3671},
	{128, 3662},
	{128, 3632},
	{133, 3586},
	{135, 3524},
	{145, 3439},
	{170, 3301},
	{153, 3259},
	{125, 3250},
	{120, 3246},
	{113, 3244},
	{113, 3244},
	{113, 3244}
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}

};   

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

