#include "LoggerBaseClass.h"


char* LoggerBaseClass:: printTimeAndDate() {
	timeAndDate = time(&timeAndDate);
	return asctime(localtime(&timeAndDate));
}