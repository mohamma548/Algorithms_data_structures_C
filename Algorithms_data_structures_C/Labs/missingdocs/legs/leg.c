#include "leg.h"
void read_leg(Tleg *leg,char *prompt)
{
     printf("%s\n",prompt);
     read_time(&leg->t1,"Start");
     read_time(&leg->t2,"End");
}
Ttime leg_time(Tleg *leg)
{

  return  time_diff(leg->t1,leg->t2);
  
}
