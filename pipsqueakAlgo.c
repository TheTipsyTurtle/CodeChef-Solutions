//FULL BARRIER ALCHEMIST: pipsqueak

/*
Problem Statement:
    The hero has Height H, Jump Capacity Y2, Duck Capacity Y1, and Barrier Destruction Capacity L,
    The barrier have two types Jump Barrier 2, Duck Barrier 1, and a measurement X from ground
    Total number of test cases are given in the first line
        for each test case H,Y1,Y2,L and the number of barriers K is given
            then for each barrier, type and X is given

https://www.codechef.com/problems/PIPSQUIK
*/

/*
Algorithm

read("number of test cases",n)
for i from 1 to n:
    int totalNumberPassed
    read(H,Y1,Y2,L,K)

WE HAVE READ ALL THE INPUT
NOW FOR EACH BARRIER

    for j form 1 to K:
        if L==0:
            print(totalNumberPassed)
            exit

IF THE HERO IS EXHAUSTED AFTER PREVIOUS BARRIER
PRINT OUTPUT

        read(typeOfBarrier,X)

DUCK BARRIER CHECK

        if (typeOfBarrier==1):
            if(H-Y1>X):
                L--
            totalNumberPassed++

JUMP BARRIER CHECK

        if (typeOfBarrier==2)
            if(Y2<X):
                L--
            totalNumberPassed++

IF ALL BARRIER CROSSED WITHOUT EXHAUST
PRINT OUTPUT

    print(totalNumberPassed)

*/
