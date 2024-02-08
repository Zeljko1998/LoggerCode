#pragma once
#include "SyncClass.h"
#include <string>
#include <iostream>


class TerminalLogger : public SyncClass {
	public: 
		void printMsg(Level logLevel, const std::string& msg) override;

		~TerminalLogger() {}
};