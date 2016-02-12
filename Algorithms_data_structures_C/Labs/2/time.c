#include "time.h"


void read_time(Ttime *t, char *prompt) {
int hour;
int minute;
printf("\n%s", prompt);
printf("\nEnter Hour\n");
scanf("%d", &hour);
printf("\nEnter minute\n");
scanf("%d", &minute);
t->hour = hour;
t->minute = minute;
}
/***************************************************************************************/
Ttime time_diff(Ttime t1, Ttime t2) 
{
Ttime diff={0,0};
int x=0;
x=(t2.hour*60+t2.minute)-(t1.hour*60+t1.minute);
diff.minute=x%60;
diff.hour=x/60;
return diff;
}
/*************************************************************************************/
void print_time(Ttime diff){

printf("\t\t%d:%d\n\n",diff.hour,diff.minute);

}
/*'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''*/    
int compare_times(Ttime time1, Ttime time2)
{
    int tt1,tt2,y;
    tt1=(time1.hour*60+time1.minute);
    tt2=(time2.hour*60+time2.minute);
    if (tt1<tt2)
    y=-1;
    else if (tt1==tt2)
    y=0;
    else 
     y=1;
     return y;
}
/******************************************************************************/

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

/******************************************************************************/
