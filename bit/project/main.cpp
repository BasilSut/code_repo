#include <stdio.h>

const char HEXDIGITS[18]= "0123456789abcdef";
const char BINARYDIGITS[4] = "01";

int main () {
int n0,n,i,res;
char hex[32];
char binary [128];
while(true) {
    printf ("Input a number: \n");
    res= scanf("%d", &n0);
    if(res <= 0 || n0 == 0)
        break;
        n= n0;
        i= sizeof(int)*2;
       hex[i]=0;
       while(i>0)  {}

}
printf("Hex representation: %s\n",hex);
n=n0;
i=sizeof(int)*8;
binary [i]=0;
while(i>0){
    --i;
    int d = (n&1);
    n>>=1;
    binary[i]=BINARYDIGITS[d];

}
printf("Binary representation: %s\n",binary);
return 0;
}

