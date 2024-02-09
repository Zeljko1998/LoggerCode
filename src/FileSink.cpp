#include "FileSink.h"


FileSink::FileSink(const std::string& fileName) {
	file.open(fileName, std::ios::out);
}

FileSink :: ~FileSink() {
	file.close();
}


void FileSink::printMsg (const Level& logLevel, const std::string& msg) {
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