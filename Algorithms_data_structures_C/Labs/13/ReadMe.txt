Double linked lists
Implement an ADT double linked list of integers. The typename of that ADT is Tdbl. The
following operation functions are needed:
initialize_dbl (initializes a double linked list)
insert_to_dbl_front (adds a new node to the front)
insert_to_dbl_back (adds a new node to the end)
print_dbl (displays all elements from first to last)
print_dbl_reverse (displays elements from last to first)
You can use a simple program below to test your function implementations:

int main(void) {
		Tdbl dbl;
		initialize_dbl(&dbl);
		print_dbl(dbl);
		print_dbl_reverse(dbl);
		insert_to_dbl_back(&dbl, 10);
		print_dbl(dbl);
		print_dbl_reverse(dbl);
		insert_to_dbl_front(&dbl, 20);
		print_dbl(dbl);
		print_dbl_reverse(dbl);
		insert_to_dbl_back(&dbl, 30);
		print_dbl(dbl);
		print_dbl_reverse(dbl);
		insert_to_dbl_front(&dbl, 40);
		print_dbl(dbl);
		print_dbl_reverse(dbl);
		insert_to_dbl_back(&dbl, 50);
		print_dbl(dbl);
		print_dbl_reverse(dbl);
}