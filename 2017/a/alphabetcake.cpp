/*
get input into 2-dimentional array

vertical insertion
loop row:
    loop column:
        loop row+1 til the last row or found another alphabet:
            replace the alphabet
            done

horizontal insertion
loop row:
    loop column:
        loop column+1 til the last column or found another alphabet:
            replace the alpabet
            done

test
CO?DE?
??????
?J?AM?

vertical insertion
CO?DE?
??????
?J?AM?
------
CO?DE?
CO?DE?
CJ?AM?

horizontal insertion
CO?DE?
CO?DE?
CJ?AM?
------
COODEE
COODEE
CJJAMM

done
*/