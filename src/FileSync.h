#pragma once
#include "SyncClass.h"
#include <fstream>


class FileSync : public SyncClass {
	std::fstream file;
public:
	void printMsg(const Level& logLevel, const std::string& msg) override;
	FileSync(const std::string& fileName);
	~FileSync();
};
