(ADT as a component of another ADT)
In the exercise 2 (phase 2) you developed a rally application where each leg has a start
time and stop time. And a whole rally race (of one car in this simple case) consisted of
three legs.
In the program you have done you have forgotten the higher level abstraction.
In the first phase (compulsory part) you will learn to use two level component hierarchy
by developing ADT Tleg that contains two times as sub component. If you want to get
more exercise you can do the voluntary part too where you learn three level hierarchy
because then you develop ADT Trally that contains three legs (Tleg) and Tleg contains
two times (Ttime).
Compulsory part (Minimum version)
You don't need to divide the leg or main program into separate files, but you still need to
use time as a black box (using header file and object file).
Define and implement ADT leg (type Tleg and functions read_leg and leg_time ) for the
purposes of the rally program from exercise 2. Use the ADT leg in the following rally
program (main function) to see that it works.
int main(void) {
Tleg legs[3];
Ttime duration;
int i;
char prompt[30];
for (i = 0 ; i < 3 ; i++) {
sprintf(prompt, "Enter times for leg %d", i+1);
read_leg(&legs[i], prompt);
}
for (i = 0 ; i < 3 ; i++) {
duration = leg_time(&legs[i]);
printf("Leg %d : ", i + 1);
print_time(duration);
}
system("PAUSE");
}


Voluntary additional part ("Perfect" version)
When you have completed the first part you know that the ADT leg works correctly. After
that you can move to the next level of abstraction and implement ADT Trally. Place
different ADTs to different files (.h and .c type files).

int main(void) {
TRally rally;
read_rally(&rally);
display_leg_times(&rally)
}
Remark. In these programs the number of legs is always 3. This is not a good idea. Better
solution were, if the user could enter the number of legs when program is run.

