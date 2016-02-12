More operation functions for dynamically linked list

In exercise 9 you implemented some operation functions for dynamically allocated linked
list. The type definition of Tlist was
typedef Tpointer Tlist;
Continue to develop further the program of exercise 9. Write the following operation
functions for a character list:
void delete_first(Tlist *list);
void delete_last(Tlist *list);
int find_pos_in_list(const Tlist *list, Titem item, int *pos);
The find_pos_in_list function returns 1 if item is found and 0 otherwise. If the item is
found the order number of it is passed to the caller in the parameter pos.
Use the following main function to test your new list operations:

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
}