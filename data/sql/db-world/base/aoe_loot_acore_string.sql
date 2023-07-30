SET @ENTRY:=50000;
DELETE FROM `acore_string` WHERE `entry` IN (@ENTRY+0, @ENTRY+1, @ENTRY+2, @ENTRY+3);
INSERT INTO `acore_string` (`entry`, `content_default`, `locale_koKR`, `locale_frFR`, `locale_deDE`, `locale_zhCN`, `locale_zhTW`, `locale_esES`, `locale_esMX`, `locale_ruRU`) VALUES
(@ENTRY+0, 'This server is running the |cff4CFF00AoE Loot|r module.', '', '', '', '', '', 'Este servidor está ejecutando el módulo |cff4CFF00AoE Loot|r.', 'Este servidor está ejecutando el módulo |cff4CFF00AoE Loot|r.', ''),
(@ENTRY+1, '|cff4CFF00[AoE Loot]|r Loot has been mailed to you.', '', '', '', '', '', '|cff4CFF00[AoE Loot]|r  Sus artículos le han sido enviados por correo.', '|cff4CFF00[AoE Loot]|r  Sus artículos le han sido enviados por correo.', ''),
(@ENTRY+2, '|cff4CFF00[AoE Loot]|r AoE looting is now disabled.', '', '', '', '', '', '', '', ''),
(@ENTRY+3, '|cff4CFF00[AoE Loot]|r AoE looting is now enabled.', '', '', '', '', '', '', '', '');
