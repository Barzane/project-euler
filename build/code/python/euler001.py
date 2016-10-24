#Project Euler. Problem 1.
#Add all the natural numbers below one thousand that are multiples of 3 or 5.

import time

def add_natural(n):

    sum = 0
    
    for i in range(1, n + 1):
        
        if (i % 3) and (i % 5):
            
            sum += i
        
    print sum
    
    return None

n = int(raw_input('Enter a natural number '))

start = time.time()

add_natural(n)

totaltime = time.time() - start

print totaltime, 'seconds elapsed'
