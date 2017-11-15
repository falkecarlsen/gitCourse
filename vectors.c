#include <stdlib.h>
#include <stdio.h>

typedef struct vector{
    double x;
    double y;
}vector;

double dotproduct(vector vector_1, vector vector_2);

int main(void) {
    

    return 0;
}

double dotproduct(vector vector_1, vector vector_2){
    double result;
    result = vector_1.x * vector_2.x + vector_1.y * vector_2.y;
    return result;
}