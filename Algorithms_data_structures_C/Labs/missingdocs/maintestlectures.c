#include "testlectures.h"
void main (void)
{
     Tlist list;
     Titem item;
     int i = 0;
     initialize_list(&list);
     printf("\nEnter items");
     read_item(&item);
     while (compare(item , STOP))
     {
     insert_to_list_end(&list, item);
     read_item(&item);
     }
     //Print the contents of the list
        for (i=1; i<= number_of_items(&list); i++)
         {
         retrieve_ith(&list, i, &item);
         printf("\n %dth item was ", i);
         print_item(item);
         }
         printf("\nDelete list items");
         read_item(&item);
         while (compare(item , STOP)) 
         {
         if(find_pos_in_list(&list, item, &i))
         {
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
