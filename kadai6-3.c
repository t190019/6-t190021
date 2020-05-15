#include <stdio.h>

int main() {
    double x=1.0,i;

    printf("%f\n",x);

    for (i=0;i<20;i++) {
        x=(x*x+1)/(2*x-1);
        printf("%f\n",x);
    }
}
