#include <stdio.h>
#include <stdlib.h>
    
typedef struct {
int hour;
int minute;
}Ttime;
void read_time(Ttime *t, char *prompt);
void print_time(Ttime t);
Ttime time_diff(Ttime t1, Ttime t2);
int compare_times(Ttime time1,Ttime time2);
