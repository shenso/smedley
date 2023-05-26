#ifndef HANDLES_CTECHNOLOGY_HPP_
#define HANDLES_CTECHNOLOGY_HPP_

#include <cstdint>
#include <handles/CMeanTimeToHappen.hpp>
#include <handles/CAndTrigger.hpp>
#include <handles/basic_string.hpp>
#include <handles/CFixedPoint.hpp>

#pragma pack(push, 1)

namespace smedley
{
namespace handles
{

struct CSubUnitDefinition;
struct CTechnologyFolder;
struct CBuilding;
struct CCrime;
struct CTechnology_vftable;

struct CTechnology
{
	CTechnology_vftable * vftable;
	uint8_t field1_0x4;
	uint8_t field2_0x5;
	uint8_t field3_0x6;
	uint8_t field4_0x7;
	uint8_t field5_0x8;
	uint8_t field6_0x9;
	uint8_t field7_0xa;
	uint8_t field8_0xb;
	uint8_t field9_0xc;
	uint8_t field10_0xd;
	uint8_t field11_0xe;
	uint8_t field12_0xf;
	uint8_t field13_0x10;
	uint8_t field14_0x11;
	uint8_t field15_0x12;
	uint8_t field16_0x13;
	uint8_t field17_0x14;
	uint8_t field18_0x15;
	uint8_t field19_0x16;
	uint8_t field20_0x17;
	uint8_t field21_0x18;
	uint8_t field22_0x19;
	uint8_t field23_0x1a;
	uint8_t field24_0x1b;
	uint8_t field25_0x1c;
	uint8_t field26_0x1d;
	uint8_t field27_0x1e;
	uint8_t field28_0x1f;
	uint8_t field29_0x20;
	uint8_t field30_0x21;
	uint8_t field31_0x22;
	uint8_t field32_0x23;
	uint8_t field33_0x24;
	uint8_t field34_0x25;
	uint8_t field35_0x26;
	uint8_t field36_0x27;
	uint8_t field37_0x28;
	uint8_t field38_0x29;
	uint8_t field39_0x2a;
	uint8_t field40_0x2b;
	uint8_t field41_0x2c;
	uint8_t field42_0x2d;
	uint8_t field43_0x2e;
	uint8_t field44_0x2f;
	uint8_t field45_0x30;
	uint8_t field46_0x31;
	uint8_t field47_0x32;
	uint8_t field48_0x33;
	uint8_t field49_0x34;
	uint8_t field50_0x35;
	uint8_t field51_0x36;
	uint8_t field52_0x37;
	uint8_t field53_0x38;
	uint8_t field54_0x39;
	uint8_t field55_0x3a;
	uint8_t field56_0x3b;
	uint8_t field57_0x3c;
	uint8_t field58_0x3d;
	uint8_t field59_0x3e;
	uint8_t field60_0x3f;
	uint8_t field61_0x40;
	uint8_t field62_0x41;
	uint8_t field63_0x42;
	uint8_t field64_0x43;
	uint8_t field65_0x44;
	uint8_t field66_0x45;
	uint8_t field67_0x46;
	uint8_t field68_0x47;
	uint8_t field69_0x48;
	uint8_t field70_0x49;
	uint8_t field71_0x4a;
	uint8_t field72_0x4b;
	uint8_t field73_0x4c;
	uint8_t field74_0x4d;
	uint8_t field75_0x4e;
	uint8_t field76_0x4f;
	uint8_t field77_0x50;
	uint8_t field78_0x51;
	uint8_t field79_0x52;
	uint8_t field80_0x53;
	uint8_t field81_0x54;
	uint8_t field82_0x55;
	uint8_t field83_0x56;
	uint8_t field84_0x57;
	uint8_t field85_0x58;
	uint8_t field86_0x59;
	uint8_t field87_0x5a;
	uint8_t field88_0x5b;
	uint8_t field89_0x5c;
	uint8_t field90_0x5d;
	uint8_t field91_0x5e;
	uint8_t field92_0x5f;
	uint8_t field93_0x60;
	uint8_t field94_0x61;
	uint8_t field95_0x62;
	uint8_t field96_0x63;
	uint8_t field97_0x64;
	uint8_t field98_0x65;
	uint8_t field99_0x66;
	uint8_t field100_0x67;
	uint8_t field101_0x68;
	uint8_t field102_0x69;
	uint8_t field103_0x6a;
	uint8_t field104_0x6b;
	uint8_t field105_0x6c;
	uint8_t field106_0x6d;
	uint8_t field107_0x6e;
	uint8_t field108_0x6f;
	uint8_t field109_0x70;
	uint8_t field110_0x71;
	uint8_t field111_0x72;
	uint8_t field112_0x73;
	uint8_t field113_0x74;
	uint8_t field114_0x75;
	uint8_t field115_0x76;
	uint8_t field116_0x77;
	uint8_t field117_0x78;
	uint8_t field118_0x79;
	uint8_t field119_0x7a;
	uint8_t field120_0x7b;
	uint8_t field121_0x7c;
	uint8_t field122_0x7d;
	uint8_t field123_0x7e;
	uint8_t field124_0x7f;
	uint8_t field125_0x80;
	uint8_t field126_0x81;
	uint8_t field127_0x82;
	uint8_t field128_0x83;
	uint8_t field129_0x84;
	uint8_t field130_0x85;
	uint8_t field131_0x86;
	uint8_t field132_0x87;
	uint8_t field133_0x88;
	uint8_t field134_0x89;
	uint8_t field135_0x8a;
	uint8_t field136_0x8b;
	uint8_t field137_0x8c;
	uint8_t field138_0x8d;
	uint8_t field139_0x8e;
	uint8_t field140_0x8f;
	uint8_t field141_0x90;
	uint8_t field142_0x91;
	uint8_t field143_0x92;
	uint8_t field144_0x93;
	uint8_t field145_0x94;
	uint8_t field146_0x95;
	uint8_t field147_0x96;
	uint8_t field148_0x97;
	uint8_t field149_0x98;
	uint8_t field150_0x99;
	uint8_t field151_0x9a;
	uint8_t field152_0x9b;
	uint8_t field153_0x9c;
	uint8_t field154_0x9d;
	uint8_t field155_0x9e;
	uint8_t field156_0x9f;
	uint8_t field157_0xa0;
	uint8_t field158_0xa1;
	uint8_t field159_0xa2;
	uint8_t field160_0xa3;
	uint8_t field161_0xa4;
	uint8_t field162_0xa5;
	uint8_t field163_0xa6;
	uint8_t field164_0xa7;
	uint8_t field165_0xa8;
	uint8_t field166_0xa9;
	uint8_t field167_0xaa;
	uint8_t field168_0xab;
	uint8_t field169_0xac;
	uint8_t field170_0xad;
	uint8_t field171_0xae;
	uint8_t field172_0xaf;
	uint8_t field173_0xb0;
	uint8_t field174_0xb1;
	uint8_t field175_0xb2;
	uint8_t field176_0xb3;
	uint8_t field177_0xb4;
	uint8_t field178_0xb5;
	uint8_t field179_0xb6;
	uint8_t field180_0xb7;
	uint8_t field181_0xb8;
	uint8_t field182_0xb9;
	uint8_t field183_0xba;
	uint8_t field184_0xbb;
	uint8_t field185_0xbc;
	uint8_t field186_0xbd;
	uint8_t field187_0xbe;
	uint8_t field188_0xbf;
	uint8_t field189_0xc0;
	uint8_t field190_0xc1;
	uint8_t field191_0xc2;
	uint8_t field192_0xc3;
	uint8_t field193_0xc4;
	uint8_t field194_0xc5;
	uint8_t field195_0xc6;
	uint8_t field196_0xc7;
	uint8_t field197_0xc8;
	uint8_t field198_0xc9;
	uint8_t field199_0xca;
	uint8_t field200_0xcb;
	uint8_t field201_0xcc;
	uint8_t field202_0xcd;
	uint8_t field203_0xce;
	uint8_t field204_0xcf;
	uint8_t field205_0xd0;
	uint8_t field206_0xd1;
	uint8_t field207_0xd2;
	uint8_t field208_0xd3;
	uint8_t field209_0xd4;
	uint8_t field210_0xd5;
	uint8_t field211_0xd6;
	uint8_t field212_0xd7;
	uint8_t field213_0xd8;
	uint8_t field214_0xd9;
	uint8_t field215_0xda;
	uint8_t field216_0xdb;
	uint8_t field217_0xdc;
	uint8_t field218_0xdd;
	uint8_t field219_0xde;
	uint8_t field220_0xdf;
	uint8_t field221_0xe0;
	uint8_t field222_0xe1;
	uint8_t field223_0xe2;
	uint8_t field224_0xe3;
	uint8_t field225_0xe4;
	uint8_t field226_0xe5;
	uint8_t field227_0xe6;
	uint8_t field228_0xe7;
	uint8_t field229_0xe8;
	uint8_t field230_0xe9;
	uint8_t field231_0xea;
	uint8_t field232_0xeb;
	uint8_t field233_0xec;
	uint8_t field234_0xed;
	uint8_t field235_0xee;
	uint8_t field236_0xef;
	uint8_t field237_0xf0;
	uint8_t field238_0xf1;
	uint8_t field239_0xf2;
	uint8_t field240_0xf3;
	uint8_t field241_0xf4;
	uint8_t field242_0xf5;
	uint8_t field243_0xf6;
	uint8_t field244_0xf7;
	uint8_t field245_0xf8;
	uint8_t field246_0xf9;
	uint8_t field247_0xfa;
	uint8_t field248_0xfb;
	uint8_t field249_0xfc;
	uint8_t field250_0xfd;
	uint8_t field251_0xfe;
	uint8_t field252_0xff;
	uint8_t field253_0x100;
	uint8_t field254_0x101;
	uint8_t field255_0x102;
	uint8_t field256_0x103;
	uint8_t field257_0x104;
	uint8_t field258_0x105;
	uint8_t field259_0x106;
	uint8_t field260_0x107;
	uint8_t field261_0x108;
	uint8_t field262_0x109;
	uint8_t field263_0x10a;
	uint8_t field264_0x10b;
	uint8_t field265_0x10c;
	uint8_t field266_0x10d;
	uint8_t field267_0x10e;
	uint8_t field268_0x10f;
	uint8_t field269_0x110;
	uint8_t field270_0x111;
	uint8_t field271_0x112;
	uint8_t field272_0x113;
	uint8_t field273_0x114;
	uint8_t field274_0x115;
	uint8_t field275_0x116;
	uint8_t field276_0x117;
	uint8_t field277_0x118;
	uint8_t field278_0x119;
	uint8_t field279_0x11a;
	uint8_t field280_0x11b;
	uint8_t field281_0x11c;
	uint8_t field282_0x11d;
	uint8_t field283_0x11e;
	uint8_t field284_0x11f;
	uint8_t field285_0x120;
	uint8_t field286_0x121;
	uint8_t field287_0x122;
	uint8_t field288_0x123;
	uint8_t field289_0x124;
	uint8_t field290_0x125;
	uint8_t field291_0x126;
	uint8_t field292_0x127;
	uint8_t field293_0x128;
	uint8_t field294_0x129;
	uint8_t field295_0x12a;
	uint8_t field296_0x12b;
	uint8_t field297_0x12c;
	uint8_t field298_0x12d;
	uint8_t field299_0x12e;
	uint8_t field300_0x12f;
	uint8_t field301_0x130;
	uint8_t field302_0x131;
	uint8_t field303_0x132;
	uint8_t field304_0x133;
	uint8_t field305_0x134;
	uint8_t field306_0x135;
	uint8_t field307_0x136;
	uint8_t field308_0x137;
	uint8_t field309_0x138;
	uint8_t field310_0x139;
	uint8_t field311_0x13a;
	uint8_t field312_0x13b;
	uint8_t field313_0x13c;
	uint8_t field314_0x13d;
	uint8_t field315_0x13e;
	uint8_t field316_0x13f;
	uint8_t field317_0x140;
	uint8_t field318_0x141;
	uint8_t field319_0x142;
	uint8_t field320_0x143;
	uint8_t field321_0x144;
	uint8_t field322_0x145;
	uint8_t field323_0x146;
	uint8_t field324_0x147;
	uint8_t field325_0x148;
	uint8_t field326_0x149;
	uint8_t field327_0x14a;
	uint8_t field328_0x14b;
	uint8_t field329_0x14c;
	uint8_t field330_0x14d;
	uint8_t field331_0x14e;
	uint8_t field332_0x14f;
	uint8_t field333_0x150;
	uint8_t field334_0x151;
	uint8_t field335_0x152;
	uint8_t field336_0x153;
	uint8_t field337_0x154;
	uint8_t field338_0x155;
	uint8_t field339_0x156;
	uint8_t field340_0x157;
	uint8_t field341_0x158;
	uint8_t field342_0x159;
	uint8_t field343_0x15a;
	uint8_t field344_0x15b;
	uint8_t field345_0x15c;
	uint8_t field346_0x15d;
	uint8_t field347_0x15e;
	uint8_t field348_0x15f;
	uint8_t field349_0x160;
	uint8_t field350_0x161;
	uint8_t field351_0x162;
	uint8_t field352_0x163;
	uint8_t field353_0x164;
	uint8_t field354_0x165;
	uint8_t field355_0x166;
	uint8_t field356_0x167;
	uint8_t field357_0x168;
	uint8_t field358_0x169;
	uint8_t field359_0x16a;
	uint8_t field360_0x16b;
	uint8_t field361_0x16c;
	uint8_t field362_0x16d;
	uint8_t field363_0x16e;
	uint8_t field364_0x16f;
	uint8_t field365_0x170;
	uint8_t field366_0x171;
	uint8_t field367_0x172;
	uint8_t field368_0x173;
	uint8_t field369_0x174;
	uint8_t field370_0x175;
	uint8_t field371_0x176;
	uint8_t field372_0x177;
	uint8_t field373_0x178;
	uint8_t field374_0x179;
	uint8_t field375_0x17a;
	uint8_t field376_0x17b;
	uint8_t field377_0x17c;
	uint8_t field378_0x17d;
	uint8_t field379_0x17e;
	uint8_t field380_0x17f;
	uint8_t field381_0x180;
	uint8_t field382_0x181;
	uint8_t field383_0x182;
	uint8_t field384_0x183;
	uint8_t field385_0x184;
	uint8_t field386_0x185;
	uint8_t field387_0x186;
	uint8_t field388_0x187;
	uint8_t field389_0x188;
	uint8_t field390_0x189;
	uint8_t field391_0x18a;
	uint8_t field392_0x18b;
	uint8_t field393_0x18c;
	uint8_t field394_0x18d;
	uint8_t field395_0x18e;
	uint8_t field396_0x18f;
	uint8_t field397_0x190;
	uint8_t field398_0x191;
	uint8_t field399_0x192;
	uint8_t field400_0x193;
	uint8_t field401_0x194;
	uint8_t field402_0x195;
	uint8_t field403_0x196;
	uint8_t field404_0x197;
	uint8_t field405_0x198;
	uint8_t field406_0x199;
	uint8_t field407_0x19a;
	uint8_t field408_0x19b;
	uint8_t field409_0x19c;
	uint8_t field410_0x19d;
	uint8_t field411_0x19e;
	uint8_t field412_0x19f;
	uint8_t field413_0x1a0;
	uint8_t field414_0x1a1;
	uint8_t field415_0x1a2;
	uint8_t field416_0x1a3;
	uint8_t field417_0x1a4;
	uint8_t field418_0x1a5;
	uint8_t field419_0x1a6;
	uint8_t field420_0x1a7;
	uint8_t field421_0x1a8;
	uint8_t field422_0x1a9;
	uint8_t field423_0x1aa;
	uint8_t field424_0x1ab;
	uint8_t field425_0x1ac;
	uint8_t field426_0x1ad;
	uint8_t field427_0x1ae;
	uint8_t field428_0x1af;
	uint8_t field429_0x1b0;
	uint8_t field430_0x1b1;
	uint8_t field431_0x1b2;
	uint8_t field432_0x1b3;
	uint8_t field433_0x1b4;
	uint8_t field434_0x1b5;
	uint8_t field435_0x1b6;
	uint8_t field436_0x1b7;
	uint8_t field437_0x1b8;
	uint8_t field438_0x1b9;
	uint8_t field439_0x1ba;
	uint8_t field440_0x1bb;
	uint8_t field441_0x1bc;
	uint8_t field442_0x1bd;
	uint8_t field443_0x1be;
	uint8_t field444_0x1bf;
	uint8_t field445_0x1c0;
	uint8_t field446_0x1c1;
	uint8_t field447_0x1c2;
	uint8_t field448_0x1c3;
	uint8_t field449_0x1c4;
	uint8_t field450_0x1c5;
	uint8_t field451_0x1c6;
	uint8_t field452_0x1c7;
	uint8_t field453_0x1c8;
	uint8_t field454_0x1c9;
	uint8_t field455_0x1ca;
	uint8_t field456_0x1cb;
	uint8_t field457_0x1cc;
	uint8_t field458_0x1cd;
	uint8_t field459_0x1ce;
	uint8_t field460_0x1cf;
	uint8_t field461_0x1d0;
	uint8_t field462_0x1d1;
	uint8_t field463_0x1d2;
	uint8_t field464_0x1d3;
	uint8_t field465_0x1d4;
	uint8_t field466_0x1d5;
	uint8_t field467_0x1d6;
	uint8_t field468_0x1d7;
	uint8_t field469_0x1d8;
	uint8_t field470_0x1d9;
	uint8_t field471_0x1da;
	uint8_t field472_0x1db;
	uint8_t field473_0x1dc;
	uint8_t field474_0x1dd;
	uint8_t field475_0x1de;
	uint8_t field476_0x1df;
	uint8_t field477_0x1e0;
	uint8_t field478_0x1e1;
	uint8_t field479_0x1e2;
	uint8_t field480_0x1e3;
	uint8_t field481_0x1e4;
	uint8_t field482_0x1e5;
	uint8_t field483_0x1e6;
	uint8_t field484_0x1e7;
	uint8_t field485_0x1e8;
	uint8_t field486_0x1e9;
	uint8_t field487_0x1ea;
	uint8_t field488_0x1eb;
	uint8_t field489_0x1ec;
	uint8_t field490_0x1ed;
	uint8_t field491_0x1ee;
	uint8_t field492_0x1ef;
	uint8_t field493_0x1f0;
	uint8_t field494_0x1f1;
	uint8_t field495_0x1f2;
	uint8_t field496_0x1f3;
	uint8_t field497_0x1f4;
	uint8_t field498_0x1f5;
	uint8_t field499_0x1f6;
	uint8_t field500_0x1f7;
	uint8_t field501_0x1f8;
	uint8_t field502_0x1f9;
	uint8_t field503_0x1fa;
	uint8_t field504_0x1fb;
	uint8_t field505_0x1fc;
	uint8_t field506_0x1fd;
	uint8_t field507_0x1fe;
	uint8_t field508_0x1ff;
	uint8_t field509_0x200;
	uint8_t field510_0x201;
	uint8_t field511_0x202;
	uint8_t field512_0x203;
	uint8_t field513_0x204;
	uint8_t field514_0x205;
	uint8_t field515_0x206;
	uint8_t field516_0x207;
	uint8_t field517_0x208;
	uint8_t field518_0x209;
	uint8_t field519_0x20a;
	uint8_t field520_0x20b;
	uint8_t field521_0x20c;
	uint8_t field522_0x20d;
	uint8_t field523_0x20e;
	uint8_t field524_0x20f;
	uint8_t field525_0x210;
	uint8_t field526_0x211;
	uint8_t field527_0x212;
	uint8_t field528_0x213;
	uint8_t field529_0x214;
	uint8_t field530_0x215;
	uint8_t field531_0x216;
	uint8_t field532_0x217;
	uint8_t field533_0x218;
	uint8_t field534_0x219;
	uint8_t field535_0x21a;
	uint8_t field536_0x21b;
	uint8_t field537_0x21c;
	uint8_t field538_0x21d;
	uint8_t field539_0x21e;
	uint8_t field540_0x21f;
	uint8_t field541_0x220;
	uint8_t field542_0x221;
	uint8_t field543_0x222;
	uint8_t field544_0x223;
	uint8_t field545_0x224;
	uint8_t field546_0x225;
	uint8_t field547_0x226;
	uint8_t field548_0x227;
	uint8_t field549_0x228;
	uint8_t field550_0x229;
	uint8_t field551_0x22a;
	uint8_t field552_0x22b;
	uint8_t field553_0x22c;
	uint8_t field554_0x22d;
	uint8_t field555_0x22e;
	uint8_t field556_0x22f;
	uint8_t field557_0x230;
	uint8_t field558_0x231;
	uint8_t field559_0x232;
	uint8_t field560_0x233;
	uint8_t field561_0x234;
	uint8_t field562_0x235;
	uint8_t field563_0x236;
	uint8_t field564_0x237;
	uint8_t field565_0x238;
	uint8_t field566_0x239;
	uint8_t field567_0x23a;
	uint8_t field568_0x23b;
	uint8_t field569_0x23c;
	uint8_t field570_0x23d;
	uint8_t field571_0x23e;
	uint8_t field572_0x23f;
	uint8_t field573_0x240;
	uint8_t field574_0x241;
	uint8_t field575_0x242;
	uint8_t field576_0x243;
	uint8_t field577_0x244;
	uint8_t field578_0x245;
	uint8_t field579_0x246;
	uint8_t field580_0x247;
	uint8_t field581_0x248;
	uint8_t field582_0x249;
	uint8_t field583_0x24a;
	uint8_t field584_0x24b;
	uint8_t field585_0x24c;
	uint8_t field586_0x24d;
	uint8_t field587_0x24e;
	uint8_t field588_0x24f;
	uint8_t field589_0x250;
	uint8_t field590_0x251;
	uint8_t field591_0x252;
	uint8_t field592_0x253;
	uint8_t field593_0x254;
	uint8_t field594_0x255;
	uint8_t field595_0x256;
	uint8_t field596_0x257;
	uint8_t field597_0x258;
	uint8_t field598_0x259;
	uint8_t field599_0x25a;
	uint8_t field600_0x25b;
	uint8_t field601_0x25c;
	uint8_t field602_0x25d;
	uint8_t field603_0x25e;
	uint8_t field604_0x25f;
	uint8_t field605_0x260;
	uint8_t field606_0x261;
	uint8_t field607_0x262;
	uint8_t field608_0x263;
	uint8_t field609_0x264;
	uint8_t field610_0x265;
	uint8_t field611_0x266;
	uint8_t field612_0x267;
	uint8_t field613_0x268;
	uint8_t field614_0x269;
	uint8_t field615_0x26a;
	uint8_t field616_0x26b;
	uint8_t field617_0x26c;
	uint8_t field618_0x26d;
	uint8_t field619_0x26e;
	uint8_t field620_0x26f;
	uint8_t field621_0x270;
	uint8_t field622_0x271;
	uint8_t field623_0x272;
	uint8_t field624_0x273;
	uint8_t field625_0x274;
	uint8_t field626_0x275;
	uint8_t field627_0x276;
	uint8_t field628_0x277;
	uint8_t field629_0x278;
	uint8_t field630_0x279;
	uint8_t field631_0x27a;
	uint8_t field632_0x27b;
	uint8_t field633_0x27c;
	uint8_t field634_0x27d;
	uint8_t field635_0x27e;
	uint8_t field636_0x27f;
	uint8_t field637_0x280;
	uint8_t field638_0x281;
	uint8_t field639_0x282;
	uint8_t field640_0x283;
	uint8_t field641_0x284;
	uint8_t field642_0x285;
	uint8_t field643_0x286;
	uint8_t field644_0x287;
	uint8_t field645_0x288;
	uint8_t field646_0x289;
	uint8_t field647_0x28a;
	uint8_t field648_0x28b;
	uint8_t field649_0x28c;
	uint8_t field650_0x28d;
	uint8_t field651_0x28e;
	uint8_t field652_0x28f;
	uint8_t field653_0x290;
	uint8_t field654_0x291;
	uint8_t field655_0x292;
	uint8_t field656_0x293;
	uint8_t field657_0x294;
	uint8_t field658_0x295;
	uint8_t field659_0x296;
	uint8_t field660_0x297;
	uint8_t field661_0x298;
	uint8_t field662_0x299;
	uint8_t field663_0x29a;
	uint8_t field664_0x29b;
	uint8_t field665_0x29c;
	uint8_t field666_0x29d;
	uint8_t field667_0x29e;
	uint8_t field668_0x29f;
	uint8_t field669_0x2a0;
	uint8_t field670_0x2a1;
	uint8_t field671_0x2a2;
	uint8_t field672_0x2a3;
	uint8_t field673_0x2a4;
	uint8_t field674_0x2a5;
	uint8_t field675_0x2a6;
	uint8_t field676_0x2a7;
	LexerToken token;
	basic_string<char> name;
	basic_string<char> label;
	int id;
	int cost;
	uint8_t field682_0x2ec;
	uint8_t field683_0x2ed;
	uint8_t field684_0x2ee;
	uint8_t field685_0x2ef;
	CAndTrigger allow;
	bool change;
	uint8_t field688_0x30d;
	uint8_t field689_0x30e;
	uint8_t field690_0x30f;
	CTechnologyFolder * techFolder;
	basic_string<char> area;
	uint8_t field693_0x330;
	uint8_t field694_0x331;
	uint8_t field695_0x332;
	uint8_t field696_0x333;
	uint8_t field697_0x334;
	uint8_t field698_0x335;
	uint8_t field699_0x336;
	uint8_t field700_0x337;
	uint8_t field701_0x338;
	uint8_t field702_0x339;
	uint8_t field703_0x33a;
	uint8_t field704_0x33b;
	uint8_t field705_0x33c;
	uint8_t field706_0x33d;
	uint8_t field707_0x33e;
	uint8_t field708_0x33f;
	int year;
	int difficulty;
	CSubUnitDefinition * deactivateUnit;
	CSubUnitDefinition * activateUnit;
	CCrime * enableCrime;
	CBuilding * activateBuilding;
	bool canUpgrade;
	uint8_t field716_0x359;
	uint8_t field717_0x35a;
	uint8_t field718_0x35b;
	uint8_t field719_0x35c;
	uint8_t field720_0x35d;
	uint8_t field721_0x35e;
	uint8_t field722_0x35f;
	uint8_t field723_0x360;
	uint8_t field724_0x361;
	uint8_t field725_0x362;
	uint8_t field726_0x363;
	uint8_t field727_0x364;
	uint8_t field728_0x365;
	uint8_t field729_0x366;
	uint8_t field730_0x367;
	uint8_t field731_0x368;
	uint8_t field732_0x369;
	uint8_t field733_0x36a;
	uint8_t field734_0x36b;
	CFixedPoint sharedPrestige;
	CMeanTimeToHappen aiChance;
	bool uncivMilitary;
	uint8_t field738_0x38d;
	uint8_t field739_0x38e;
	uint8_t field740_0x38f;
};

}
}

#pragma pack(pop)

#endif // HANDLES_CTECHNOLOGY_HPP_