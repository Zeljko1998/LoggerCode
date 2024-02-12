#include "LoggerClass.h"

void Logger::log (Level level,const std::string& msg) { 
	for (const auto& sink:sinkVec) {
		sink->printMsg(level,msg);
	}	
}


Logger::Logger(LoggerType type, const std::string& fileName) {
	switch (type) {
		case (LoggerType::TERMINAL): 
			sinkVec.push_back(std::make_unique<TerminalSink>());
			break;
		case (LoggerType::FILE): 
			sinkVec.push_back(std::make_unique<FileSink>(fileName));
			break;
	}
}

void Logger::addSink(LoggerType type, const  std::string& fileName) {
	switch (type) {
		case (LoggerType::TERMINAL): 
			sinkVec.push_back(std::make_unique<TerminalSink>());
			break;
		case (LoggerType::FILE): 
			sinkVec.push_back(std::make_unique<FileSink>(fileName));
			break;
	}
}