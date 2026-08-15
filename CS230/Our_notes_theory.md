##NUMBER SYSTEM)

r's compliment & (r-1)'s compliment 

1)r's compliment)
Also called as the Radix Component it is basically r^n-N where n is the no of bits in N and N is the Number of which we need to find the r's compliemnt of

2)(r-1)'s complimenet is also called as the Diminished Radix Component it is the r^n-N-1 basically it is defined that way there is nothing we can do about it 
it is more ike max out all the bits in each bit to its max value and then subtract N from it .
which is exaclty given by (r^n-1)-N .

One stategy to face the 2's compliment could be that we can treat it as normal binary after assigning the weigths as :
-1*(2^(n-1)) 2^n-2.....1
so the firs tone becomes very negative.

#)Binary number representation)

if number is +ve then trivial its same for all)

If the number is negative then :

Case 1) signed : we already know


Case 2) unsigned : we already know 


Case 3) 1's compliment : convert the number to first 0N or 1N wrt signed representation and then flip all the bits


Case 4) 2's compliment : convert to 1's compliment and then add 1


#)Binary subtraction using :


1)1's complement:

Step 1)Convert number to be subtracted in its 1's complement form 


Step 2)Perform the addition 


Step 3)if (final carry=0) -> result obtained in step 2 is negative and in 1's complement form so we need to invert the bits and then see 


else if the final carry=1 then the result obtained is +ve and correct btw ignore the extra carry of 1 


2)2's complement:

Step 1)Convert number to be subtracted in its 2's complement form 


Step 2)Perform the addition 


Step 3)if (final carry=1) -> result obtained in step 2 is positive and in its true form 


else if the final carry=0 then the result obtained is -ve and is in its 2's complement.


##) The Overflow Condition)
if we have x and y as he two signed bits for two numbers n1 and n2 then let z be the signed bit 
of n1+n2 then the condition for overflow when we do n1+n2 is x'y'z+xyz'=1 if the expression is 0 then we have no overflow .


<img width="733" height="282" alt="Screenshot 2026-08-15 at 7 39 02 PM" src="https://github.com/user-attachments/assets/057db97a-11d9-4095-8125-23c9fbeeb796" />


##)BCD addition 

Here we have the follwoing cases )


Case 1)Sum<=9 , final carry=0 -> ans =correct 

Case 2)Sum<=9 , final carry =1 -> ans = incorrect 

Case 3) Sum>9 , final carry=0 -> and = incorrect 

ADD 6 to get the correct ans from incorrect ans 



#Complementing codes)


if th esum of weights of any code =9 then the code is self complemntign and vice versa 
-> 2 4 2 1 is sel complementing 



Excess 3 code is self complemnting 


