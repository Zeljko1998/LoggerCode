#pragma once
#include "SyncClass.h"
#include <fstream>


class FileLogger : public SyncClass {
	std::fstream file;
public:
	void printMsg(Level logLevel, const std::string& msg) override;
	FileLogger(const std::string& fileName);
	~FileLogger();
};