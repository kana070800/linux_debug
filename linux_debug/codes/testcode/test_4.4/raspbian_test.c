#include <stdio.h>
#include <unistd.h>

#include <stdlib.h>

#define PROC_TIMES 500
#define SLEEP_DURATION 3

int main(){
	int proc_times = 0;

	if (-1 == fork())
	{
		perror("fork");
		exit(1);
		return 0;
	}

	for(proc_times = 0; proc_times < PROC_TIMES; proc_times++)
	{
		printf("raspbain tracing\n");
		sleep(SLEEP_DURATION);
	}

	return 0;
}
