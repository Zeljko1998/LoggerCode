#pragma once
#include <vector>
#include <string>
#include <memory>

#include "SinkClass.h"
#include "TerminalSink.h"
#include "FileSink.h"

class Logger
{	
	private:
		std::vector<std::unique_ptr<SinkClass>> sinkVec;
		
	public:
		Logger();
		
		~Logger() {}
		
		void log (Level level,const std::string& msg);

		void addSink(const std::string& fileName);
};