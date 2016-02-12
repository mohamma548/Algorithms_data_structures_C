 (Assignment(=), shallow copy and deep copy)
Some students have asked, if there is any way to determine during runtime what is the
size of an array allocated from the dynamic memory. In C-language it is only a single
pointer that represent the array and no additional information is not attached to the
pointer. It is however, always possible to write your own ADT array, that knows it's size.
Then we can define the data type Tarray, that contains the pointer and the size of the
array.
The definition of Tarray could be as follows:
typedef struct {
float *c_array;
int size;
} Tarray;
To be capable to easily use this array we need operation functions like
void initialize_array(Tarray *a, int size, const float *values);
float getValue(const Tarray *a, int index);
int getSize(const Tarray *a);
void DeepCopy(Tarray *dest, const Tarray *source);
Implement this ADT array and test it using the following two small test programs. You
can reserve space from the dynamic memory by using a function call (float
*)malloc(n*sizeof(float)), where n is the size of the array to be created. This
function will return a pointer to the newly created memory block. The prototype of
malloc() function is in header <stdlib.h>, so you must include the statement #include
<stdlib.h> to your source code.

Phase 1: Test case 1 (Shallow copy and problems with it)
Do not implement the function DeepCopy yet. Use assignment to assign arr1 to arr1 (in
the middle of the program below).
int main(void) {
Tarray array1, array2;
float arr1[8] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0};
float arr2[5] = {10.0, 20.0, 30.0, 40.0, 50.0};
int i;
initialize_array(&array1, 8, arr1);
initialize_array(&array2, 5, arr2);
printf("\n Array 2 is :");
for (i = 0 ; i < getSize(&array2) ; i++)
printf("%f\n", getValue(&array2, i));
array2 = array1; //assignment is shallow copy (memory leak)
printf("\n Array 2 after the assingnment is :");
for (i = 0 ; i < getSize(&array2) ; i++)
printf("%f\n", getValue(&array2, i));
array1.c_array[4] = 4000; // This is against good programming
// practice, but we do it to
// demostrate the problem
printf("\n Array 2 when array 1 is modified is :");
for (i = 0 ; i < getSize(&array2) ; i++)
printf("%f\n", getValue(&array2, i));
system(“PAUSE”);
return 0;
}


Phase 2: Test case 2 (Deep copy)
Write DeepCopy function and replace the assignment (array2 = array1) in the
program above with the call to DeepCopy function and see that there is no problem
anymore.
It is required that there are no memory leaks in the program.


