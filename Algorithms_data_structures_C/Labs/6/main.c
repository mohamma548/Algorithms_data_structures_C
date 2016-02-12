#include "intstack.h"
#include <stdio.h>
#include <stdlib.h>
void main(void)
{
  Tintstack store;
  Tboolean success;
  int input;
  int sum=0;
  int diff=0;
  int number;
  int number1;
  int number2;

  
  initialize_int_stack(&store);
  printf("Enter oprands and operator\n");
  fflush(stdin);
  input = getche();
  if (isdigit(input))
  number =input-48;
  while (number !=10 && number!=13)
  {
        if(number>=0 && number <=9){
       success=push_int(&store,number);
       printf("\n");}
                        
       while (number+48=='+'||number+48=='-'||number+48=='z'||number+48=='q'){
  
       
      switch(number){
                     
      case '+':
           {
       success=pop_int(&store,&number1);
       while(success){
       sum+=number1;
       success=pop_int(&store,&number1);
                     }
       success=push_int(&store,sum);
                                 }
      case '-':
           {
       success=pop_int(&store,&number1);
       if(success)
       success=pop_int(&store,&number2);
                
       diff=number2-number1;
       success=push_int(&store,diff);
           }
       
       
       
       
       case 'z':
       {
       success=pop_int(&store,&number1);
       if(success)
       printf("\nTop value is %d:\n",number1);
       success=push_int(&store,number1);
       }
       
        case 'q':     
        print_int_stack(&store);

        }}
       number = getche();
       number=number-48;
       
  }

 
}
