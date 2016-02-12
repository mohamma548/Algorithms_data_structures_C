#include "Lab13.h"
void initialize_dbl (Tdbl *dbl)
{
     *dbl=NULL;
}
void insert_to_dbl_front (Tdbl *dbl,Titem first)
{
    Pnode temp;
    temp=(Pnode)malloc(sizeof(Tnode));
    temp->item=first;
    if(*dbl==NULL){
    temp->next=NULL;
    temp->prev=NULL;
    *dbl=temp;
                  }
    else 
    {
      temp->prev=NULL;
      temp->next=*dbl;
      (*dbl)->prev=temp;   
      *dbl=temp;
      
    }
    
                    
}
void print_dbl(Tdbl dbl)
{
     Pnode so;
     so=dbl;
     printf("\nForward ");
     while(so!=NULL)
     {
      printf("%d \t",so->item);
      so=so->next;
     
     }
}

void insert_to_dbl_back(Tdbl *dbl,Titem back)
{
 Pnode temp,so;
    temp=(Pnode)malloc(sizeof(Tnode));
    temp->item=back;
    if(*dbl==NULL){
    temp->next=NULL;
    temp->prev=NULL;
    *dbl=temp;
                  }
    else 
    {
       so=*dbl;  
      while(so->next!=NULL){
      so=so->next;
      }
      so->next=temp;
      temp->prev=so;
      temp->next=NULL;
           
    }
}

void print_dbl_reverse(Tdbl dbl)
{
    Pnode so;
     so=dbl;
     if(dbl!=NULL)
     {
     printf("\nBackward");
     while(so->next!=NULL)
     {
         so=so->next;   
     } 
     
    while(so->prev!=NULL)
     {
      printf("%d \t",so->item);
      so=so->prev;
     
     }
     
     printf("%d \t",so->item);
     }
}
