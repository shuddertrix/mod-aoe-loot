/*
 * This file is part of the AzerothCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Log.h"
#include "ScriptMgr.h"
#include "Config.h"
#include "Chat.h"
#include "Player.h"
#include "ScriptedGossip.h"
#include "AoeLoot.h"

using namespace Acore::ChatCommands;

class AoeLoot_commandscript : public CommandScript
{
public:
    AoeLoot_commandscript() : CommandScript("AoeLoot_commandscript") { }

    ChatCommandTable GetCommands() const override
    {
        static ChatCommandTable AoeLootCommandTable =
        {
            { "", HandleToggleAoeLoot, SEC_PLAYER, Console::No },
        };

        static ChatCommandTable commandTable =
        {
            { "aoeloot", AoeLootCommandTable }
        };

        return commandTable;
    }

    static bool HandleToggleAoeLoot(ChatHandler* handler, bool toggle)
    {

        Player* player = handler->GetPlayer();

        if (toggle)
        {
            player->UpdatePlayerSetting("mod-aoe-loot", SETTING_DISABLE_AOE_LOOT, 0);
            handler->SendSysMessage(LANG_CMD_AOE_LOOT_ON);
        }
        else
        {
            player->UpdatePlayerSetting("mod-aoe-loot", SETTING_DISABLE_AOE_LOOT, 1);
            handler->SendSysMessage(LANG_CMD_AOE_LOOT_OFF);
        }

        return true;

    }
};

void AddSC_AoeLoot_commandscript()
{
    new AoeLoot_commandscript();
}
