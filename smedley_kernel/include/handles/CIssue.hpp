#ifndef HANDLES_CISSUE_HPP_
#define HANDLES_CISSUE_HPP_

#include <cstdint>
#include <handles/CAndTrigger.hpp>
#include <handles/basic_string.hpp>
#include <handles/CColor.hpp>
#include <handles/CFixedPoint64.hpp>
#include <handles/CFixedPoint.hpp>

#pragma pack(push, 1)

namespace smedley
{
namespace handles
{

struct CIssueGroup;

struct CIssue
{
	void **vftable;
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
	basic_string<char> name;
	int id;
	CIssueGroup * group;
	CAndTrigger allow;
	uint8_t rules;
	uint8_t field54_0x75;
	uint8_t field55_0x76;
	uint8_t field56_0x77;
	uint8_t field57_0x78;
	uint8_t field58_0x79;
	uint8_t field59_0x7a;
	uint8_t field60_0x7b;
	uint8_t field61_0x7c;
	uint8_t field62_0x7d;
	uint8_t field63_0x7e;
	uint8_t field64_0x7f;
	uint8_t field65_0x80;
	uint8_t field66_0x81;
	uint8_t field67_0x82;
	uint8_t field68_0x83;
	uint8_t field69_0x84;
	uint8_t field70_0x85;
	uint8_t field71_0x86;
	uint8_t field72_0x87;
	uint8_t field73_0x88;
	uint8_t field74_0x89;
	uint8_t field75_0x8a;
	uint8_t field76_0x8b;
	uint8_t field77_0x8c;
	uint8_t field78_0x8d;
	uint8_t field79_0x8e;
	uint8_t field80_0x8f;
	uint8_t field81_0x90;
	uint8_t field82_0x91;
	uint8_t field83_0x92;
	uint8_t field84_0x93;
	uint8_t field85_0x94;
	uint8_t field86_0x95;
	uint8_t field87_0x96;
	uint8_t field88_0x97;
	uint8_t field89_0x98;
	uint8_t field90_0x99;
	uint8_t field91_0x9a;
	uint8_t field92_0x9b;
	uint8_t field93_0x9c;
	uint8_t field94_0x9d;
	uint8_t field95_0x9e;
	uint8_t field96_0x9f;
	uint8_t field97_0xa0;
	uint8_t field98_0xa1;
	uint8_t field99_0xa2;
	uint8_t field100_0xa3;
	uint8_t field101_0xa4;
	uint8_t field102_0xa5;
	uint8_t field103_0xa6;
	uint8_t field104_0xa7;
	uint8_t field105_0xa8;
	uint8_t field106_0xa9;
	uint8_t field107_0xaa;
	uint8_t field108_0xab;
	uint8_t field109_0xac;
	uint8_t field110_0xad;
	uint8_t field111_0xae;
	uint8_t field112_0xaf;
	uint8_t field113_0xb0;
	uint8_t field114_0xb1;
	uint8_t field115_0xb2;
	uint8_t field116_0xb3;
	uint8_t field117_0xb4;
	uint8_t field118_0xb5;
	uint8_t field119_0xb6;
	uint8_t field120_0xb7;
	uint8_t field121_0xb8;
	uint8_t field122_0xb9;
	uint8_t field123_0xba;
	uint8_t field124_0xbb;
	uint8_t field125_0xbc;
	uint8_t field126_0xbd;
	uint8_t field127_0xbe;
	uint8_t field128_0xbf;
	uint8_t field129_0xc0;
	uint8_t field130_0xc1;
	uint8_t field131_0xc2;
	uint8_t field132_0xc3;
	uint8_t field133_0xc4;
	uint8_t field134_0xc5;
	uint8_t field135_0xc6;
	uint8_t field136_0xc7;
	uint8_t field137_0xc8;
	uint8_t field138_0xc9;
	uint8_t field139_0xca;
	uint8_t field140_0xcb;
	uint8_t field141_0xcc;
	uint8_t field142_0xcd;
	uint8_t field143_0xce;
	uint8_t field144_0xcf;
	uint8_t field145_0xd0;
	uint8_t field146_0xd1;
	uint8_t field147_0xd2;
	uint8_t field148_0xd3;
	uint8_t field149_0xd4;
	uint8_t field150_0xd5;
	uint8_t field151_0xd6;
	uint8_t field152_0xd7;
	uint8_t field153_0xd8;
	uint8_t field154_0xd9;
	uint8_t field155_0xda;
	uint8_t field156_0xdb;
	uint8_t field157_0xdc;
	uint8_t field158_0xdd;
	uint8_t field159_0xde;
	uint8_t field160_0xdf;
	uint8_t field161_0xe0;
	uint8_t field162_0xe1;
	uint8_t field163_0xe2;
	uint8_t field164_0xe3;
	uint8_t field165_0xe4;
	uint8_t field166_0xe5;
	uint8_t field167_0xe6;
	uint8_t field168_0xe7;
	uint8_t field169_0xe8;
	uint8_t field170_0xe9;
	uint8_t field171_0xea;
	uint8_t field172_0xeb;
	uint8_t field173_0xec;
	uint8_t field174_0xed;
	uint8_t field175_0xee;
	uint8_t field176_0xef;
	uint8_t field177_0xf0;
	uint8_t field178_0xf1;
	uint8_t field179_0xf2;
	uint8_t field180_0xf3;
	uint8_t field181_0xf4;
	uint8_t field182_0xf5;
	uint8_t field183_0xf6;
	uint8_t field184_0xf7;
	uint8_t field185_0xf8;
	uint8_t field186_0xf9;
	uint8_t field187_0xfa;
	uint8_t field188_0xfb;
	uint8_t field189_0xfc;
	uint8_t field190_0xfd;
	uint8_t field191_0xfe;
	uint8_t field192_0xff;
	uint8_t field193_0x100;
	uint8_t field194_0x101;
	uint8_t field195_0x102;
	uint8_t field196_0x103;
	uint8_t field197_0x104;
	uint8_t field198_0x105;
	uint8_t field199_0x106;
	uint8_t field200_0x107;
	uint8_t field201_0x108;
	uint8_t field202_0x109;
	uint8_t field203_0x10a;
	uint8_t field204_0x10b;
	uint8_t field205_0x10c;
	uint8_t field206_0x10d;
	uint8_t field207_0x10e;
	uint8_t field208_0x10f;
	uint8_t field209_0x110;
	uint8_t field210_0x111;
	uint8_t field211_0x112;
	uint8_t field212_0x113;
	uint8_t field213_0x114;
	uint8_t field214_0x115;
	uint8_t field215_0x116;
	uint8_t field216_0x117;
	uint8_t field217_0x118;
	uint8_t field218_0x119;
	uint8_t field219_0x11a;
	uint8_t field220_0x11b;
	uint8_t field221_0x11c;
	uint8_t field222_0x11d;
	uint8_t field223_0x11e;
	uint8_t field224_0x11f;
	uint8_t field225_0x120;
	uint8_t field226_0x121;
	uint8_t field227_0x122;
	uint8_t field228_0x123;
	uint8_t field229_0x124;
	uint8_t field230_0x125;
	uint8_t field231_0x126;
	uint8_t field232_0x127;
	uint8_t field233_0x128;
	uint8_t field234_0x129;
	uint8_t field235_0x12a;
	uint8_t field236_0x12b;
	uint8_t field237_0x12c;
	uint8_t field238_0x12d;
	uint8_t field239_0x12e;
	uint8_t field240_0x12f;
	uint8_t field241_0x130;
	uint8_t field242_0x131;
	uint8_t field243_0x132;
	uint8_t field244_0x133;
	uint8_t field245_0x134;
	uint8_t field246_0x135;
	uint8_t field247_0x136;
	uint8_t field248_0x137;
	uint8_t field249_0x138;
	uint8_t field250_0x139;
	uint8_t field251_0x13a;
	uint8_t field252_0x13b;
	uint8_t field253_0x13c;
	uint8_t field254_0x13d;
	uint8_t field255_0x13e;
	uint8_t field256_0x13f;
	uint8_t field257_0x140;
	uint8_t field258_0x141;
	uint8_t field259_0x142;
	uint8_t field260_0x143;
	uint8_t field261_0x144;
	uint8_t field262_0x145;
	uint8_t field263_0x146;
	uint8_t field264_0x147;
	uint8_t field265_0x148;
	uint8_t field266_0x149;
	uint8_t field267_0x14a;
	uint8_t field268_0x14b;
	uint8_t field269_0x14c;
	uint8_t field270_0x14d;
	uint8_t field271_0x14e;
	uint8_t field272_0x14f;
	uint8_t field273_0x150;
	uint8_t field274_0x151;
	uint8_t field275_0x152;
	uint8_t field276_0x153;
	uint8_t field277_0x154;
	uint8_t field278_0x155;
	uint8_t field279_0x156;
	uint8_t field280_0x157;
	uint8_t field281_0x158;
	uint8_t field282_0x159;
	uint8_t field283_0x15a;
	uint8_t field284_0x15b;
	uint8_t field285_0x15c;
	uint8_t field286_0x15d;
	uint8_t field287_0x15e;
	uint8_t field288_0x15f;
	uint8_t field289_0x160;
	uint8_t field290_0x161;
	uint8_t field291_0x162;
	uint8_t field292_0x163;
	uint8_t field293_0x164;
	uint8_t field294_0x165;
	uint8_t field295_0x166;
	uint8_t field296_0x167;
	uint8_t field297_0x168;
	uint8_t field298_0x169;
	uint8_t field299_0x16a;
	uint8_t field300_0x16b;
	uint8_t field301_0x16c;
	uint8_t field302_0x16d;
	uint8_t field303_0x16e;
	uint8_t field304_0x16f;
	uint8_t field305_0x170;
	uint8_t field306_0x171;
	uint8_t field307_0x172;
	uint8_t field308_0x173;
	uint8_t field309_0x174;
	uint8_t field310_0x175;
	uint8_t field311_0x176;
	uint8_t field312_0x177;
	uint8_t field313_0x178;
	uint8_t field314_0x179;
	uint8_t field315_0x17a;
	uint8_t field316_0x17b;
	uint8_t field317_0x17c;
	uint8_t field318_0x17d;
	uint8_t field319_0x17e;
	uint8_t field320_0x17f;
	uint8_t field321_0x180;
	uint8_t field322_0x181;
	uint8_t field323_0x182;
	uint8_t field324_0x183;
	uint8_t field325_0x184;
	uint8_t field326_0x185;
	uint8_t field327_0x186;
	uint8_t field328_0x187;
	uint8_t field329_0x188;
	uint8_t field330_0x189;
	uint8_t field331_0x18a;
	uint8_t field332_0x18b;
	uint8_t field333_0x18c;
	uint8_t field334_0x18d;
	uint8_t field335_0x18e;
	uint8_t field336_0x18f;
	uint8_t field337_0x190;
	uint8_t field338_0x191;
	uint8_t field339_0x192;
	uint8_t field340_0x193;
	uint8_t field341_0x194;
	uint8_t field342_0x195;
	uint8_t field343_0x196;
	uint8_t field344_0x197;
	CColor color;
	int administrativeMultiplier;
	CFixedPoint64 warExhaustionEffect;
	CFixedPoint techCost;
	bool isJingoism;
	uint8_t field350_0x1c5;
	uint8_t field351_0x1c6;
	uint8_t field352_0x1c7;
	uint8_t onExecute;
	uint8_t field354_0x1c9;
	uint8_t field355_0x1ca;
	uint8_t field356_0x1cb;
	uint8_t field357_0x1cc;
	uint8_t field358_0x1cd;
	uint8_t field359_0x1ce;
	uint8_t field360_0x1cf;
	uint8_t field361_0x1d0;
	uint8_t field362_0x1d1;
	uint8_t field363_0x1d2;
	uint8_t field364_0x1d3;
	uint8_t field365_0x1d4;
	uint8_t field366_0x1d5;
	uint8_t field367_0x1d6;
	uint8_t field368_0x1d7;
};

}
}

#pragma pack(pop)

#endif // HANDLES_CISSUE_HPP_