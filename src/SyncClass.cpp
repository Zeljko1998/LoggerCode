#include "SyncClass.h"


char* SyncClass:: printTimeAndDate() {
	timeAndDate = time(&timeAndDate);
	return asctime(localtime(&timeAndDate));
}
