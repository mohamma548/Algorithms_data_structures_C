#include "rally.h"
    int p;
void num_legs()
{
     printf("Enter nuber of legs:Maximum 100");
     scanf("%d",&p);
}
void read_rally(Trally *ral)
{
char buff[80];
int i;
   for (i = 0;i<3;i++)
   {
       sprintf(buff, "Enter leg %d", i+1);
       read_leg(&ral->leg[i],buff);  
       }
     
}


void display_leg_times(Trally *rall)
{
Ttime dif[3];  int i; 
    for (i = 0;i<3;i++)
   {
    dif[i]=leg_time(&rall->leg[i]);
    printf("Leg %d:",i+1);
    print_time(dif[i]);
   }
    
}
