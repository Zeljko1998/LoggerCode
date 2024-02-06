#pragma once
#include "LoggerBaseClass.h"
#include <string>
#include <iostream>


class TerminalLogger : public LoggerBaseClass {
	public: 
		void printMsg(Level logLevel, std::string msg);
};