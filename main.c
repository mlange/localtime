#define _USE_32BIT_TIME_T

#include <stdio.h>
#include <time.h>

#include <sys/types.h>
#include <sys/timeb.h>

int main(int argc, char *arv[])
{
    long secs;
    struct tm *times;
    struct timeb timebuf;

    printf("Calling localtime...\n"); fflush(stdout);

    time(&secs);
    printf("Secs: %d\n", secs);

    ftime(&timebuf);
    secs = (long) timebuf.time;
    printf("Secs: %d\n", secs);

    times = localtime(&secs);

    printf("Called localtime...\n"); fflush(stdout);

    exit(0);
}
