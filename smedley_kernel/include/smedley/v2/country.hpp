#pragma once

#include "ai.hpp"
#include "culture.hpp"
#include "dataspread.hpp"
#include "distributionsettings.hpp"
#include "flags.hpp"
#include "history.hpp"
#include "mobilization.hpp"
#include "modifier.hpp"
#include "politics.hpp"
#include "rules.hpp"
#include "tag.hpp"
#include "tech.hpp"
#include "variables.hpp"
#include "../clausewitz/color.hpp"
#include "../clausewitz/persistent.hpp"
#include "../clausewitz/types.hpp"
#include "../std/pair.hpp"
#include "../std/string.hpp"
#include "../std/vector.hpp"

namespace smedley::v2
{

    class CActiveMission;
    class CBank;
    class CCasusBelliGeneration;
    class CColonialDistanceTracker;
    class CCreditor;
    class CDiplomaticAction;
    class CDiplomacyStatus;
    class CEvent;
    class CEventScope;
    class CGameState;
    class CGraphicalCultureType;
    class CLeader;
    class CNationalValue;
    class CNudgeIdler;
    class CPopDataBase;
    class CPopMovement;
    class CRailroadChunk;
    class CRallyPoint;
    class CRebelFaction;
    class CRegion;
    class CState;

    /**
     * CCountry corresponds a playable country in Victoria 2. It also includes
     * entities not commonly though of as countries, such as the Rebel Country (owner
     * of the rebel units and placeholder for rebel controlled territory), as well as 
     * the NULL country (owner of the "unowned" uncolonized territory in-game).
     */
    class CCountry : public clausewitz::CPersistent
    {
    protected:
        sstd::vector<CEvent *> _events; // 8 fired events?
        uint32_t _unk_0x18;
        CCountryTag _tag; // 1c
        uint32_t _unk_0x24[3];
        bool _unk_0x30;
        bool _is_great_power; // 31
        sstd::vector<void *> _unk_0x34;
        uint32_t _unk_0x44[4];
        clausewitz::CList<sstd::pair<sstd::string, sstd::string>> _unk_0x54; // type may be incorrect. localisation keys?
        uint32_t _unk_0x64;
        sstd::vector<CEvent *> _event_queue; // 68
        CEU3Date _next_quarterly_pulse; // 78
        CEU3Date _next_yearly_pulse; // 7c
        uint32_t _unk_0x80[6];
        int _campaign_counter; // 98
        CEU3Date _last_reform_date; // 9c
        sstd::vector<CTaxSetting *> _tax_settings; // a0
        clausewitz::CVector2<sstd::vector<clausewitz::fixed_point<int64_t,48,15>>> _expenses; // b0
        clausewitz::CVector2<sstd::vector<clausewitz::fixed_point<int64_t,48,15>>> _incomes; // d0
        sstd::string _unk_0xf0;
        CColonialDistanceTracker *_colonial_distance_tracker; // 10c
        //clausewitz::CHashTable<sstd::string, void *> _unk_0x110;
        uint32_t _unk_0x110[4];
        bool _mobilize; // 120
        uint32_t _unk_0x124[5];
        clausewitz::fixed_point<int64_t,48,15> _share_factor; // 138
        uint8_t _unk_0x140[0x44];
        sstd::vector<sstd::string> _ignored_decisions; // 184
        uint32_t _unk_0x194[5];
        clausewitz::CFixedPoint _plurality; // 1a8
        clausewitz::CFixedPoint _revanchism; // 1ac
        CFlags _flags; // 1b0
        CVariables _variables; // 1dc
        CCountryAI *_ai; // 208
        CAIStrategy _ai_hard_strategy; // 20c
        CAIStrategy _ai_default_strategy; // 364
        CEU3Date _last_party_change; // 4bc
        CEU3Date _last_lost_war; // 4c0
        uint8_t _tech_projects[16]; // 4c4
        uint32_t _unk_0x4d4;
        clausewitz::CList<CTimedModifier *> _timed_modifiers; // 4d8
        clausewitz::CList<CStaticModifier *> _static_modifiers; // 4e8
        clausewitz::CList<CInvention *> _active_inventions; // 4f8
        clausewitz::CList<CInvention *> _potential_inventions; // 508
        clausewitz::CList<CInvention *> _illegal_inventions; // 518
        CStaticModifier _unk_0x528;
        CStaticModifier _unk_0x574;
        CStaticModifier _unk_0x5c0;
        CStaticModifier _unk_0x60c;
        bool _auto_assign_leaders; // 658
        bool _auto_create_leaders; // 659
        clausewitz::CFixedPoint _diplomatic_points; // 65c
        CEU3Date _last_election;
        CEU3Date _election_date;
        CEU3Date _last_rebel_acceptance;
        clausewitz::CList<CCountryDate *> _fow_lifted; // 66c
        uint32_t _unk_0x67c;
        clausewitz::CFixedPoint _war_exhaustion; // 680
        CStaticModifier _unk_0x684;
        CModifier _unk_0x6d0;
        uint32_t _unk_0x700[7];
        CModifier _unk_0x71c;
        uint32_t _unk_0x74c[7];
        CModifier _unk_0x768;
        uint32_t _unk_0x798[7];
        clausewitz::CList<CUnit *> _units; // 7b4
        uint32_t _unk_0x7c4[3];
        clausewitz::fixed_point<int64_t,48,15> _leadership; // 7d0
        int _num_colonial_provinces; // 7d8
        uint32_t _unk_0x7dc;
        CModifier _unk_0x7e0;
        uint32_t _unk_0x810[7];
        clausewitz::CList<CParty *> _parties; // 82c
        clausewitz::CList<CParty *> _active_parties; // 83c
        CParty *_ruling_party; // 84c
        sstd::vector<CIssue *> _social_reforms; // 850
        sstd::vector<CIssue *> _political_reforms; // 860
        sstd::vector<CIssue *> _military_reforms; // 870
        sstd::vector<CIssue *> _economic_reforms; // 880
        sstd::vector<CIssue *> _policies; // 890
        sstd::vector<CIssue *> _unk_0x8a0; // enacted reforms?
        CUpperHouse _upper_house; // 8b0
        CDataSpread<clausewitz::fixed_point<int64_t,48,15>,int,100> _unk_0x8d0; // people or voter ideologies?
        CDataSpread<clausewitz::fixed_point<int64_t,48,15>,int,100> _important_issues;
        clausewitz::CColor _color; // 920
        uint32_t _unk_0x93c; // color flag?
        sstd::vector<clausewitz::CColor> _colors; // 940
        uint8_t _unk_0x950[0x64];
        CCountryHistory _history;           // 9b4
        sstd::vector<int> _owned_provinces; // 9d8
        clausewitz::CList<int> _controlled_provinces; // 9e8
        clausewitz::CList<int> _core_provinces; // 9f8
        clausewitz::CList<int> _unk_0xa08;
        uint32_t _unk_0xa18[12];
        CModifier _modifiers; // a48
        CModifier _unk_0xa78;
        CRule _rules; // aa8
        CTechnologyStatus *_tech_status; // bcc
        CGovernment *_government; // bd0
        clausewitz::CList<v2::CLeader *> _leaders; // bd4
        int _capital_province_id; // be4
        sstd::vector<v2::CDiplomacyStatus *> _diplomatic_statuses; // be8
        CActiveMission *_active_mission; // bf8
        uint8_t _unk_0xbfc[0xa4];
        CEU3Date _unk_0xca0;
        sstd::string _unk_0xca4;
        sstd::string _last_mission; // cc0
        CNudgeIdler *_nudge_idler; // cd4
        CGraphicalCultureType *_graphical_culture; // ce0
        clausewitz::CList<CDiplomaticAction *> _diplomatic_actions; // ce4
        bool _is_substate; // cf4
        bool _is_vassal; // cf5
        CCountryTag _overlord; // cf8
        uint8_t _unk_0xd00[0x38];
        sstd::vector<CCountryTag> _vassals; // d38
        sstd::vector<CCountryTag> _unk_0xd48;
        sstd::vector<CCountryTag> _allies; // d58
        sstd::vector<CCountryTag> _unk_0xd68; // also allies?
        sstd::vector<CCountryTag> _guaranteed; // d78
        sstd::vector<CCountryTag> _neighbors; // d88
        sstd::vector<CCountryTag> _unk_0xd98;
        uint32_t _unk_0xda8[4];
        sstd::vector<int> _unk_0xdb8;
        uint8_t _unk_0xdc8[0x38];
        sstd::vector<int> _slider_locks;
        uint32_t _unk_0xe10;
        sstd::vector<CCountryTag> _historical_friends; // e14
        uint32_t _unk_0xe24[6];
        clausewitz::CFixedPoint _research_points; // e3c
        int _tech_school_id; // e40
        clausewitz::CList<CState *> _states; // e44
        clausewitz::CList<CCulture *> _accepted_cultures; // e54
        CCulture *_primary_culture; // e64
        uint32_t _unk_0xe68[4];
        clausewitz::fixed_point<int64_t,48,15> _treasury; // e78
        clausewitz::fixed_point<int64_t,48,15> _treasury_delta; // e80
        CBank *_bank; // e88
        sstd::vector<CCreditor *> _creditors; // e8c
        CEU3Date _last_bankruptcy_date; // e9c
        clausewitz::CFixedPoint _prestige; // ea0
        uint8_t _unk_0xea4[0x20];
        CGoodsPool _land_supply_cost; // ec4
        CGoodsPool _naval_supply_cost; // f1c
        CGoodsPool _naval_need; // f74
        CGoodsPool _unk_0xfcc;
        CGoodsPool _unk_0x1024;
        CGoodsPool _unk_0x107c;
        CGoodsPool _unk_0x10d4;
        CGoodsPool _unk_0x112c;
        CGoodsPool _stockpile; // 118c
        CGoodsPool _stockpile_remaining; // 11dc
        sstd::vector<CDistributionSetting *> _spending_settings; // 1234
        CGoodsPool _unk_0x1244; // domestic purchases?
        bool _buy_from_stockpile; // 129c
        sstd::vector<CTradeSetting> _trade_settings; // 12a0;
        CNationalValue *_national_value; // 12b0
        uint8_t _unk_0x12b4[0x1c];
        bool _is_civilized; // 12d0
        uint8_t _unk_0x12d4[0x11c];
        sstd::vector<int> _unk_0x13f0; // diplomatic influence?
        CEU3Date _unk_0x1400;
        int _ranking; // 1404
        int _military_ranking; // 1408
        int _industrial_ranking; // 140c
        int _prestige_ranking; // 1410
        uint32_t _unk_0x1414;
        sstd::vector<CCountryTag> _spherelings; // 1418
        CCountryTag _sphere_leader; // 1428
        clausewitz::CFixedPoint _infamy; // 1430
        uint32_t _unk_0x1434[3];
        clausewitz::fixed_point<int64_t,48,15> _tariffs; // 1440
        clausewitz::fixed_point<int64_t,48,15> _trade_cap_army; // 1448
        clausewitz::fixed_point<int64_t,48,15> _trade_cap_naval; // 1450
        clausewitz::fixed_point<int64_t,48,15> _trade_cap_projects; // 1458
        clausewitz::fixed_point<int64_t,48,15> _min_spend_on_land_units; // 1460
        clausewitz::fixed_point<int64_t,48,15> _min_spend_on_naval_units; // 1468
        clausewitz::fixed_point<int64_t,48,15> _min_spend_on_constructions; // 1470
        uint8_t _unk_0x1478[0x24];
        clausewitz::CList<CRegion *> _colonies; // 149c
        clausewitz::CList<sstd::string> _first_names; // 14ac
        clausewitz::CList<sstd::string> _last_names; // 14bc
        uint8_t _unk_0x14cc[0x18];
        sstd::vector<void *> _unk_0x14e4;
        sstd::vector<void *> _unk_0x14f4;
        uint8_t _unk_0x1504[0x34];
        clausewitz::fixed_point<int64_t,48,15> _overseas_penalty; // 1538
        uint32_t _unk_0x1540;
        bool _is_releasable_vassal; // 1544
        uint8_t _unk_0x1548[0x18];
        clausewitz::fixed_point<int64_t,48,15> _tax_base; // 1560
        uint32_t _unk_0x1568;
        CCasusBelliGeneration *_cb_generation; // 156c
        sstd::vector<CRallyPoint *> _rally_points; // 1570
        sstd::vector<clausewitz::fixed_point<int64_t,48,15>> _foreign_investment; // 1580
        sstd::vector<CPopMovement *> _movements; // 1590
        uint8_t _unk_15a0[0xc];
        sstd::vector<CRailroadChunk *> _railroad_chunks; // 15ac
        bool _railroad_cache_invalid; // 15bc
        uint8_t _unk_0x15c0[0x1c];
        sstd::vector<CMobilizationSchedule> _scheduled_mobilizations; // 15dc
        sstd::string _region_name; // 15ec
    protected:
        /*[[[cog
        from codegen import print_class_model_fns
        print_class_model_fns('./models/v2/classes/CCountry.toml', access='protected') 
        ]]]*/
        void ClearIncomeAndExpenses()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x11fb60;
        __asm mov eax, this __asm call _addr
        }
        void DailyUpdate()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x108590;
        __asm push this __asm call _addr
        }
        void Initialize()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x103020;
        __asm push this __asm call _addr
        }
        void InitializeDiplomacy()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x1047c0;
        __asm push this __asm call _addr
        }
        void MonthlyUpdate()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x10c2a0;
        __asm push this __asm call _addr
        }
        void PayDailyInterest()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x123c30;
        __asm push this __asm call _addr
        }
        void UpdateCapital()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x10e540;
        __asm push this __asm call _addr
        }
        void UpdateOverlord()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x119920;
        __asm push this __asm call _addr
        }
        void UpdateShareFactor()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x140880;
        __asm push this __asm call _addr
        }
        //[[[end]]]

    public:
        /*[[[cog
        from codegen import print_class_model_fns
        print_class_model_fns('./models/v2/classes/CCountry.toml', access='public') 
        ]]]*/
        void AddAcceptedCulture(const CCulture & culture)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x122310;
        __asm mov esi, this __asm push culture __asm call _addr
        }
        void AddCasusBelli(const CCountryTag & target,const sstd::string & cb_tag,int months,bool send_message)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x135fc0;
        __asm mov edi, this __asm push send_message __asm push months __asm push cb_tag __asm push target __asm call _addr
        }
        void AddControlledProvince(int provinceId)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x10e250;
        __asm mov esi, this __asm push provinceId __asm call _addr
        }
        void AddLeader(CLeader & leader,bool add_to_history)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x10e760;
        __asm mov esi, this __asm push add_to_history __asm push leader __asm call _addr
        }
        void AddPrestige(clausewitz::CFixedPoint delta)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x1341a0;
        __asm mov esi, this __asm push delta __asm call _addr
        }
        void AddTimedModifier(sstd::string modifier_tag,int days)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x1114d0;
        __asm push days __asm push modifier_tag __asm push this __asm call _addr
        }
        void AddToSphere(const CCountryTag & target)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x133e50;
        __asm mov esi, target __asm push this __asm call _addr
        }
        void AddUnit(CUnit & unit)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x113c80;
        __asm mov edi, this __asm mov eax, unit __asm call _addr
        }
        void Annex(const CCountryTag & arg_0,const CCountryTag & target)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x118620;
        __asm push target __asm push arg_0 __asm push this __asm call _addr
        }
        static void AnnexProvinces(const sstd::vector<int> & provinces,const CCountryTag & target,CEU3Date * arg_2,bool arg_3,const CCountryTag & remove_core)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0xb5a90;
        __asm push remove_core __asm push arg_3 __asm push arg_2 __asm push target __asm push provinces __asm call _addr
        }
        void Break(CRebelFaction & faction)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x116630;
        __asm push faction __asm push this __asm call _addr
        }
        void BreakAlliances()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x117250;
        __asm push this __asm call _addr
        }
        clausewitz::fixed_point<int64_t,48,15> CalcFactoryCost(const CBuilding & building,bool arg_1)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0xdaa10;
        clausewitz::fixed_point<int64_t,48,15> ret_val;
        auto ret_val_ptr = &ret_val;
        __asm mov esi, ret_val_ptr __asm mov edi, this __asm mov ecx, building __asm push arg_1 __asm call _addr
        return ret_val;
        }
        clausewitz::fixed_point<int64_t,48,15> CalcGovernmentNeedForGood(int good_type_idx)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x139760;
        clausewitz::fixed_point<int64_t,48,15> ret_val;
        auto ret_val_ptr = &ret_val;
        __asm mov esi, ret_val_ptr __asm mov eax, this __asm push good_type_idx __asm call _addr
        return ret_val;
        }
        clausewitz::fixed_point<int64_t,48,15> CalcLoanLimitFrom(CCountryTag tag)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x1225a0;
        clausewitz::fixed_point<int64_t,48,15> ret_val;
        auto ret_val_ptr = &ret_val;
        __asm mov eax, this __asm push tag __asm push ret_val_ptr __asm call _addr
        return ret_val;
        }
        clausewitz::fixed_point<int64_t,48,15> CalcPercentageOfTaxableIncome(const sstd::vector<clausewitz::fixed_point<int64_t,48,15>> & tax_settings)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x12b610;
        clausewitz::fixed_point<int64_t,48,15> ret_val;
        auto ret_val_ptr = &ret_val;
        __asm mov esi, ret_val_ptr __asm push tax_settings __asm push this __asm call _addr
        return ret_val;
        }
        CGoodsPool CalcRemainingInputsForBuilding(const CBuilding & building,const CGoodsPool & inputs_needed)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0xdabf0;
        CGoodsPool ret_val;
        auto ret_val_ptr = &ret_val;
        __asm mov edi, this __asm push ret_val_ptr __asm push inputs_needed __asm push building __asm call _addr
        return ret_val;
        }
        bool CanTakeLoanFrom(CCountryTag tag)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x123130;
        __asm push tag __asm push this __asm call _addr
        }
        void ChangeCapital(int province_id,bool add_to_history)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x10e4c0;
        __asm mov edi, this __asm push add_to_history __asm push province_id __asm call _addr
        }
        void ChangeGovernment(const CGovernment & government,bool arg_1,void * arg_2,bool arg_3)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x113a90;
        __asm mov esi, this __asm push arg_3 __asm push arg_2 __asm push arg_1 __asm push government __asm call _addr
        }
        void ConstructStateBuilding(CBuilding & building,CState & state)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x12c6b0;
        __asm push state __asm push building __asm push this __asm call _addr
        }
        void DeclareAsBadDebtor()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x1241f0;
        __asm push this __asm call _addr
        }
        void DelayedEvent(CEvent & event,CEventScope & scope,int days)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x140a70;
        __asm push days __asm push scope __asm push event __asm push this __asm call _addr
        }
        void DiscoverInvention(CInvention & invention,bool arg_1)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x102090;
        __asm push arg_1 __asm push invention __asm push this __asm call _addr
        }
        void DismantleSphere()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x1340a0;
        __asm mov edi, this __asm call _addr
        }
        void GetAllianceDiplomaticValue(CCountry & player,int & out_val,sstd::string & out_str)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x43ec10;
        __asm push out_str __asm push out_val __asm push player __asm push this __asm call _addr
        }
        CPopMovement * GetMovement(const CIssue & issue)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x140e40;
        __asm mov edx, this __asm mov edi, issue __asm call _addr
        }
        CPopMovement * GetMovement(const CCountryTag & tag)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x140e80;
        __asm mov edx, this __asm push tag __asm call _addr
        }
        bool HasStaticModifier(const CStaticModifier & modifier)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x1068b0;
        __asm mov esi, this __asm push modifier __asm call _addr
        }
        void NationalizeFactories()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x1441f0;
        __asm mov edi, this __asm call _addr
        }
        void PayBackLoan(bool arg_0,clausewitz::fixed_point<int64_t,48,15> amount)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x1238d0;
        __asm mov ecx, this __asm push amount __asm push arg_0 __asm call _addr
        }
        void RearrangeUpperHouse()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x127d10;
        __asm push this __asm call _addr
        }
        void RefreshSubUnits()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x108330;
        __asm push this __asm call _addr
        }
        void RemoveDebts(bool ignore_already_paid)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x111340;
        __asm push ignore_already_paid __asm push this __asm call _addr
        }
        void RemoveFoW(int months,CCountryTag target)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x11b350;
        __asm mov edi, this __asm push target __asm push months __asm call _addr
        }
        void RemoveFromSphere(const CCountryTag & target)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x133f20;
        __asm mov edi, target __asm push this __asm call _addr
        }
        void SaveColor()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x11b870;
        __asm mov ecx, this __asm call _addr
        }
        void SetLeadership(clausewitz::fixed_point<int64_t,48,15> arg_0)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x139380;
        __asm mov eax, this __asm push arg_0 __asm call _addr
        }
        void SetPrimaryCulture(clausewitz::fixed_point<int64_t,48,15> arg_0)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x139380;
        __asm mov eax, this __asm push arg_0 __asm call _addr
        }
        void SetRelations(const CCountryTag & tag,clausewitz::CFixedPoint n)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x1179e0;
        __asm mov edi, this __asm mov edx, tag __asm push n __asm call _addr
        }
        void SetResearchPoints(clausewitz::CFixedPoint n)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x1366f0;
        __asm mov esi, this __asm push n __asm call _addr
        }
        bool TakeLoan(bool arg_0,clausewitz::fixed_point<int64_t,48,15> amount)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x122910;
        __asm push amount __asm push arg_0 __asm push this __asm call _addr
        }
        clausewitz::fixed_point<int64_t,48,15> TakeLoanFrom(CCountryTag tag,clausewitz::fixed_point<int64_t,48,15> amount)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x122820;
        clausewitz::fixed_point<int64_t,48,15> ret_val;
        auto ret_val_ptr = &ret_val;
        __asm mov esi, ret_val_ptr __asm push amount __asm push tag __asm push this __asm call _addr
        return ret_val;
        }
        bool TryTakeLoanFrom(CCountryTag tag,clausewitz::fixed_point<int64_t,48,15> amount)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x123400;
        __asm push amount __asm push tag __asm push this __asm call _addr
        }
        void Westernize()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x142370;
        __asm push this __asm call _addr
        }
        clausewitz::fixed_point<int64_t,48,15> WithdrawFromTreasury(int expense_type,clausewitz::fixed_point<int64_t,48,15> amount)
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x142370;
        clausewitz::fixed_point<int64_t,48,15> ret_val;
        auto ret_val_ptr = &ret_val;
        __asm mov edi, ret_val_ptr __asm mov eax, this __asm push amount __asm push expense_type __asm call _addr
        return ret_val;
        }
        clausewitz::CFixedPoint daily_research_points()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x138150;
        clausewitz::CFixedPoint ret_val;
        auto ret_val_ptr = &ret_val;
        __asm mov edi, ret_val_ptr __asm mov ecx, this __asm call _addr
        return ret_val;
        }
        clausewitz::fixed_point<int64_t,48,15> debt()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x123880;
        __asm push this __asm call _addr
        }
        sstd::string name()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0xf97a0;
        sstd::string ret_val;
        auto ret_val_ptr = &ret_val;
        __asm mov ecx, ret_val_ptr __asm mov eax, this __asm call _addr
        return ret_val;
        }
        clausewitz::fixed_point<int64_t,48,15> tariff_efficiency()
        {
        const uintptr_t _addr = memory::Map::base_addr + 0x1339d0;
        clausewitz::fixed_point<int64_t,48,15> ret_val;
        auto ret_val_ptr = &ret_val;
        __asm mov edi, this __asm push ret_val_ptr __asm call _addr
        return ret_val;
        }
        //[[[end]]]

        inline bool exists() const { return _owned_provinces.size() > 0; }
    };

    static_assert(sizeof(CCountry) == 0x1608);

}