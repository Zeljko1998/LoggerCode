#include "LoggerClass.h"

void Logger::log (Level level,const std::string& msg) { 
	for (const auto& Sync:SyncVec) {
		Sync->printMsg(level,msg);
	}	
}


Logger::Logger(LoggerType type, const std::string& fileName) {
	switch (type) {
		case (LoggerType::TERMINAL): 
			SyncVec.push_back(std::make_unique<TerminalSync>());
			break;
		case (LoggerType::FILE): 
			SyncVec.push_back(std::make_unique<FileSync>(fileName));
			break;
	}
}

void Logger::addSync(LoggerType type, const  std::string& fileName) {
	switch (type) {
		case (LoggerType::TERMINAL): 
			SyncVec.push_back(std::make_unique<TerminalSync>());
			break;
		case (LoggerType::FILE): 
			SyncVec.push_back(std::make_unique<FileSync>(fileName));
			break;
	}
}
