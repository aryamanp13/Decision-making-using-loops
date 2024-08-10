# Aim:
To study and implement C++ decision making statements Loops

## Theory:
Nested for: A nested for loop is a loop within another loop. This construct is commonly used to iterate over multiple dimensions of data or to create patterns.

How it works

1.The outer loop starts with its initialization, condition check, and increment.

2.For each iteration of the outer loop:

The inner loop starts with its initialization, condition check, and increment.

The inner loop executes its body until its condition becomes false.

The inner loop completes its iterations.

3.The outer loop increments and continues its iterations until its condition becomes false.

## Algorithm(for floyd series):
1.Start

2.Declare variables i, j, k, and n.

3.Input the value of n (number of rows).

Initialize k to 1.

4.Outer Loop:

For i from 1 to n:

Inner Loop 1:

For j from 1 to n - i:

Print a space.

5.Inner Loop 2:

For j from 1 to i:

6.Print the value of k followed by a space.

Increment k.

Print a newline.

7.End

