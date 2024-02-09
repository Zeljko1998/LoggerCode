//Standard libraries
#include <iostream>
#include <vector>
#include <string>
#include <memory>

//Local libraries
#include "TerminalSink.h"
#include "LevelEnumClass.h"
#include "FileSink.h"
#include "LoggerClass.h"
#include "SinkClass.h"

int main()  
{   
    Logger logger;

    logger.log (Level::ERROR,   "Error   0_0_0_0_0_0_0_0");
    logger.log (Level::WARNING, "Warning 0_0_0_0_0_0_0_1");

    logger.addSink("NewLogFile.txt");
    
    logger.log (Level::TRACE,   "Trace   0_0_0_0_0_0_1_0");
    logger.log (Level::FATAL,   "Fatal   0_0_0_0_0_0_1_1");
}