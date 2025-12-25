#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, d;
    float A, B, C, D, E;
    
    a = 1;  b = 1;  c = 5;  d = 1;

    A = 3*a/5 + 1/b;
    B = (3*a + 5*b) / (2 + c);
    C = 2.0/7 * (pow(4, 3*c) - 5*d);
    D = sqrt((2 + 8*b) / a);
    E = cbrt(b*b - 4*d);

    printf("Case 4.1\n");
    printf("A = %.3f\nB = %.3f\nC = %.3f\nD = %.3f\nE = %.3f\n\n",A, B, C, D, E);
    
    a = 9;  b = 2;  c = 0;  d = 1;

    A = 3*a/5 + 1/b;
    B = (3*a + 5*b) / (2 + c);
    C = 2.0/7 * (pow(4, 3*c) - 5*d);
    D = sqrt((2 + 8*b) / a);
    E = cbrt(b*b - 4*d);

    printf("Case 4.2\n");
    printf("A = %.3f\nB = %.3f\nC = %.3f\nD = %.3f\nE = %.3f\n\n",A, B, C, D, E);

    
    a = 0;  b = 3;  c = 3;  d = 3;
    A = 3*a/5 + 1/b;
    B = (3*a + 5*b) / (2 + c);
    C = 2.0/7 * (pow(4, 3*c) - 5*d);

    if (a != 0)
        D = sqrt((2 + 8*b) / a);
    else
        D = 0;

    E = cbrt(b*b - 4*d);

    printf("Case 4.3\n");
    printf("A = %.3f\nB = %.3f\nC = %.3f\nD = %.3f\nE = %.3f\n", A, B, C, D, E);

    
}

