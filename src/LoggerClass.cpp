#include "LoggerClass.h"

void Logger::log (Level level,const std::string& msg) { 
	for (const auto& sink:sinkVec) {
		sink->printMsg(level,msg);
	}	
}


Logger::Logger() {
	sinkVec.push_back(std::make_unique<TerminalSink>());
}

void Logger::addSink(const  std::string& fileName) {
	sinkVec.push_back(std::make_unique<FileSink>(fileName));1
}