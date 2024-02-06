#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <cstdint>
#include <map>


class LoggerBaseClass {
public:	
	time_t timeAndDate;
	tm *localTime;
	enum Level { L_TRACE,L_WARNING,L_ERROR,L_FATAL };
	std::map<std::string, std::string> consoleTextColllor{ {"white","\033[0;37m"},{"yellow","\033[0;33m"},{"red","\033[0;31m"},
													 {"blue","\033[0;34m"},{"green","\033[0;32m"}, {"default","\033[0m"}};
	
	virtual void printMsg(Level logLevel, std::string msg) = 0;
	
	char* printTimeAndDate();
};