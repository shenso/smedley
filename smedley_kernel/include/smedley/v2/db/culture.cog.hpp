#pragma once

#include "../../clausewitz/types.hpp"
#include "../../std/vector.hpp"
#include "../culture.hpp"

namespace smedley::v2
{

    class CCultureDataBase
    {
        clausewitz::CHashTable<sstd::string, CCulture> _table; // 0
        sstd::vector<CCulture *> _cultures; // c
        sstd::vector<CCultureGroup *> _groups; // 1c
    public:
        clausewitz::CHashTable<sstd::string, CCulture> table() { return _table; }
        const clausewitz::CHashTable<sstd::string, CCulture> table() const { return _table; }
        sstd::vector<CCulture *> cultures() { return _cultures; }
        const sstd::vector<CCulture *> cultures() const { return _cultures; }
        sstd::vector<CCultureGroup *> groups() { return _groups; }
        const sstd::vector<CCultureGroup *> groups() const { return _groups; }

        /*[[[cog
        from codegen import print_class_model_fns
        print_class_model_fns('./models/v2/classes/CCultureDataBase.toml')
        ]]]*/
        // [[[end]]]
    };

    static_assert(sizeof(CCultureDataBase) == 0x2c);

}