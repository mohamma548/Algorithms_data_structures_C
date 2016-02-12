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
void delete_first(Tlist *list);
void delete_last(Tlist *list);
int find_pos_in_list(const Tlist *list, Titem item, int *pos);
int main (void) {
Tlist list;
int order_no;
char to_be_searched;
initialize_list(&list);
insert_to_list_end(&list, 'x');
insert_to_list_end(&list, 'a');
insert_to_list_end(&list, 'b');
insert_to_list_end(&list, 'c');
insert_to_list_end(&list, 'd');
insert_to_list_end(&list, 'y');
print_list(list);
printf("Enter first character to be searced\n");
fflush(stdin); scanf("%c", &to_be_searched);
if (find_pos_in_list(&list,to_be_searched, &order_no))

printf("The order no is %d\n", order_no);
else
printf("Not found\n");
printf("Enter second character to be searced\n");
fflush(stdin); scanf("%c", &to_be_searched);
if (find_pos_in_list(&list, to_be_searched, &order_no))
printf("The order no is %d\n", order_no);
else
printf("Not found\n");
delete_first(&list);
print_list(list);
delete_last(&list);
print_list(list);

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
    if(ok->item==item)
    break;
  
    ok=ok->next;
    }
    if(counter<7){
    *pos=counter;   
    return 1;}
    else
     return 0;

}