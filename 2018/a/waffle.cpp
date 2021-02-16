/*
BUG
get R=row C=column H=horizontal V=vertical
if H and V is one:
    loop in R:
        loop in C:
            count cookies in each section
else:
    loop in R:
        loop in H:
            H starts with index r+1 
            loop in C:
                loop in V with condition, V starts with index

SOLUTION
1. cumulative each row:
[
    3,
    10,
    16,
    18,
    20,
    20,
    30
]
if H = 3 and sum % H == 0 so we will find sum / H = 10:
    get interval position to cut [[1, 2], [3, 5], [6, 7]]
2. build cumulative each column
3. we now have seperated grid to find cookies
if found equal coolkie: return possible
else: return impossible
*/