#pragma once
#include "SyncClass.h"
#include <string>
#include <iostream>


class TerminalSync : public SyncClass {
	public: 
		void printMsg(const Level& logLevel, const std::string& msg) override;

		~TerminalSync() {}
};
