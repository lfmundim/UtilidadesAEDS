#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, x[3], y[3], d, q, r, alpha, beta, divis, divid;
    x[0] = 1;
    y[0] = 0;
    x[1] = 0;
    y[1] = 1;


    scanf("%d %d", &a, &b);
    divis = a;
    divid = b;

    r = a%b;
    q = a/b;

    while(r!=0){
        x[2] = x[0]-x[1]*q;
        x[0] = x[1];
        x[1] = x[2];
        y[2] = y[0]-y[1]*q;
        y[0] = y[1];
        y[1] = y[2];
        a = b;
        b = r;
        r = a%b;
        q = a/b;
    }

    if(r==0){
        d = x[2]*divis+y[2]*divid;
    }

    printf("MDC(%d,%d) = %d\nALPHA = %d / BETA = %d\n", divis, divid, d, x[2], y[2]);

    return 0;
}
