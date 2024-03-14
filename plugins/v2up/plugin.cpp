#include <smedley/plugin.hpp>
#include <smedley/eventregistry.hpp>
#include <smedley/events/console.hpp>
#include <smedley/clausewitz/lua.hpp>
#include <smedley/std/string.hpp>
#include <smedley/std/vector.hpp>
#include <smedley/v2/console.hpp>
#include <smedley/v2/gamestate.hpp>
#include <smedley/v2/db/culture.hpp>
#include <lua.hpp>
#include <functional>
#include <sstream>

namespace v2up
{
    using namespace smedley;

    v2::CConsoleCmd::SResult OnCommand(const sstd::vector<sstd::string> &argv)
    {
        int result;
        auto L = *clausewitz::GetLuaState(0);

        luaL_loadstring(L, "return 5 + 7");
        result = lua_pcall(L, 0, 1, 0);
        if (result == 0) {
            const char *result = lua_tolstring(L, -1, nullptr);
            return v2::CConsoleCmd::SResult(result);
        } else {
            return v2::CConsoleCmd::SResult("Failed to evaluate lua!");
        }
    }

    class Plugin : public smedley::Plugin
    {
    public:
        Plugin() : smedley::Plugin()
        {
        }

        void OnLoad() override
        {
            logger().Info("Loading v2up...");
            AddEventHandler<events::ConsoleCmdManagerInitEvent>(
                "on_console_cmd_init",
                std::bind(&Plugin::OnConsoleCmdManagerInit, this, std::placeholders::_1));
        }

        void OnConsoleCmdManagerInit(events::ConsoleCmdManagerInitEvent &e)
        {
            logger().Info("Initializing commands...");

            auto culture_db = v2::CCultureDataBase::instance();
            auto culture = culture_db->table().Find("yankee");
            for (auto country : v2::CCurrentGameState::instance()->countries()) {
                if (!country->exists()) {
                    continue;
                }

                country->AddAcceptedCulture(culture);
                logger().Info(std::string("added yankee culture to ") + country->name().c_str());
            }

            auto cmd_data = new v2::CConsoleCmd::SCommandData{0};
            cmd_data->is_allowed = true;
            cmd_data->name = "v2up";
            cmd_data->description = "displays the current version of the plugin.";
            cmd_data->handler = &OnCommand;

            e.cmd_mgr()->commands().push_back(cmd_data);
        }
    };

}

PLUGIN_API smedley::Plugin *CreatePlugin()
{
    return static_cast<smedley::Plugin *>(new v2up::Plugin{});
}
