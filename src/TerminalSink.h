#pragma once
#include "SinkClass.h"
#include <string>
#include <iostream>


class TerminalSink : public SinkClass {
	public: 
		void printMsg(const Level& logLevel, const std::string& msg) override;

		~TerminalSink() {}
};