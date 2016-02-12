Write RPN-calculator; a given ADT stack for simple arithmetic operations for integers.
Operations: + - = and Q

Note:
You need the stack implementation executable and link it. 

The program reads integers and operators from the keyboard in postfix form. All numbers
are pushed onto the stack. When arithmetic operator + or - is encountered, the
corresponding calculation is performed for operands popped from the stack. The result is
pushed onto the stack. The operation = in the input stream means "print the result to the
screen". It means: pop the topmost value from the stack and print the value to the screen.
The calculation must go on, from the intermediate result. That’s why you have to push the
printed result back to the stack. The operator Q means that the contents of the stack is
printed to the screen, the stack is emptied and the program terminates.
