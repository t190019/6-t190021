#include <stdio.h>

int main() {
    double x=1.0,i;

    printf("%f\n",x);

    for (i=1.0;i<20;i++) {
        x=(i*i+1)/(2*i-1);
        printf("%f\n",x);
    }
}
