#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct 
        {
        int count;
        Titem array[MAX];
        }Tlist;
        
void initialize_list(Tlist *list);
int list_empty(const Tlist *list);
int number_of_items(const Tlist *list);
int retrieve_ith(const Tlist *list, int i, Titem *item);
int insert_to_list_end(Tlist *list, Titem item);
int find_pos_in_list(const Tlist *list, Titem item, int *pos);
int delete_item(Tlist *list, int orderNo);
