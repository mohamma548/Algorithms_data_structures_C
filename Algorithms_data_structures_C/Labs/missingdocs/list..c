#include <stdio.h>
#include <stdlib.h>
//ADT item
typedef char Titem;
void read_item(Titem *item);
void print_item(Titem item);
int compare(Titem item1, Titem item2);
const Titem STOP = '-';


//ADT list
#define MAX 10
typedef struct {
int count;
Titem array[MAX];
} Tlist;
void initialize_list(Tlist *list);
int list_empty(const Tlist *list);
int number_of_items(const Tlist *list);
int retrieve_ith(const Tlist *list, int i, Titem *item);
int insert_to_list_end(Tlist *list, Titem item);
int find_pos_in_list(const Tlist *list, Titem item, int *pos);
int delete_item(Tlist *list, int orderNo);

//Application
void main (void) {
Tlist list;
Titem item;
int i = 0;
initialize_list(&list);
printf("\nEnter items");
read_item(&item);
while (compare(item , STOP)){
insert_to_list_end(&list, item);
read_item(&item);
}
//Print the contents of the list
for (i=1; i<= number_of_items(&list); i++) {
retrieve_ith(&list, i, &item);
printf("\n %dth item was ", i);
print_item(item);
}
printf("\nDelete list items");
read_item(&item);
while (compare(item , STOP)) {
if(find_pos_in_list(&list, item, &i)) {
printf("\nThe position of the item in list is %d", i);
delete_item(&list, i);
} else
printf("\nItem not found");
read_item(&item);
}
//Print the contents of the list
for (i=1; i<= number_of_items(&list); i++) {
retrieve_ith(&list, i, &item);
printf("\n %dth item was ", i);
print_item(item);
}
}

//Implementation of ADT list
void initialize_list(Tlist *list) {
list->count = 0;
}
int list_empty(const Tlist *list) {
return !list->count;
}
int number_of_items(const Tlist *list){
return list->count;
}
int retrieve_ith(const Tlist *list, int i, Titem *item) {
if (!list_empty(list) && i <= list->count) {
*item = list->array[i-1];
return 1;
}
else return 0;
}
int insert_to_list_end(Tlist *list, Titem item) {
if ( list->count < MAX ) {
list->array[list->count++] = item;
return 1;
}
else return 0;
}
int find_pos_in_list(const Tlist *list, Titem item, int *pos) {
int i;
for (i=0; i < list->count; i++) {
if (!compare(list->array[i], item)) {
*pos = i;
return 1;
}
}
return 0;
}

int delete_item(Tlist *list, int orderNo) {
void compress(Titem *array, int empty_slot, int n); //this is "private
if ( orderNo >= 0 && orderNo < list->count ) {
//take item out means nothing
compress(list->array, orderNo, list->count);
list->count--; // or should this be inside compress
return 1;
}
else return 0;
}
// This is "private" low level function used to implement public
// operation function delete_item
static void compress(Titem *array, int empty_slot, int n) {
int i;
for (i = empty_slot + 1 ; i < n ; i++)
array[i-1] = array[i];
}

//Implementation of ADT item
void read_item(Titem *item) {
printf("\nEnter character :");
*item = getche();
}
void print_item(Titem item) {
printf("%c", item);
}
int compare(Titem item1 , Titem item2) {
if ((int)item1 < (int)item2)
return -1;
else if ((int)item1 == (int)item2)
return 0;
else
return 1;
}
