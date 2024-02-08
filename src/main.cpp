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

    logger.log (sinks,Level::ERROR, "Error 1_0_0_0_0_0_0_0");
    logger.log (sinks,Level::WARNING, "Warning 1_0_0_0_0_0_0_0");
}
