#include "adt.h"
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
Titem item1 = 'a', item2 = 'b', item3 = 'c', item4 = 'd';
Titem to_be_searched;
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
     printf("\nList 4 :");
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
------------------------------------------------------
-------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
typedef char Titem;
void read_item(Titem *item);
void print_item(Titem item);
int compare_item(Titem item1,Titem item2);

----------------------------------------------------------------
---------------------------------------------------------------
#include "adt.h"

void print_item(Titem item)
{
     
     printf("%c\n",item);
     
}

int compare_item(Titem item1,Titem item2)
{
     if(item1==item2)
     return 1;
     else 
     return 0;
}

void read_item(Titem *item)
{
     Titem tt;
     printf("Enter item\n");
     fflush(stdin);
     scanf("%c",&tt);
     *item=tt;
}




















