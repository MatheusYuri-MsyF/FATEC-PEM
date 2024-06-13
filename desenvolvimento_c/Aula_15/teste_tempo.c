#include <limits.h>
#include <stdio.h>
#include <time.h>

int main(){
    long i;
    printf("%lu\n", time(0));
    for (i = 0; i < LONG_MAX; i++);    
    printf("%lu\n", time(0));
    for (i = 0; i < LONG_MAX; i++);    
    printf("%lu\n", time(0));
    for (i = 0; i < LONG_MAX; i++);    
    printf("%lu\n", time(0));
    for (i = 0; i < LONG_MAX; i++);    
    printf("%lu\n", time(0));
    return 0;
}