#include <bits/stdc++.h>

int main ()
{

int N, fact1, fact2, fact3, fact4, fact5, fact6, fact7, fact8, resto, Total;

scanf ("%d", &N);

if (1 <= N <= 100.000){

    fact8 = N/40320;
    resto = N % 40320;
    if (fact8 > 0){

        N = N - (40320*fact8);

    }

    fact7 = N/5040;
    resto = N % 5040;
    if (fact7 > 0){

        N = N - (5040*fact7);

    }

    fact6 = N/720;
    resto = N % 720;
    if (fact6 > 0){

        N = N - (720*fact6);

    }

    fact5 = N/120;
    resto = N % 120;
    if (fact5 > 0){

        N = N - (120*fact5);

    }

    fact4 = N/24;
    resto = N % 24;
    if (fact4 > 0){

        N = N - (24*fact4);

    }

    fact3 = N/6;
    resto = N % 6;
    if (fact3 > 0){

        N = N - (6*fact3);

    }

    fact2 = N/2;
    resto = N % 2;
    if (fact2 > 0){

        N = N - (2*fact2);

    }

    fact1 = N/1;
    resto = N % 1;

}

Total = fact1+fact2+fact3+fact4+fact5+fact6+fact7+fact8;

printf ("%d\n", Total);

system ("pause");
return 0;

}