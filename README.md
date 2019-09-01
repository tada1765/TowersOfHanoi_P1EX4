# TowersOfHanoi_P1EX4

Reference:
---------------
from freecodecamp, [click here](https://www.freecodecamp.org/news/analyzing-the-algorithm-to-solve-the-tower-of-hanoi-problem-686685f032e3/)

1.1 Objective:
----------------
- move an entire stack of disks from the source position to another position. Three simple rules are followed:

1. Only one disk can be moved at a time.
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack. In other words, a disk can only be moved if it is the uppermost disk on a stack.
3. No larger disk may be placed on top of a smaller disk.

1.2 Coding:
 -------------
- Code detail, [click here](https://github.com/tada1765/TowersOfHanoi_P1EX4/blob/master/src/TowersOfHanoi.c)

1.3 Result:
------------
 ![console](https://trello-attachments.s3.amazonaws.com/5d6b4cb5992da185ebf27eb3/5d6b4d57633e657cf9a304d9/01c10f8a58bcfc31b3259cad24766ff6/image.png)


1.4 Summary:
----------------
1. solution:
Move the first disk from A to C
Move the first disk from A to B
Move the first disk from C to B
Move the first disk from A to C
Move the first disk from B to A
Move the first disk from B to C
Move the first disk from A to C
