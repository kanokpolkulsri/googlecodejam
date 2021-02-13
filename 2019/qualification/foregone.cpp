/*
create input N[10e101]
create 2 answer A[10e101] and B[10e101]
loop input from the first index to the last index to find digit 4

if(found) {
	A[i] = 3
	B[i] = 1
} else {
	A[i] = N[i]
	B[i] = 0
}

test
4444 = [4, 4, 4, 4] -> A[3, 3, 3, 3] B[1, 1, 1, 1]
4 = [4] -> A[3] B[1]
940 = [9, 4, 0] -> A[9, 3, 0] B[0, 1, 0]	
*/
