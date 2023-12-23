#include "Cheats.h"
#include "ConsoleUtils.h"
#include "ProcessEventLogger.h"
#include "StringUtils.h"
#include "ConsoleCmd.h"
#include "InputCmd.h"

namespace ConsoleCmd
{
	std::unordered_map<std::string, InputCmd> commandMap;

	void HelpCommand() {
		ConsoleTools::ConsoleWrite("Mod Console Available commands:");
		for (const auto& entry : commandMap) {
			ConsoleTools::ConsoleWrite(entry.second.getName() + " - " + entry.second.getDescription());
		}
	}

	void UnlimitedPowerCommand() {
		Cheats::UnlimPower = !Cheats::UnlimPower;
		ConsoleTools::ConsoleWrite("Unlimited Power: " + StringUtils::bool_as_text(Cheats::UnlimPower));
	}

	void LogEventsCommand() {
		ProcessEventLogger::LoggerActive = !ProcessEventLogger::LoggerActive;
		ConsoleTools::ConsoleWrite("Process Event Logger: " + StringUtils::bool_as_text(ProcessEventLogger::LoggerActive));
	}

	void UnlockLevelsCommand() {
		Cheats::UnlockLevels();
		ConsoleTools::ConsoleWrite("Unlocked Levels");
	}

	// Initialize commands
	void initializeCommands() {
		commandMap["help"] = InputCmd("help", "Shows this help menu.", HelpCommand);
		commandMap["unlimitedpower"] = InputCmd("unlimitedpower", "Freezes power to 100% always.", UnlimitedPowerCommand);
		commandMap["logevents"] = InputCmd("logevents", "Expose all ProcessEvent functions in console.", LogEventsCommand);
		commandMap["unlocklevels"] = InputCmd("unlocklevels", "Unlocks all levels.", UnlockLevelsCommand);
		//commandMap["loadcheatmenu"] = Cmd("loadcheatmenu", "Loads the cheat menu.", LoadCheatMenu); Crashes Game.
	}

	void ConsoleInput() {
		ConsoleTools::SetTitle("Cheat Menu By xAstroBoy");
		ConsoleTools::ClearConsole();
		while (true) {
			// Convert input to lowercase
			std::string lowercaseInput = StringUtils::toLowercase(ConsoleTools::AskInput("Command : "));

			// Check if the input is empty
			if (lowercaseInput.empty()) {
				ConsoleTools::ClearConsole();
				ConsoleTools::ConsoleWrite("Command Not found. Type help for command list.");
				continue; // Continue the loop to prompt for input again
			}

			// Look up the command in the map
			auto it = commandMap.find(lowercaseInput);
			if (it != commandMap.end()) {
				ConsoleTools::ClearConsole();
				// Execute the command
				it->second.execute();
				continue; // process the valid command and prompt for input again
			}
			else {
				ConsoleTools::ClearConsole();
				ConsoleTools::ConsoleWrite("Command Not found. Type help for command list.");
				continue; // Continue the loop to prompt for input again
			}
		}
	}
}