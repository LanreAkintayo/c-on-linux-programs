#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;

    printf("A standard Equation: ax^2 + bx + c = 0");

    printf("\nInput the value of a: ");
    scanf("%lf", &a);

    printf("Input the value of b: ");
    scanf("%lf", &b);

    printf("Input the value of c: ");
    scanf("%lf", &c);

    double d = pow(b, 2)- (4*a*c);

    printf("d is %lf\n", d);
    printf("Square root of d: %lf", 1.0 / (2 * 3));

    if (d >=0 ){
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);

        printf("\n\nx1 is %lf and x2 is %lf\n", x1, x2);
    } else{
        printf("\nComplex roots\n");
    }
    
    return 0;
}