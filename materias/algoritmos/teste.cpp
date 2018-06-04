#include <iostream>
#include <math.h>

int main () {
float NUMSEQ;
int I;

for (I=0; I<=4; I++)
{
    NUMSEQ = pow(3,I);
    printf("\n%.2f", NUMSEQ);
}
printf("\n");
system ("pause");
return 0;
}