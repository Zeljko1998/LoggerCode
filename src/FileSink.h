#pragma once
#include "SinkClass.h"
#include <fstream>


class FileSink : public SinkClass {
	std::fstream file;
public:
	void printMsg(const Level& logLevel, const std::string& msg) override;
	FileSink(const std::string& fileName);
	~FileSink();
};