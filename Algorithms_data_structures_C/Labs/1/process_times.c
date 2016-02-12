#include "time.h"
int main(void) {
Ttime t1,t2,diff;
int time1,time2;
t1=creat_time();
t2=creat_time();
diff=creat_time();
read_time(t1, "Enter time 1");
read_time(t2, "Enter time 2");

if (compare_times(t1, t2)==-1)
printf("\nTime 1 is earlier");
if (compare_times(t1, t2) == 0)
printf("\nTimes are equal");
if(compare_times(t1,t2) == 1)
printf("\nTime 1 is later");

diff=time_diff(t1, t2);

printf("\nDuration is");
print_time(diff);
destroy_time(t1);
destroy_time(t2);
destroy_time(diff);
  system("PAUSE");	
}
