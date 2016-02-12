/* dynamic linked linear list
   Now the abstraction is OK, because first and last are are
   incapsulated inside datatype Tlist and all paramaters of
   operation functions are of this type. */

#include  <stdio.h>
#include <conio.h>


typedef char Titem;

//Interface of list
typedef struct node *Tpointer;
typedef struct node {
	  Titem item;
	  Tpointer next;
	 } Tnode;
typedef struct {
       Tpointer first;
       Tpointer last;
} Tlist;
void initialize_list (Tlist *list);
void insert_to_list_end(Tlist *list, Titem data);
void print_list (Tlist list);
void cleanup_list(Tlist *list);

//Application
int main (void)  {
     Tlist list;

     initialize_list(&list);
     insert_to_list_end(&list, 'a');
     insert_to_list_end(&list, 'b');
     insert_to_list_end(&list, 'c');
     insert_to_list_end(&list, 'd');

     print_list(list);
     cleanup_list(&list);
}

//Implementation of list (only obj is need in appl)
void initialize_list (Tlist *list) {
     list->first = NULL;
     list->last = NULL;
}

void cleanup_list(Tlist *list) {
     Tpointer aux1, aux2;
     aux1 = list->first;
     while (aux1 != NULL) {
	  aux2 = aux1->next;
	  free(aux1);
	  printf("\nDeleted"); //for testing purposes
	  aux1 = aux2;
     }
     initialize_list(list);
}

void insert_to_list_end(Tlist *list, Titem data) {
     Tpointer newnode;

     newnode = (Tpointer) malloc(sizeof(Tnode));
     newnode -> item = data;
     if (list->first == NULL)
	list->first = newnode;       //first node
     else
	list->last->next = newnode;  //not first node
     list->last = newnode;
     list->last->next = NULL;
}

void print_list (Tlist list) {
       Tpointer what ;

       printf("\nList 4 :");
       what = list.first;
       while (what != NULL) {
	    printf("%c ", what->item);
	    what = what->next;
       }
}