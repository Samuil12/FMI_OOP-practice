#include "Task.h"

int Task::work(int time)
{
    double durationFromPercent= duration * progress+ time;
    
    if (duration < durationFromPercent) {
		progress = 1;
		return time - durationFromPercent;
	}
    else {
		progress = durationFromPercent;
		return 0;
	}
}
