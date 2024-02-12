#include "LoggerClass.h"
#include <iostream>
#include <vector>
#include <string>


int main()  
{      
    Logger logger (LoggerType::TERMINAL);

    logger.log (Level::ERROR,   "Error   0_0_0_0_0_0_0_0");
    logger.log (Level::WARNING, "Warning 0_0_0_0_0_0_0_1");

    logger.addSync (LoggerType::FILE, "NewLoggerFile.txt");

    logger.log (Level::TRACE,   "Trace   0_0_0_0_0_0_1_0");
    logger.log (Level::FATAL,   "Fatal   0_0_0_0_0_0_1_1");
}
