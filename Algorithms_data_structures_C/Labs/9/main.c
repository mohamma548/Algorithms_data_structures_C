#include <stdio.h>
typedef char Titem;
typedef struct node *Tpointer;
typedef struct node {
Titem item;
Tpointer next;
} Tnode;
typedef Tpointer Tlist;
void initialize_list(Tlist *list);
void insert_to_list_end (Tlist *list, Titem data);
void print_list(Tlist list);
int main (void) {
Tlist list;
initialize_list(&list);
print_list(list); // emp
insert_to_list_end(&list, 'a');
print_list(list); // one item
insert_to_list_end(&list, 'b');
print_list(list); // two items
insert_to_list_end(&list, 'c');
print_list(list); // three items
insert_to_list_end(&list, 'd');
print_list(list); // four items
getche();
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
      printf("%c ",so->item);
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



















