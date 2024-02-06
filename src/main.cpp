#include <iostream>
#include "LoggerBaseClass.h"
#include "TerminalLogger.h"
#include "FileLogger.h"

int main()
{
    TerminalLogger tLog;
    FileLogger fLog("LogFile.txt");

    tLog.printMsg((LoggerBaseClass::L_TRACE), "Neko pracenje!");
    fLog.printMsg(FileLogger::L_ERROR, "Neko upozorenje!");

    tLog.printMsg((LoggerBaseClass::L_ERROR), "Neka grska!");
    fLog.printMsg(FileLogger::L_ERROR, "Neka greska!");

    tLog.printMsg((LoggerBaseClass::L_WARNING), "Neko upozorenje!");
    fLog.printMsg(FileLogger::L_WARNING, "Neko upozorenje!");

    tLog.printMsg((LoggerBaseClass::L_FATAL), "Neki fatal!");
    fLog.printMsg(FileLogger::L_ERROR, "Neki fatal!");
}
