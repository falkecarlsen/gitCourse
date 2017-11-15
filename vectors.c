#include <stdlib.h>
#include <stdio.h>

struct vector{
    double x;
    double y;
};

typedef struct vector vector;

int main(void) {
    
    vector a, b, c, d;
    double dot, mag;
    
    a.x = 5;
    a.y = 4;
    
    b.x = 1;
    b.y = -2;
    
    c = vector_scale(a, 3);
    d = vector_add(a, b);
    dot = vector_dot(a, c);
    
    printf("a: "); vector_print(a);
    printf("b: "); vector_print(b);
    printf("c: "); vector_print(c);
    printf("d: "); vector_print(d);
    printf("a dot b: %d\n", dot);
    
    return 0;
}
