#pragma once

//Standard libraries
#include <iostream>
#include <string>
#include <ctime>
#include <cstdint>
#include <map>

//Local libraries
#include "LevelEnumClass.h"

class SinkClass {
public:	
	time_t timeAndDate;
	tm *localTime;
	std::map<std::string, std::string> consoleTextColllor{ {"white","\033[0;37m"},{"yellow","\033[0;33m"},{"red","\033[0;31m"},
													 {"blue","\033[0;34m"},{"green","\033[0;32m"}, {"default","\033[0m"}};
	
	virtual void printMsg(const Level& logLevel, const std::string& msg) = 0;
	
	char* printTimeAndDate();

	virtual ~SinkClass() {}
};