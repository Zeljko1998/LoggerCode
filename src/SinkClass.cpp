#include "SinkClass.h"


char* SinkClass:: printTimeAndDate() {
	timeAndDate = time(&timeAndDate);
	return asctime(localtime(&timeAndDate));
}