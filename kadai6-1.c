#include <stdio.h>

int main() {
    double x=1.0,i;

    printf("%f\n",x);

    for (i=0;i<20;i++) {
        x=1.0+1/x;
        printf("%f\n",x);
    }
}
