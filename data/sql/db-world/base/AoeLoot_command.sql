DELETE FROM `command` WHERE `name` IN ('aoeloot', 'aoeloot on', 'aoeloot off');
INSERT INTO `command` (`name`, `security`, `help`) VALUES
('aoeloot', 0, 'Syntax: .aoeloot <on/off>\nEnable or disable AoE looting.'),
('aoeloot on', 0, 'Syntax: .aoeloot on\nEnable AoE looting.'),
('aoeloot off', 0, 'Syntax: .aoeloot off\nDisable AoE looting.')
