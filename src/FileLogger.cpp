#include "FileLogger.h"


FileLogger::FileLogger(const std::string& fileName) {
	file.open(fileName, std::ios::out);
}

FileLogger :: ~FileLogger() {
	file.close();
}


void FileLogger::printMsg (Level logLevel, const std::string& msg) {
	switch (logLevel) {
	case L_TRACE:
		file << printTimeAndDate() << " <TRACE> " << msg << "\n\n";
		break;
	case L_WARNING:
		file << printTimeAndDate() << " <WARNING> " << msg << "\n\n";
		break;
	case L_ERROR:
		file << printTimeAndDate() << " <ERROR> " << msg << "\n\n";
		break;
	case L_FATAL:
		file << printTimeAndDate() << " <FATAL> " << msg << "\n\n";
		break;
	}
}