#ifndef HANDLES_CWORLDMARKET_HPP_
#define HANDLES_CWORLDMARKET_HPP_

#include <cstdint>
#include <handles/CGoodsPool.hpp>
#include <handles/CEU3Date.hpp>
#include <handles/vector.hpp>

#pragma pack(push, 1)

namespace smedley
{
namespace handles
{

struct CWorldMarket
{
	void **vftable;
	uint8_t field1_0x4;
	uint8_t field2_0x5;
	uint8_t field3_0x6;
	uint8_t field4_0x7;
	CGoodsPool supplyPool;
	CGoodsPool lastSupplyPool;
	CGoodsPool prevWorldMarketPool__;
	uint8_t field8_0x110;
	uint8_t field9_0x111;
	uint8_t field10_0x112;
	uint8_t field11_0x113;
	uint8_t field12_0x114;
	uint8_t field13_0x115;
	uint8_t field14_0x116;
	uint8_t field15_0x117;
	uint8_t field16_0x118;
	uint8_t field17_0x119;
	uint8_t field18_0x11a;
	uint8_t field19_0x11b;
	uint8_t field20_0x11c;
	uint8_t field21_0x11d;
	uint8_t field22_0x11e;
	uint8_t field23_0x11f;
	CGoodsPool worldMarketPool;
	CGoodsPool field25_0x178;
	CGoodsPool realDemand;
	CGoodsPool prevRealDemand__;
	CGoodsPool pricePool;
	CGoodsPool lastPriceHistory;
	uint8_t field30_0x330;
	uint8_t field31_0x331;
	uint8_t field32_0x332;
	uint8_t field33_0x333;
	uint8_t priceHistory;
	uint8_t field35_0x335;
	uint8_t field36_0x336;
	uint8_t field37_0x337;
	uint8_t field38_0x338;
	uint8_t field39_0x339;
	uint8_t field40_0x33a;
	uint8_t field41_0x33b;
	uint8_t field42_0x33c;
	uint8_t field43_0x33d;
	uint8_t field44_0x33e;
	uint8_t field45_0x33f;
	CEU3Date priceHistoryLastUpdate;
	CGoodsPool priceChange;
	CGoodsPool discoveredGoods;
	uint8_t field49_0x3f4;
	uint8_t field50_0x3f5;
	uint8_t field51_0x3f6;
	uint8_t field52_0x3f7;
	uint8_t field53_0x3f8;
	uint8_t field54_0x3f9;
	uint8_t field55_0x3fa;
	uint8_t field56_0x3fb;
	uint8_t field57_0x3fc;
	uint8_t field58_0x3fd;
	uint8_t field59_0x3fe;
	uint8_t field60_0x3ff;
	uint8_t field61_0x400;
	uint8_t field62_0x401;
	uint8_t field63_0x402;
	uint8_t field64_0x403;
	uint8_t field65_0x404;
	uint8_t field66_0x405;
	uint8_t field67_0x406;
	uint8_t field68_0x407;
	uint8_t field69_0x408;
	uint8_t field70_0x409;
	uint8_t field71_0x40a;
	uint8_t field72_0x40b;
	uint8_t field73_0x40c;
	uint8_t field74_0x40d;
	uint8_t field75_0x40e;
	uint8_t field76_0x40f;
	uint8_t field77_0x410;
	uint8_t field78_0x411;
	uint8_t field79_0x412;
	uint8_t field80_0x413;
	uint8_t field81_0x414;
	uint8_t field82_0x415;
	uint8_t field83_0x416;
	uint8_t field84_0x417;
	uint8_t field85_0x418;
	uint8_t field86_0x419;
	uint8_t field87_0x41a;
	uint8_t field88_0x41b;
	uint8_t field89_0x41c;
	uint8_t field90_0x41d;
	uint8_t field91_0x41e;
	uint8_t field92_0x41f;
	uint8_t field93_0x420;
	uint8_t field94_0x421;
	uint8_t field95_0x422;
	uint8_t field96_0x423;
	uint8_t field97_0x424;
	uint8_t field98_0x425;
	uint8_t field99_0x426;
	uint8_t field100_0x427;
	uint8_t field101_0x428;
	uint8_t field102_0x429;
	uint8_t field103_0x42a;
	uint8_t field104_0x42b;
	uint8_t field105_0x42c;
	uint8_t field106_0x42d;
	uint8_t field107_0x42e;
	uint8_t field108_0x42f;
	uint8_t field109_0x430;
	uint8_t field110_0x431;
	uint8_t field111_0x432;
	uint8_t field112_0x433;
	CGoodsPool actualSold;
	CGoodsPool prevActualSold__;
	uint8_t field115_0x4e4;
	uint8_t field116_0x4e5;
	uint8_t field117_0x4e6;
	uint8_t field118_0x4e7;
	uint8_t field119_0x4e8;
	uint8_t field120_0x4e9;
	uint8_t field121_0x4ea;
	uint8_t field122_0x4eb;
	uint8_t field123_0x4ec;
	uint8_t field124_0x4ed;
	uint8_t field125_0x4ee;
	uint8_t field126_0x4ef;
	uint8_t field127_0x4f0;
	uint8_t field128_0x4f1;
	uint8_t field129_0x4f2;
	uint8_t field130_0x4f3;
	CGoodsPool actualSoldWorld;
	CGoodsPool prevActualSoldWorld__;
	uint8_t field133_0x5a4;
	uint8_t field134_0x5a5;
	uint8_t field135_0x5a6;
	uint8_t field136_0x5a7;
	uint8_t field137_0x5a8;
	uint8_t field138_0x5a9;
	uint8_t field139_0x5aa;
	uint8_t field140_0x5ab;
	uint8_t field141_0x5ac;
	uint8_t field142_0x5ad;
	uint8_t field143_0x5ae;
	uint8_t field144_0x5af;
	uint8_t field145_0x5b0;
	uint8_t field146_0x5b1;
	uint8_t field147_0x5b2;
	uint8_t field148_0x5b3;
	CGoodsPool playerBalance;
	CGoodsPool field150_0x60c;
	CGoodsPool field151_0x664;
	CGoodsPool field152_0x6bc;
	vector<CGoodsPool> field153_0x714;
	CGoodsPool domesticProduced;
	CGoodsPool field155_0x77c;
	uint8_t field156_0x7d4;
	uint8_t field157_0x7d5;
	uint8_t field158_0x7d6;
	uint8_t field159_0x7d7;
	uint8_t field160_0x7d8;
	uint8_t field161_0x7d9;
	uint8_t field162_0x7da;
	uint8_t field163_0x7db;
	uint8_t field164_0x7dc;
	uint8_t field165_0x7dd;
	uint8_t field166_0x7de;
	uint8_t field167_0x7df;
	uint8_t field168_0x7e0;
	uint8_t field169_0x7e1;
	uint8_t field170_0x7e2;
	uint8_t field171_0x7e3;
	uint8_t field172_0x7e4;
	uint8_t field173_0x7e5;
	uint8_t field174_0x7e6;
	uint8_t field175_0x7e7;
	uint8_t field176_0x7e8;
	uint8_t field177_0x7e9;
	uint8_t field178_0x7ea;
	uint8_t field179_0x7eb;
	uint8_t field180_0x7ec;
	uint8_t field181_0x7ed;
	uint8_t field182_0x7ee;
	uint8_t field183_0x7ef;
	uint8_t field184_0x7f0;
	uint8_t field185_0x7f1;
	uint8_t field186_0x7f2;
	uint8_t field187_0x7f3;
	uint8_t field188_0x7f4;
	uint8_t field189_0x7f5;
	uint8_t field190_0x7f6;
	uint8_t field191_0x7f7;
	uint8_t field192_0x7f8;
	uint8_t field193_0x7f9;
	uint8_t field194_0x7fa;
	uint8_t field195_0x7fb;
	uint8_t field196_0x7fc;
	uint8_t field197_0x7fd;
	uint8_t field198_0x7fe;
	uint8_t field199_0x7ff;
	uint8_t field200_0x800;
	uint8_t field201_0x801;
	uint8_t field202_0x802;
	uint8_t field203_0x803;
	uint8_t field204_0x804;
	uint8_t field205_0x805;
	uint8_t field206_0x806;
	uint8_t field207_0x807;
	uint8_t field208_0x808;
	uint8_t field209_0x809;
	uint8_t field210_0x80a;
	uint8_t field211_0x80b;
	uint8_t field212_0x80c;
	uint8_t field213_0x80d;
	uint8_t field214_0x80e;
	uint8_t field215_0x80f;
	uint8_t field216_0x810;
	uint8_t field217_0x811;
	uint8_t field218_0x812;
	uint8_t field219_0x813;
	vector<CGoodsPool> countrySupplyPools__;
	uint8_t field221_0x824;
	uint8_t field222_0x825;
	uint8_t field223_0x826;
	uint8_t field224_0x827;
	uint8_t field225_0x828;
	uint8_t field226_0x829;
	uint8_t field227_0x82a;
	uint8_t field228_0x82b;
	uint8_t field229_0x82c;
	uint8_t field230_0x82d;
	uint8_t field231_0x82e;
	uint8_t field232_0x82f;
	uint8_t field233_0x830;
	uint8_t field234_0x831;
	uint8_t field235_0x832;
	uint8_t field236_0x833;
	uint8_t field237_0x834;
	uint8_t field238_0x835;
	uint8_t field239_0x836;
	uint8_t field240_0x837;
	uint8_t field241_0x838;
	uint8_t field242_0x839;
	uint8_t field243_0x83a;
	uint8_t field244_0x83b;
	uint8_t field245_0x83c;
	uint8_t field246_0x83d;
	uint8_t field247_0x83e;
	uint8_t field248_0x83f;
	uint8_t field249_0x840;
	uint8_t field250_0x841;
	uint8_t field251_0x842;
	uint8_t field252_0x843;
	uint8_t field253_0x844;
	uint8_t field254_0x845;
	uint8_t field255_0x846;
	uint8_t field256_0x847;
	uint8_t field257_0x848;
	uint8_t field258_0x849;
	uint8_t field259_0x84a;
	uint8_t field260_0x84b;
	uint8_t field261_0x84c;
	uint8_t field262_0x84d;
	uint8_t field263_0x84e;
	uint8_t field264_0x84f;
	uint8_t field265_0x850;
	uint8_t field266_0x851;
	uint8_t field267_0x852;
	uint8_t field268_0x853;
	uint8_t field269_0x854;
	uint8_t field270_0x855;
	uint8_t field271_0x856;
	uint8_t field272_0x857;
	uint8_t field273_0x858;
	uint8_t field274_0x859;
	uint8_t field275_0x85a;
	uint8_t field276_0x85b;
	uint8_t field277_0x85c;
	uint8_t field278_0x85d;
	uint8_t field279_0x85e;
	uint8_t field280_0x85f;
	uint8_t field281_0x860;
	uint8_t field282_0x861;
	uint8_t field283_0x862;
	uint8_t field284_0x863;
	uint8_t field285_0x864;
	uint8_t field286_0x865;
	uint8_t field287_0x866;
	uint8_t field288_0x867;
	uint8_t field289_0x868;
	uint8_t field290_0x869;
	uint8_t field291_0x86a;
	uint8_t field292_0x86b;
	uint8_t field293_0x86c;
	uint8_t field294_0x86d;
	uint8_t field295_0x86e;
	uint8_t field296_0x86f;
	uint8_t field297_0x870;
	uint8_t field298_0x871;
	uint8_t field299_0x872;
	uint8_t field300_0x873;
	uint8_t field301_0x874;
	uint8_t field302_0x875;
	uint8_t field303_0x876;
	uint8_t field304_0x877;
	uint8_t field305_0x878;
	uint8_t field306_0x879;
	uint8_t field307_0x87a;
	uint8_t field308_0x87b;
	uint8_t field309_0x87c;
	uint8_t field310_0x87d;
	uint8_t field311_0x87e;
	uint8_t field312_0x87f;
	uint8_t field313_0x880;
	uint8_t field314_0x881;
	uint8_t field315_0x882;
	uint8_t field316_0x883;
	uint8_t field317_0x884;
	uint8_t field318_0x885;
	uint8_t field319_0x886;
	uint8_t field320_0x887;
	uint8_t field321_0x888;
	uint8_t field322_0x889;
	uint8_t field323_0x88a;
	uint8_t field324_0x88b;
	uint8_t field325_0x88c;
	uint8_t field326_0x88d;
	uint8_t field327_0x88e;
	uint8_t field328_0x88f;
	uint8_t field329_0x890;
	uint8_t field330_0x891;
	uint8_t field331_0x892;
	uint8_t field332_0x893;
	uint8_t field333_0x894;
	uint8_t field334_0x895;
	uint8_t field335_0x896;
	uint8_t field336_0x897;
	uint8_t field337_0x898;
	uint8_t field338_0x899;
	uint8_t field339_0x89a;
	uint8_t field340_0x89b;
	uint8_t field341_0x89c;
	uint8_t field342_0x89d;
	uint8_t field343_0x89e;
	uint8_t field344_0x89f;
	uint8_t field345_0x8a0;
	uint8_t field346_0x8a1;
	uint8_t field347_0x8a2;
	uint8_t field348_0x8a3;
	uint8_t field349_0x8a4;
	uint8_t field350_0x8a5;
	uint8_t field351_0x8a6;
	uint8_t field352_0x8a7;
	uint8_t field353_0x8a8;
	uint8_t field354_0x8a9;
	uint8_t field355_0x8aa;
	uint8_t field356_0x8ab;
	uint8_t field357_0x8ac;
	uint8_t field358_0x8ad;
	uint8_t field359_0x8ae;
	uint8_t field360_0x8af;
	uint8_t field361_0x8b0;
	uint8_t field362_0x8b1;
	uint8_t field363_0x8b2;
	uint8_t field364_0x8b3;
	uint8_t field365_0x8b4;
	uint8_t field366_0x8b5;
	uint8_t field367_0x8b6;
	uint8_t field368_0x8b7;
	uint8_t field369_0x8b8;
	uint8_t field370_0x8b9;
	uint8_t field371_0x8ba;
	uint8_t field372_0x8bb;
	uint8_t field373_0x8bc;
	uint8_t field374_0x8bd;
	uint8_t field375_0x8be;
	uint8_t field376_0x8bf;
	uint8_t field377_0x8c0;
	uint8_t field378_0x8c1;
	uint8_t field379_0x8c2;
	uint8_t field380_0x8c3;
	uint8_t field381_0x8c4;
	uint8_t field382_0x8c5;
	uint8_t field383_0x8c6;
	uint8_t field384_0x8c7;
	uint8_t field385_0x8c8;
	uint8_t field386_0x8c9;
	uint8_t field387_0x8ca;
	uint8_t field388_0x8cb;
	uint8_t field389_0x8cc;
	uint8_t field390_0x8cd;
	uint8_t field391_0x8ce;
	uint8_t field392_0x8cf;
	uint8_t field393_0x8d0;
	uint8_t field394_0x8d1;
	uint8_t field395_0x8d2;
	uint8_t field396_0x8d3;
	uint8_t field397_0x8d4;
	uint8_t field398_0x8d5;
	uint8_t field399_0x8d6;
	uint8_t field400_0x8d7;
	uint8_t field401_0x8d8;
	uint8_t field402_0x8d9;
	uint8_t field403_0x8da;
	uint8_t field404_0x8db;
	uint8_t field405_0x8dc;
	uint8_t field406_0x8dd;
	uint8_t field407_0x8de;
	uint8_t field408_0x8df;
	uint8_t field409_0x8e0;
	uint8_t field410_0x8e1;
	uint8_t field411_0x8e2;
	uint8_t field412_0x8e3;
	uint8_t field413_0x8e4;
	uint8_t field414_0x8e5;
	uint8_t field415_0x8e6;
	uint8_t field416_0x8e7;
	uint8_t field417_0x8e8;
	uint8_t field418_0x8e9;
	uint8_t field419_0x8ea;
	uint8_t field420_0x8eb;
	uint8_t field421_0x8ec;
	uint8_t field422_0x8ed;
	uint8_t field423_0x8ee;
	uint8_t field424_0x8ef;
	uint8_t field425_0x8f0;
	uint8_t field426_0x8f1;
	uint8_t field427_0x8f2;
	uint8_t field428_0x8f3;
	uint8_t field429_0x8f4;
	uint8_t field430_0x8f5;
	uint8_t field431_0x8f6;
	uint8_t field432_0x8f7;
	uint8_t field433_0x8f8;
	uint8_t field434_0x8f9;
	uint8_t field435_0x8fa;
	uint8_t field436_0x8fb;
	uint8_t field437_0x8fc;
	uint8_t field438_0x8fd;
	uint8_t field439_0x8fe;
	uint8_t field440_0x8ff;
	uint8_t field441_0x900;
	uint8_t field442_0x901;
	uint8_t field443_0x902;
	uint8_t field444_0x903;
};

}
}

#pragma pack(pop)

#endif // HANDLES_CWORLDMARKET_HPP_