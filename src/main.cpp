#include <iostream>
#include <vector>
#include <string>
#include <memory>

#include "TerminalLogger.h"
#include "FileLogger.h"
#include "LoggerClass.h"
#include "SyncClass.h"

int main()  
{   
    std::vector<SyncClass*> sinks;
    Logger logger(sinks, "NewLogFile.txt");

    logger.log (sinks,SyncClass::L_ERROR, "Error 1_0_0_0_0_0_0_0");
    logger.log (sinks,SyncClass::L_WARNING, "Warning 1_0_0_0_0_0_0_0");
}
