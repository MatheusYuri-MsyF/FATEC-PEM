#include <stdio.h>
#include <math.h>

int total_segundo (int h, int m, int s) {
    return h*3600 + m*60 +s;
}
float hipotenusa (float a, float b) {
    return sqrt(a*a + b*b);
}
float max (float a, float b) {
    if (a >= b) return a;
        return b;
}
void zum () {
    for (int i = 0; i <= 100; i++){
        printf ("*");
        return;
    }
    
}

int main () {
    printf ("Total de segundo %d\n", total_segundo(3, 47, 18));
    printf ("Hipotenusa = %.2f\n", hipotenusa (3, 4));
    return 0;
}