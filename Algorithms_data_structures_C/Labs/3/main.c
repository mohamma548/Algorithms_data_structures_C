#include <stdio.h>
#include <stdlib.h>
typedef struct {
float *c_array;
int size;
} Tarray;

void initialize_array(Tarray *a, int size, const float *values);
float getValue(const Tarray *a, int index);
int getSize(const Tarray *a);
void deepCopy(Tarray *dest, const Tarray *source);
/*********************************************************************************/
int main(void) {
Tarray array1, array2;
float arr1[8] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0};
float arr2[5] = {10.0, 20.0, 30.0, 40.0, 50.0};
int i;
initialize_array(&array1, 8, arr1);
initialize_array(&array2, 5, arr2);
printf("\n Array 2 is :\n");
for (i = 0 ; i < getSize(&array2) ; i++)

printf("%.4f\n", getValue(&array2, i));
array2 = array1; //assignment is shallow copy (memory leak)
printf("\n Array 2 after the assingnment is :\n");
for (i = 0 ; i < getSize(&array2) ; i++)
printf("%.3f\n", getValue(&array2, i));
deepCopy(&array2,&array1);

printf("\n Array 2 when array 1 is modified is :\n");
for (i = 0 ; i < getSize(&array2) ; i++)
printf("%.2f\n", getValue(&array2, i));

  system("PAUSE");	
  return 0;
}
/******************************************************************************************/
void initialize_array(Tarray *a, int size, const float *values)
{
     int i;
     a->size=size;
     a->c_array=(float*)malloc(size*sizeof(float));
     a->c_array=values;
     
}
int getSize(const Tarray *a)
{
    return a->size;
}
float getValue(const Tarray *a, int index)
{
      return a->c_array[index];
}
void deepCopy(Tarray *dest, const Tarray *source)
{
     int i;
     for (i = 0 ; i < dest->size ; i++)
     dest->c_array[i]=source->c_array[i];
     
}
