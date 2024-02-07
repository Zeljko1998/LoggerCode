#pragma once
#include <vector>
#include <string>
#include <memory>

#include "SyncClass.h"
#include "TerminalLogger.h"
#include "FileLogger.h"

class Logger
{	
	private:
		std::shared_ptr<TerminalLogger> tLog;
		std::shared_ptr<FileLogger> fLog;
	public:
		Logger(std::vector<SyncClass*>& sinks, const std::string& fileName);
		
		~Logger();
		
		void log (const std::vector<SyncClass*>& sinks,SyncClass::Level level,const std::string& msg);
};