# DPS-Fest-Problem-C-2023
Herein lies the solution to one of the six problems asked in the Code-a-Thon of the DPS FEST *CHRYSALIS* (15 July, 2023)


QUESTION :

=> Pikachu goes to the lake for a certain number of days. There the Weedles wait to fight him. Pikachu can only be defeated when all the 
  
  Weedles are present together else Pikachu wins. 

=> The number of Weedles (w) and the number of Days (d) need to be taken as input from the user [1<w,d<100]. 

=> The schedules of the Weedles on each day will also need to be taken as an input. 1 means that Weedle is present and 0 means it is 
  
  absent that day.

=> Find the maximum consecutive number of days Pikachu wins.

Example :

Enter the number of Weedles : 5

Enter the number of Days : 6

Enter the schedule :

10101

11111

10010

11001

11111

00010

The maximum number of consecutive days in which Pikachu wins : 2

Explanation :

Schedule : 

10101 => Day 1, Pikachu Wins

11111 => Day 2, Pikachu Loses as all the Weedles are present that day

10010 => Day 3, Pikachu Wins

11001 => Day 4, Pikachu Wins

11111 => Day 5, Pikachu Loses as all the Weedles are present that day

00010 => Day 6, Pikachu Wins

Hence, Maximum Consecutive Wins = 2


