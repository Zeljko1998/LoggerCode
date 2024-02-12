#pragma once
#include <vector>
#include <string>
#include <memory>

#include "SinkClass.h"
#include "TerminalSink.h"
#include "FileSink.h"
#include "LoggerTypeEnumClass.h"

class Logger
{	
	private:
		std::vector<std::unique_ptr<SinkClass>> sinkVec;
		
	public:
		Logger(LoggerType type, const std::string& fileName);
		
		~Logger() {}
		
		void log (Level level,const std::string& msg);

		void addSink(LoggerType type,const std::string& fileName);
};