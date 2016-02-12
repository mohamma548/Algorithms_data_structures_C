 Component nature of ADT
 Phase 1. (Putting implementation in real black box)
Use the program from the exercise 1 as a basis and do the following things (after it is
working as required in exercise 1). Divide the program into separate files time.h, time.c
and process_times.c. Time.c contains all the functions available for time processing,
time.h contains function prototypes and typedefinitions, and process_times.c contains
all the remaining (main() function). Compile the files time.c and process_times.c and
then link object files process_times.obj and time.obj together to make an executable file
process_times.exe. Now you have a software component time that you can reuse in
many different kind of applications only by including the header file time.h in your
application and linking the "black box" time.obj using linker.
Phase 2. (Reusability of component)
Now reuse the time component in a different application without modifying it.
Remember that you need to use the time like components are usually used: you only
use it's interface information (information in the header file) in the application (in main
function) and then you link ("plug in") the component as a black box (object file).
In a rally race the whole race consists of several legs. Write an application for the result
service of the rally race that works as follows:
In the rally race we have three legs. We are now considering only one race car. The
clock time (hours and minutes only) is recorded every time when the car starts the
leg and every time it crosses the goal line of the leg. When a car has completed all
legs we have six times. These six times are entered to the program and they are
stored to the time array of six elements. After that the program calculates the times
spent for each leg and displays these three times in the following format:
leg 1 : 0:35
leg 2 : 1:03
leg 3 : 0:45
Remark 1. When times are entered, the program displays descriptive prompts like
Enter starting time for leg 1 :
Enter ending time for leg 1 :
and so on.
Remark 2. To be reusable in many applications, the ADT needs a good selection of
operation functions. We have implemented only a few of them. Very necessary
operations for time are for example comparison (see extra part of exercise 1) and
addition. If we had addition operation too we could calculate the total time for a car. It
is not required in this small exercise.