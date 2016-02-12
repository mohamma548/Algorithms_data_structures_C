#include "time2.h"

int main(void)
{
  Tleg legs[3];
  Ttime duration;
  int i;
  char prompt[30];
  
  for(i=0;i<3;i++)
  {
  sprintf(prompt,"Enter time for leg %d",i+1);
  read_leg(&legs[i],prompt);
  }
  for(i=0;i<3;i++)
  {
  duration=leg_time(&legs[i]);
  printf("Leg %d :",i+1);
  print_time(duration);
  }
  system("PAUSE");	
  return 0;
}