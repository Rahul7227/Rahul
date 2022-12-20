/* nice command */

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/resource.h>

int main()
{
	int priority = getpriority(PRIO_PROCESS, 2248);
	printf("priority:%d\n", priority);
	int ret = setpriority(PRIO_PROCESS, 2248, 8);
	if (ret == 0)
	{
		printf("priority is set");
	}
	else 
	{
		printf("not set");
	}
}
