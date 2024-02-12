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
			if(!this->isSyncDefined(LoggerType::TERMINAL)) { 
				SyncVec.push_back(std::make_unique<TerminalSync>());
			}
			break;
		case (LoggerType::FILE): 
			if(!this->isSyncDefined(LoggerType::FILE)) { 
				SyncVec.push_back(std::make_unique<FileSync>(fileName));
			} 
			break;
	}
}

bool Logger::isSyncDefined(LoggerType type) {
	for (const auto& sync:SyncVec) {
		//Check the type of logger and try to dynamic cast sync to the derived class ptr 
		if (type == LoggerType::TERMINAL && (dynamic_cast<TerminalSync*>(sync.get()))) return true;
		else if (type == LoggerType::FILE && (dynamic_cast<FileSync*>(sync.get()))) return true;
	}
	return false ;
}