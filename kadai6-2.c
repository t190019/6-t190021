#include <stdio.h>
#include <math.h>

int main() {
    double x=1.0,i;

    printf("%f\n",x);

    for (i=1.0;i<=20;i++) {
        x=sqrt(1+i);
        printf("%f\n",x);
    }
}
