Dynamically allocated linked list
An address of the first node is capable to represent the whole list in dynamic memory,
provided that the next member in the last node is NULL to indicate the end of the list. In
this case the data type Tlist of ADT list can be defined as follows:
typedef Tpointer Tlist;
When operation functions are defined for that type we get the ADT list. Write the
following operation functions for the type Tlist defined above

void initialize_list(Tlist *list);
void insert_to_list_end (Tlist *list, Titem data);
void print_list(Tlist list);

Start working from the example program (dynlist4.c) The list is a genuine ADT and the example application (the main function) you can use to test
your operation functions could be:

void main (void) {
	Tlist list;
	initialize_list(&list);
	print_list(list); // empty
	insert_to_list_end(&list, 'a');
	print_list(list); // one item
	insert_to_list_end(&list, 'b');
	print_list(list); // two items
	insert_to_list_end(&list, 'c');
	print_list(list); // three items
	insert_to_list_end(&list, 'd');
	print_list(list); // four items
}