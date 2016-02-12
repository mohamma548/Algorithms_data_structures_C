#include <stdio.h>
typedef char Titem;
//Interface for ADT stack
#define MAXN 5
typedef enum {NOT_OK, OK } Tboolean;
typedef struct {
Titem array[MAXN];
int top;
} Tstack;
void initialize_stack (Tstack *Pstack);
Tboolean push( Tstack *Pstack, Titem item);
Tboolean pop( Tstack *Pstack, Titem *Pitem);
void print_stack (const Tstack *Pstack);


#include <ctype.h>
void main(void) {
Tstack stack;
Tboolean succeeded;
char chr;
initialize_stack(&stack);
printf("\nEnter a letter to push onto stack");
printf("\nor digit 1 to take a letter from stack");
printf("\n Return to end the program\n");
chr = getche();
while (chr != 10 && chr != 13) {
if (isalpha(chr)) {
succeeded=push(&stack, chr);
print_stack(&stack);
if (!succeeded)
printf("\n Push operation failed\n");
}
if (chr == '1') {
succeeded = pop(&stack, &chr);
if (succeeded) {
printf("\nLetter popped is from stack is %c ", chr);
print_stack(&stack);
}
else printf("\nPop operation failed\n ");
}
chr = getche();
}
}

//Implementations of operation functions
void initialize_stack ( Tstack *Pstack) {
Pstack->top = -1;
}
Tboolean push( Tstack *Pstack, Titem item) {
if (Pstack->top >= MAXN - 1)
return(NOT_OK);
else {
(Pstack->top)++;
Pstack->array[Pstack->top] = item;
return (OK);
}
}
Tboolean pop( Tstack *Pstack, Titem *Pitem) {
if (Pstack->top == - 1)
return(NOT_OK);
else {
*Pitem = Pstack->array[Pstack->top];
(Pstack->top)--;
return (OK);
}
}
void print_stack (const Tstack *Pstack) {
int i;
printf("\nStack is : ");
for (i = Pstack->top; i >= 0 ; i-- )
printf("\n %c ", Pstack->array[i]);
printf("\n\n");
}
