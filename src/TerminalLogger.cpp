#include "TerminalLogger.h"

void TerminalLogger::printMsg(SyncClass::Level logLevel,const std::string& msg) {
	switch (logLevel) {
	case L_TRACE:
		std::cout << consoleTextColllor["green"] << printTimeAndDate() << " <TRACE> " << msg << consoleTextColllor["default"] << std::endl << std::endl;
		break;
	case L_WARNING:
		std::cout << consoleTextColllor["blue"] << printTimeAndDate() << " <WARNING> " << msg << consoleTextColllor["default"] << std::endl << std::endl;
		break;
	case L_ERROR:
		std::cout << consoleTextColllor["red"] << printTimeAndDate() << " <ERROR> " << msg << consoleTextColllor["default"] << std::endl << std::endl;
		break;
	case L_FATAL:
		std::cout << consoleTextColllor["yellow"] << printTimeAndDate() << " <FATAL> " << msg << consoleTextColllor["default"] << std::endl << std::endl;
		break;
	}
}