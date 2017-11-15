#include <stdlib.h>
#include <stdio.h>

typedef struct vector{
    double x;
    double y;
}vector;

double dotproduct(vector vector_1, vector vector_2);
int vector_add(vector vector_1, vector vector_2);
void vector_print(vector a);

int main(void) {

    vector a, b, c, d;
    double dot;
    
    a.x = 5;
    a.y = 4;
    
    b.x = 1;
    b.y = 6;
    
    c = vector_add(a, b);
    
    /* d = vector_scale(a, 3); */
    
    dot = vector_dot(a, c);
    
    /* printf("a: "); vector_print(a); */
    /* printf("\nb: "); vector_print(b); */
    /* printf("\nc: "); vector_print(c); */
    /* printf("\nd: "); vector_print(d); */
    printf("\na dot c: %d\n", dotproduct(a, c));

    return 0;
}

double dotproduct(vector vector_1, vector vector_2){
    double result;
    result = vector_1.x * vector_2.x + vector_1.y * vector_2.y;
    return result;
}

int vector_add(vector vector_1, vector vector_2) {

  int result;
  result = (vector_1.x + vector_1.y) + (vector_2.x + vector_2.y);
  return result;  
}


void vector_print(vector a){ /*printer vector a*/
  
  printf("(%f,%f)", a.x, a.y);
  
  
}