# CS-3113 Intro to Operating Systems Project #1 (Shared Memory)

## Project Decription

In this assignment, 4 processes are created. Each of these processes will share a variable called "total". Each will increment the variable “total” by one to 100,000, 200,000, 300,000 and 500,000 respectively. Make sure that only the newly created child calls the function “process#()”

After all the children have finished, the parent process should release the shared memory and terminate. Use the "wait" function so that the parent knows precisely when each of the children finishes. The
parent should print the process id of each child as the child finishes execution. Then it should release shared memory and print "End of Program".

**Sample output**

From Process 1: counter = 270547.
From Process 2: counter = 347860.
From Process 3: counter = 400001.
From Process 4: counter = 500000.
Child with ID: 2412 has just exited.
Child with ID: 2411 has just exited.
Child with ID: 2413 has just exited.
Child with ID: 2415 has just exited.
End of Simulation.

## Steps to compile
