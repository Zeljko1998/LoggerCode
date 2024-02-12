#pragma once
#include <vector>
#include <string>
#include <memory>
#include <typeindex>

#include "SyncClass.h"
#include "TerminalSync.h"
#include "FileSync.h"
#include "LoggerTypeEnumClass.h"

class Logger
{	
	private:
		std::vector<std::unique_ptr<SyncClass>> SyncVec;
		
	public:
		Logger(LoggerType type, const std::string& fileName = " ");
		
		~Logger() {}
		
		void log (Level level,const std::string& msg);

		void addSync(LoggerType type,const std::string& fileName = " ");
};
