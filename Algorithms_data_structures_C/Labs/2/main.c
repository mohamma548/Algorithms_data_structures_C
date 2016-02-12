#include "time.h"
int main(void) {
Ttime start[6],diff;
char buff[80];
int i;

for(i=0;i<3;i++)
{
   sprintf(buff, "Enter starting time for the leg %d", i+1);
   read_time(&start[2*i], buff);
   sprintf(buff, "Enter end time for the leg %d", i+1);
   read_time(&start[2*i+1], buff);
   
}
for(i=0;i<3;i++)
{
diff=time_diff(start[2*i], start[2*i+1]);
printf("\nThe length of leg%d is\n", i+1);
print_time(diff);
}

system("PAUSE");	
}
