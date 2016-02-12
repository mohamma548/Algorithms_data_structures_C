#include "adt.h"
#include "time.h"
void print_item(Titem item)
{
     print_time(item);
     
     
}

int compare_item(Titem item1,Titem item2)
{
    
 
     return !compare_times(item1,item2);
    
}

void read_item(Titem *item)
{

   
     read_time(item,"Enter Time\n");

}

--------------------------------------------------------------
----------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include "time.h"
typedef char Titem;
void read_item(Titem *item);
void print_item(Titem item);
int compare_item(Titem item1,Titem item2);
-------------------------------------------------------------
----------------------------------------------------------------
#include "adt.h"
#include "time.h"
typedef Titem Ttime;
typedef struct node *Tpointer;
typedef struct node {
Titem item;
Tpointer next;
} Tnode;
typedef Tpointer Tlist;
void initialize_list(Tlist *list);
void insert_to_list_end (Tlist *list, Titem data);
void print_list(Tlist list);
void delete_first(Tlist *list);
void delete_last(Tlist *list);
int find_pos_in_list(const Tlist *list, Titem item, int *pos);
int main (void) {
Ttime item1 = {9,20}, item2 = {10, 30},
item3 = {13, 55}, item4 = {14,02};
Ttime to_be_searched;
Tlist list;
int order_no;
initialize_list(&list);
insert_to_list_end(&list, item1);
insert_to_list_end(&list, item2);
insert_to_list_end(&list, item3);
insert_to_list_end(&list, item4);
print_list(list);
read_item(&to_be_searched);
if (find_pos_in_list(&list, to_be_searched, &order_no))
printf("\nThe order no is %d\n", order_no);
else
printf("\nNot found\n");
read_item(&to_be_searched);
if (find_pos_in_list(&list, to_be_searched, &order_no))
printf("\nThe order no is %d\n", order_no);
else
printf("\nNot found\n");
system("PAUSE");
}
void initialize_list(Tlist *list)
{
   *list=NULL;
}
void print_list(Tlist list)
{
     Tpointer so;
     so=list;
     printf("\nList 4 :\n");
     while(so!=NULL)
     {
     print_item(so->item);               
     so=so->next;
    
     }
}

void insert_to_list_end(Tlist *list,Titem info)
{
     Tpointer temp;
     Tpointer unused;
     temp=(Tpointer)malloc(sizeof(Tnode));
     temp->item=info;
     temp->next = NULL;
   
     if(*list==NULL)
     *list=temp;
     else{
     unused=*list;
     while(unused->next!=NULL)
     {
      unused=unused->next;
    
     }
   
    unused->next=temp;
   
     }
}



void delete_first(Tlist *list)
{
     Tpointer then;
     then=*list;
     *list=then->next;
     free(then);
   
  
   
}

void delete_last(Tlist *list)
{
     Tpointer what;
     what=*list;
     while(what->next->next!=NULL)
     {
     what=what->next;
    
     }
    what->next=NULL;
}

int find_pos_in_list(const Tlist *list, Titem item, int *pos)
{
    int counter=0;
    Tpointer ok;
    ok=*list;
    while(ok!=NULL)

    {
      ++counter;
    if(compare_item(ok->item,item)){
    *pos = counter;
    return 1;
    }
 
    ok=ok->next;
    }
    
    return 0;

}

--------------------------------------------------------------
--------------------------------------------------------------
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
--------------------------------------------------------------------------
-------------------------------------------------------------------------
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


















