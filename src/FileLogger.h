#pragma once
#include "LoggerBaseClass.h"
#include <fstream>


class FileLogger : public LoggerBaseClass {
	std::fstream file;
public:
	void printMsg(Level logLevel, std::string msg);
	FileLogger(std::string fileName);
	~FileLogger();
};