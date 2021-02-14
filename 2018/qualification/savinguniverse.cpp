/*
find total
find c total
declare c count = 0
declare anscount
while loop from last index until first index or less than D:
    if value is less than D:
        print anscount
        break
    if ctotal == ccount:
        impossible
    if char is C:
        check if next right is S && cursor is not last index
            swap char
            value = value - (2^(ctotal-ccount)) + (2^(ctotal-ccount-1))
            back cursor -= 1;
            anscount += 1
        ccount += 1


test
D=6 and SCCSSC
[S, C, C, S, S, C]
[1, c1, c2, 4, 4, c3]
value = 9
ccount = 1
cursor [1, c1, *c2*, 4, 4, c3]
value = 9 - 4 + 2 = 7
[S, C, S, C, S, C]
cursor [1, c1, 2, *c2*, 4, c3]
value = 7 - 4 + 2 = 5

*/