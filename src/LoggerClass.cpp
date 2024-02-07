#include "LoggerClass.h"

void Logger::log (const std::vector<SyncClass*>& sinks,SyncClass::Level level,const std::string& msg) { 
	for (auto sink:sinks) {
		sink->printMsg(level,msg);
	}
}


Logger::Logger(std::vector<SyncClass*>& sinks, const std::string& fileName) {
	tLog = std::make_shared<TerminalLogger>();
	fLog = std::make_shared<FileLogger>(fileName);

	sinks.emplace_back(tLog.get());
	sinks.emplace_back(fLog.get());
}

Logger::~Logger() {
	tLog.reset();
	fLog.reset();
}