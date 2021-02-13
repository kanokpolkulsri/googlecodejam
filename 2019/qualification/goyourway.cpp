/*
get n and lydia[2n-2]
create ans[2n-2]
create char lastAnsStep; declare to S
loop until 2n-2:
    if lastAnsStep is S:
    move to E all the time if lydia[i] is not E
    ans[i] = lydia[i] == E ? S : E
    
    if lastAndStep is E:
    move to S all the time if lydia[i] is not S
    ans[i] = lydia[i] == S ? E : S

ESES
(input)
E S 0
0 E S
0 0 *

(output)
S 0 0
E S 0
0 E *

*/