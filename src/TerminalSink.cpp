#include "TerminalSink.h"

void TerminalSink::printMsg(const Level& logLevel,const std::string& msg) {
	switch (logLevel) {
	case Level::TRACE:
		std::cout << consoleTextColllor["green"] << printTimeAndDate() << " <TRACE> " << msg << consoleTextColllor["default"] << std::endl << std::endl;
		break;
	case Level::WARNING:
		std::cout << consoleTextColllor["blue"] << printTimeAndDate() << " <WARNING> " << msg << consoleTextColllor["default"] << std::endl << std::endl;
		break;
	case Level::ERROR:
		std::cout << consoleTextColllor["red"] << printTimeAndDate() << " <ERROR> " << msg << consoleTextColllor["default"] << std::endl << std::endl;
		break;
	case Level::FATAL:
		std::cout << consoleTextColllor["yellow"] << printTimeAndDate() << " <FATAL> " << msg << consoleTextColllor["default"] << std::endl << std::endl;
		break;
	}
}