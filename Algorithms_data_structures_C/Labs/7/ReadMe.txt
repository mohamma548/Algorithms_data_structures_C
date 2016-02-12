Automatically expanding simple queue
The simplest way to implement a queue is to use an array as a storage for queued
elements. In the enqueue operation a new item is always put as the last element and the
number of elements is incremented. In the dequeue operation an item is always taken
from the beginning of the array (index 0) and all other items are moved forward in the
array. This is not the most efficient way, because data needs to be moved in each dequeue
operation. But anyway it is very easy to understand, because it behaves like the real queue
of persons in the bank for example (all people take one step forward, when one customer
moves to get the service). We saw the data definition and basic principles of how
operation functions of this kind of queue can be implemented. You can find this kind of
working queue (taujono0.c) from the Tube-portal. This queue uses fixed sized array, so
that the program gives an error message, if you try to enqueue data when the queue is full.
We also examined an "automatically expanding" stack in the class. Apply now these things
to the queue. This means that you should write an "automatically expanding queue". Start
for example with the queue size of 3 (when the queue is initialized allocate space for three
elements) and every time when more space is needed automatically increase the size of the
array by for example 3. To make testing easy, put an output like "size is increased and is
now xx items" from the enqueue operation, when size is increased to make it easier to
follow the working of your program. Do not use the realloc() function for changing the
size of the array (because it is more educating to use malloc() and free() functions).
The most important principle here is that expanding really is automatic. It is automatic for
the user of the queue. The use of the queue is as easy as before. The only difference for the
user is that enqueue function never returns NOT_OK, because enqueue operation always
succeeds.
Download the program taujono0.c from the Tube portal and compile and run it so that
you understand how it works. After that do all modifications needed to make the queue
automatically expandable.
Remark 1. Do not modify the main program (main), because you still can use it to test your
more advanced queue. This also means that you must not modify the prototypes of the
operation functions of the queue. The function implementations of course need
modification because we need to move to use dynamic array instead of fixed size array.