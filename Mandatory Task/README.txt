The main objective of the program is to create a pattern using nested for loop

AIM :
* * * * *
 * * * *
  * * *
   * *
    *
    *
   * *
  * * * 
 * * * *
* * * * *


Declaring two variables space and rows and taking value of rows form the user it will define the number of rows in upper triangle and lower triangle hence the total height of the figure will be rows*2

#1 
Represents that the given while loop will run until the given condition that is while(1) is true

#2
The outer for loop is initialized with rows and decrements with every iteration it will break the line using endl

The first nested loop is initialized with space = 0 and runs until the condition space < rows -i is satisfied  for the first iteration the loop will print nothing as the 1st condition is not satisfied and it will print " " (space)

The second nested for loop is initialized with j = 0 and runs till j<= 2*i-1 where j is incremented after every iteration and it will print "* " until the the given condition is satisfied

The third nested for loop is initialized with k = 0 and runs until k<i-1 is satisfied where k is incremented after every iteration


Result of #2 will be 

* * * * *
 * * * *
  * * *
   * *
    *

#3
In the second half of the code the outer for loop is initialized with i =1 where the condition that it to be  satisfied is i<= rows and i gets incremented after every iteration. The value of k is set to the value 0 once the iteration is complete

The first nested loop is initialized with space = 1 and is incremented until the space <= rows - i is satisfied this loop prints " "(space) for every iteration

The nested while loop is executed for the condition that k should not be equal to 2*i-1 and it prints "* " and the value of the k is incremented with every iteraion 

Result of #3 will be 

    *
   * *
  * * * 
 * * * *
* * * * *

Hence the final output is 
* * * * *
 * * * *
  * * *
   * *
    *
    *
   * *
  * * * 
 * * * *
* * * * *