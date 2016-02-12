#include "header.h"
#include "testlectures.h" 
void initialize_list(Tlist *list) 
     {
     list->count = 0;
     }
     
int list_empty(const Tlist *list) 
    {
    return !list->count;
    }
    
int number_of_items(const Tlist *list)
    {
    return list->count;
    }
    
int retrieve_ith(const Tlist *list, int i, Titem *item)
    {
    if (!list_empty(list) && i <= list->count) 
    {
    *item = list->array[i-1];
    return 1;
    }
    
    else return 0;
    }
int insert_to_list_end(Tlist *list, Titem item) 
    {
    if ( list->count < MAX ) 
    {
    list->array[list->count++] = item;
    return 1;
    }
    else return 0;
    }
int find_pos_in_list(const Tlist *list, Titem item, int *pos)
    {
    int i;
    for (i=0; i < list->count; i++) 
    {
        if (!compare(list->array[i], item)) 
       {
       *pos = i;
       return 1;
       }
    }
    return 0;
    }
    
int delete_item(Tlist *list, int orderNo) 
    {
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
static void compress(Titem *array, int empty_slot, int n) 
       {
       int i;
       for (i = empty_slot + 1 ; i < n ; i++)
       array[i-1] = array[i];
       }
//Implementation of ADT item

void read_item(Titem *item) 
     {
     printf("\nEnter character :");
     *item = getche();
     }
void print_item(Titem item) 
     {
     printf("%c", item);
     }
int compare(Titem item1 , Titem item2)
    {
     if ((int)item1 < (int)item2)
     return -1;
     
     else if ((int)item1 == (int)item2)
     
     return 0;
     else
     return 1;
     }
