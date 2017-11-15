#include <stdio.h>
#include <stdlib.h>

#define VECTORSCALE 3

typedef struct vector{
    double x;
    double y;
} vector;

double vector_dot(vector vector_1, vector vector_2);
vector vector_add(vector vector_1, vector vector_2);
vector vector_scale(vector a, double n);
void vector_print(vector a);

int main(void) {

    vector a, b, vectorAdd, vectorScale;

    a.x = 5;
    a.y = 4;

    b.x = 1;
    b.y = 6;

    vectorAdd = vector_add(a, b);

    vectorScale = vector_scale(a, VECTORSCALE);

    printf("a: "); vector_print(a);
    printf("\nb: "); vector_print(b);
    printf("\na add b: "); vector_print(vectorAdd);
    printf("\na scaled by 3: "); vector_print(vectorScale);
    printf("\na dot c: %f\n", vector_dot(a, vectorAdd));

    return EXIT_SUCCESS;
}

double vector_dot(vector vector_1, vector vector_2){
    return vector_1.x * vector_2.x + vector_1.y * vector_2.y;
}

vector vector_add(vector vector_1, vector vector_2) {
    vector result;
    result.x = (vector_1.x + vector_2.x);
    result.y = (vector_1.y + vector_2.y);
    return result;
}

vector vector_scale(vector a, double n) {
    a.x *= n;
    a.y *= n;
    return a;
}

void vector_print(vector a){ /*printer vector a*/
    printf("(%2f,%2f)", a.x, a.y);
}

