#include "Lab13.h"
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


system("PAUSE");
}

