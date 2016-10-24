#Project Euler. Problem 1.
#Add all the natural numbers below one thousand that are multiples of 3 or 5.

import time

def add_natural(n):

    sum = 0
    
    for i in range(1, n):
        
        if (i % 3) == 0 or (i % 5) == 0:
            
            sum += i
        
    print sum
    
    return None

n = int(raw_input('Enter a natural number '))

start = time.time()

add_natural(n)

totaltime = time.time() - start

print totaltime, 'seconds elapsed'
