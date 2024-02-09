//Standard libraries
#include <iostream>
#include <vector>
#include <string>
#include <memory>

//Local libraries
#include "TerminalLogger.h"
#include "LevelEnumClass.h"
#include "FileLogger.h"
#include "LoggerClass.h"
#include "SyncClass.h"

int main()  
{   
    std::vector<SyncClass*> sinks;
    Logger logger(sinks, "NewLogFile.txt");

    logger.log (sinks,Level::ERROR,   "Error   0_0_0_0_0_0_0_0");
    logger.log (sinks,Level::WARNING, "Warning 0_0_0_0_0_0_0_1");
    logger.log (sinks,Level::TRACE,   "Trace   0_0_0_0_0_0_1_0");
    logger.log (sinks,Level::FATAL,   "Fatal   0_0_0_0_0_0_1_1");
}