#include "FileLogger.h"


FileLogger::FileLogger(const std::string& fileName) {
	file.open(fileName, std::ios::out);
}

FileLogger :: ~FileLogger() {
	file.close();
}


void FileLogger::printMsg (Level logLevel, const std::string& msg) {
	switch (logLevel) {
	case Level::TRACE:
		file << printTimeAndDate() << " <TRACE> " << msg << "\n\n";
		break;
	case Level::WARNING:
		file << printTimeAndDate() << " <WARNING> " << msg << "\n\n";
		break;
	case Level::ERROR:
		file << printTimeAndDate() << " <ERROR> " << msg << "\n\n";
		break;
	case Level::FATAL:
		file << printTimeAndDate() << " <FATAL> " << msg << "\n\n";
		break;
	}
}