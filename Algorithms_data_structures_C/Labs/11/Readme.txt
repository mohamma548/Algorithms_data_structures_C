Phase I

In the exercises 9 and 10 we have concentrated only on the technique of dealing with links.
There was no requirement to keep the implementation generic. Your list implementation
has problem points in that respect. Make your list implementation generic so that you
don't need to modify the source code of it even if you want to store items of different data
type. The problem in your current implementation is that you have used printf function in
print_list function and == operator in find_pos_in_list function. So modify the program so
that items are ADTs and use only operation functions of items to access them (in this case
the needed functions are read_item in main function, print_item in print_list function and
compare_item in find_pos_in_list function).
To test the modified program, use the following program (we are not interested in the
function delete_first and delete_last).
int main (void) {
	Titem item1 = 'a', item2 = 'b', item3 = 'c', item4 = 'd';
	Titem to_be_searched;
	Tlist list;
	int order_no;
	initialize_list(&list);
	insert_to_list_end(&list, item1);
	insert_to_list_end(&list, item2);
	insert_to_list_end(&list, item3);
	insert_to_list_end(&list, item4);
	print_list(list);
	read_item(&to_be_searched);
	if (find_pos_in_list(&list, to_be_searched, &order_no))
		printf("\nThe order no is %d", order_no);
	else
		printf("\nNot found");
	read_item(&to_be_searched);
	if (find_pos_in_list(&list, to_be_searched, &order_no))
		printf("\nThe order no is %d", order_no);
	else
		printf("\nNot found");
}


Phase 2.
To prove that modified implementation is generic, make another program that stores
times in the linked list. The source code of list implementation must be identical in both of
these programs (char list program and time list program). Notice that even the main
function is now identical except the two lines in the beginning of the program that are now

Ttime item1 = {9, 20}, item2 = {10, 30},
item3 = {13, 55}, item4 = {14,02};
Ttime to_be_searched;


Phase 3.

We can make the implementation of this list even more generic. The current function
find_pos_in_list is actually very limited. We can only search times that are completely
identical. We cannot do searches like "find a time where minutes are n and hours do not
matter" or "find a time where hours are greater that n and minutes do not matter" or
"find a time where ratio of hours to minutes is less than r" or something else. And we of
course still sometimes want to search an exact match. Fix this problem by modifying the
function find_pos_in_list so that searching criteria can be passed as a parameter (function
parameter). The prototype of find_pos_in_list is then for example

int find_pos_in_list( const Tlist *list,
const void *what_to_find, int *pos, xxxxxx);
Test this new version of find_pos_in_list at least with these two searching criterions:
Test A) "find a time where hours are greater than or equal to n and minutes do not
matter". Test in that case can be done as follows:
int hours;
scanf("%d", &hours);
if (find_pos_in_list(&list, &hours, &order_no, compare_hours_gte))..
Test B) Exact match. Test can be done as follows:
Ttime to_be_search;
read_time(&to_be_searched);
if (find_pos_in_list(&list, &to_be_searched, &order_no,
compare_exact))..

