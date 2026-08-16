NUMBER SYSTEM

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


LATCHES + FLIP FLOPS (MEMORY ELEMNTS)

#Latches)
(i)SR LATCH:

<img width="1282" height="646" alt="Screenshot 2026-08-16 at 7 34 21 PM" src="https://github.com/user-attachments/assets/989b2275-372f-4924-8938-cd1f662b6d2c" />


Both NOR and NAND SR latches have the same truth table :

S R Qn+1
0 0  Qn
1 1  X 
1 0 1
0 1 0

0 0 is memeory and 1 1 is invalid otherwise S dictates the final state.

<img width="285" height="37" alt="Screenshot 2026-08-16 at 7 38 01 PM" src="https://github.com/user-attachments/assets/6eeed65e-0c48-4ac7-84a5-e9f4730f376a" />

<img width="152" height="31" alt="Screenshot 2026-08-16 at 7 38 09 PM" src="https://github.com/user-attachments/assets/ffb5efd6-89c1-4b39-8fa0-6903deb822fa" />

<img width="494" height="248" alt="Screenshot 2026-08-16 at 7 38 59 PM" src="https://github.com/user-attachments/assets/d1a484c8-ca3b-493b-8b12-6d03d81fd6b9" />

THIS WAS SR LATCH (LATCH)

THis is now the clocked SR latch:
<img width="1318" height="513" alt="Screenshot 2026-08-16 at 7 39 40 PM" src="https://github.com/user-attachments/assets/4fee01e3-9962-4cfc-a149-c1edadc119a9" />

We can see that if the clock =0 then the case is 0 0 which is the Qn state hecne the previous state is copied for any chnage we need clock=1

A clock is a periodic signal that is used to keep time in sequential circuits.

 We want to keep tw small so that in the same clock pulse only a single computation is
performed.

Duty Cycle is the ratio of tw/Tperiod 

NOW WE ARE GOING TO DO THE D LATCH)
D LATCH IS VERY IMP AND USED VERY OFTEN)
we basically use only the S=0 R=1 or the S=1 and R=0 state so we force Q to be 0 or 1 wrt S 

just attach D to S and not D to R and we are done 


next is the JK flip flop here we get to use out 1 1 wasted tsate in the SR Latch 

<img width="485" height="264" alt="Screenshot 2026-08-16 at 7 50 00 PM" src="https://github.com/user-attachments/assets/b8563d3d-21bf-46f8-9fdf-0b228b323ec6" />

VVIMP

<img width="342" height="201" alt="Screenshot 2026-08-16 at 7 47 50 PM" src="https://github.com/user-attachments/assets/d17b6b50-ae5a-4fcd-82a4-3ab51fcfb6d4" />


<img width="375" height="150" alt="Screenshot 2026-08-16 at 7 48 01 PM" src="https://github.com/user-attachments/assets/24949653-4b93-450f-ad07-9d5fb3694dce" />

See the state 1 1 has been assigne d the work of toggling 
<img width="366" height="58" alt="Screenshot 2026-08-16 at 7 48 24 PM" src="https://github.com/user-attachments/assets/af95faac-360f-430b-b9a8-7396d878025f" />


Qn+1=JQn'+K'Qn
OFC here we are using level sensitive clock likeif clock=1 then the circuit works otherwise not 


IN case of flip flops they are edge triggered 

ANALYZING THE TIME COMPONENT OF THE CIRCUIT)

<img width="533" height="584" alt="Screenshot 2026-08-16 at 7 54 26 PM" src="https://github.com/user-attachments/assets/20bae3ad-7cd6-49c8-b5c0-8e8ef385e54d" />

We con careful oservation obeserve many delays  Like first of all D is kept stable evenbefore the edge and then after the edge also its kept stable for some time the response also taks tph time for the Q to change after the edge 

WE HAVE tsu-> set up time the tie for twhcih we ha out D stable before we encountered an edge 
WE HAVE th->the time for which we kept D stable after the edge passed away

EDGE TRIGGERED: We talk abotu the tplh : like after the clock chnage how much time it took for Q change 
LEVEL TRIGGERED: We talk abotu tthe tphl: like of cthe cloc would be kept at 1 then the data chaegd then how much tim eit took for the tQ toc haneg after D changed 



####### MASTER SLAVE FLIP FLOP VERY VERY IMP)


-> RACE AROUND CONDITION FOR JK FLIP FLOP)
Condition 1)Level triggered JK flip flop
Condition 2)When J=K=1 (toggle mode)
Condition 3)Tw>>Td
Tw is Time period/2
Td is time taken byt the JK flip flop to get the outpt after processing the input 
This is really really messed up. Master Slave flip flop is the case now our saviour

<img width="1165" height="752" alt="Screenshot 2026-08-16 at 8 18 06 PM" src="https://github.com/user-attachments/assets/95ec2613-2a5d-4e3a-9271-e0a48745b6f1" />

this is the master JK flip flop


EDGE TRIGGERED D FLIP FLOP)

<img width="594" height="690" alt="Screenshot 2026-08-16 at 8 25 06 PM" src="https://github.com/user-attachments/assets/3f0fbece-e466-49d6-9e13-86403cd578aa" />

BASICALLY HERE we ahve that for clock = 1 we get S=0 and R=0 so no chnage and when claokc =0 then S=D and R=D' so the value of the ouput becodes D so tehnically yeah the curicuti is level triggered only but it behaves as n edge triggrered cicuit.

REGISTERS)
A collection of flip-flops used to store multiple bits is a register.
<img width="699" height="296" alt="Screenshot 2026-08-16 at 9 18 13 PM" src="https://github.com/user-attachments/assets/62ce6ac8-c6fe-4bc3-a34b-119dfbbdca13" />


<img width="912" height="139" alt="Screenshot 2026-08-16 at 9 19 53 PM" src="https://github.com/user-attachments/assets/f36772ff-a040-4abd-8768-63c04622234c" />


<img width="616" height="700" alt="Screenshot 2026-08-16 at 9 20 31 PM" src="https://github.com/user-attachments/assets/16737a8c-b77f-4f19-a81a-327391900d6b" />

We basically keep shifting the bits

Parallel. Register :
<img width="552" height="665" alt="Screenshot 2026-08-16 at 9 25 30 PM" src="https://github.com/user-attachments/assets/6b8245b9-0c6a-4cf9-a408-71f6f752234d" />

<img width="834" height="279" alt="Screenshot 2026-08-16 at 9 26 03 PM" src="https://github.com/user-attachments/assets/02e2af28-021c-4d36-a7b3-1701f5465bff" />

Universal shiftr register:
<img width="854" height="745" alt="Screenshot 2026-08-16 at 9 27 26 PM" src="https://github.com/user-attachments/assets/5bd78220-c596-43f9-a774-ebbd5fe5d4ff" />

Shift register:
<img width="529" height="188" alt="Screenshot 2026-08-16 at 9 34 56 PM" src="https://github.com/user-attachments/assets/8810ca70-6b1a-45ca-8966-7858b404c962" />

<img width="637" height="695" alt="Screenshot 2026-08-16 at 9 35 26 PM" src="https://github.com/user-attachments/assets/905c1d6e-3e43-4527-9cc6-0df64222e264" />

Parallee register:
<img width="227" height="403" alt="Screenshot 2026-08-16 at 9 41 50 PM" src="https://github.com/user-attachments/assets/cd329d5d-7ab6-4f7f-9b68-350d7947cfac" />

Like here we have 
<img width="455" height="240" alt="Screenshot 2026-08-16 at 9 51 20 PM" src="https://github.com/user-attachments/assets/ccc2089d-ad8c-4005-8fa6-102f75d0cd58" />
this kind of a circuit 
<img width="494" height="131" alt="Screenshot 2026-08-16 at 9 51 35 PM" src="https://github.com/user-attachments/assets/a83d2dce-a8d0-45bd-a4cd-042539b0dec0" />

We dont want to quickly lose data thta is why we will chnage dat only when load =1 


Data can be added in serial or a parallel form)

<img width="1228" height="539" alt="Screenshot 2026-08-16 at 9 53 10 PM" src="https://github.com/user-attachments/assets/baf84bbf-22c2-4e50-aa25-3d6cbbf17771" />

Serial form:Temporal code 


Parallel form:Special code 


##)Classification of Reisters)
Depending on I/P and O/P :
1)SISO : Serial input and serial output 
2)SIPO:Serial input Parallel output 
3)PISO:''
4)PIPO:''


Dependign on usage:
1)Shift register:
2)Storage register: Basiclaly PIPO we just enter and then just ouput no shifting 

<img width="1309" height="500" alt="Screenshot 2026-08-16 at 10 03 22 PM" src="https://github.com/user-attachments/assets/17309cc9-f2a8-4c44-856c-c7374fe03531" />


<img width="1269" height="610" alt="Screenshot 2026-08-16 at 10 03 41 PM" src="https://github.com/user-attachments/assets/62558c25-83ce-4173-999c-0e27d6cf5d6b" />

<img width="899" height="1599" alt="WhatsApp Image 2026-08-16 at 10 27 44 PM" src="https://github.com/user-attachments/assets/b2025ffc-2270-4606-96ef-5189464afe8e" />

Like this we can have paralel output (ie the ouput at the same time out):(SIPO)
<img width="1070" height="544" alt="Screenshot 2026-08-16 at 10 34 19 PM" src="https://github.com/user-attachments/assets/2308bd25-3e0d-48dc-acd4-e1f7803ca0b4" />

(PIPO):
<img width="1032" height="469" alt="Screenshot 2026-08-16 at 10 37 07 PM" src="https://github.com/user-attachments/assets/d539c139-63a8-4740-9dc2-fc422b20147b" />


