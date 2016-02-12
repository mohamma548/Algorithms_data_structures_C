#include "time.h"
typedef struct 
{
        Ttime t1;
        Ttime t2;
}Tleg;

void read_leg(Tleg *leg,char *prompt);
Ttime leg_time(Tleg *leg);