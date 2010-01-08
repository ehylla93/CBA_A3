// -----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE!
// -----------------------------------------------------------------------------

class CfgFunctions
{
	class CBA
	{
		class Events
		{
			// CBA_fnc_addActionHandler
			class addActionHandler
			{
				description = "Adds an action to an actionHandler";
				file = "\x\cba\addons\events\fnc_addActionHandler.sqf";
			};
			// CBA_fnc_addActionHandlerFromConfig
			class addActionHandlerFromConfig
			{
				description = "Adds an action to an actionHandler, read from config";
				file = "\x\cba\addons\events\fnc_addActionHandlerFromConfig.sqf";
			};
			// CBA_fnc_addDisplayHandler
			class addDisplayHandler
			{
				description = "Adds an action to a displayHandler";
				file = "\x\cba\addons\events\fnc_addDisplayHandler.sqf";
			};
			// CBA_fnc_addEventHandler
			class addEventHandler
			{
				description = "Registers an event handler for a specific CBA event.";
				file = "\x\cba\addons\events\fnc_addEventHandler.sqf";
			};
			// CBA_fnc_addKeyHandler
			class addKeyHandler
			{
				description = "Adds an action to a keyhandler";
				file = "\x\cba\addons\events\fnc_addKeyHandler.sqf";
			};
			// CBA_fnc_addKeyHandlerFromConfig
			class addKeyHandlerFromConfig
			{
				description = "Adds an action to a keyhandler, read from config";
				file = "\x\cba\addons\events\fnc_addKeyHandlerFromConfig.sqf";
			};
			// CBA_fnc_globalEvent
			class globalEvent
			{
				description = "Raises a CBA event on all machines, including the local one.";
				file = "\x\cba\addons\events\fnc_globalEvent.sqf";
			};
			// CBA_fnc_localEvent
			class localEvent
			{
				description = "Raises a CBA event only on the local machine.";
				file = "\x\cba\addons\events\fnc_localEvent.sqf";
			};
			// CBA_fnc_readActionFromConfig
			class readActionFromConfig
			{
				description = "Reads action setting from config";
				file = "\x\cba\addons\events\fnc_readActionFromConfig.sqf";
			};
			// CBA_fnc_readKeyFromConfig
			class readKeyFromConfig
			{
				description = "Reads key setting from config";
				file = "\x\cba\addons\events\fnc_readKeyFromConfig.sqf";
			};
			// CBA_fnc_remoteEvent
			class remoteEvent
			{
				description = "Raises a CBA event on all machines EXCEPT the local one.";
				file = "\x\cba\addons\events\fnc_remoteEvent.sqf";
			};
			// CBA_fnc_removeDisplayHandler
			class removeDisplayHandler
			{
				description = "Removes an action to a displayHandler";
				file = "\x\cba\addons\events\fnc_removeDisplayHandler.sqf";
			};
			// CBA_fnc_removeEventHandler
			class removeEventHandler
			{
				description = "Removes an event handler previously registered with CBA_fnc_addEventHandler.";
				file = "\x\cba\addons\events\fnc_removeEventHandler.sqf";
			};
		};
	};
};
