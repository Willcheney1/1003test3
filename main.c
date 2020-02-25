#include <stdio.h>

int main()
{
float x;
float y;
    printf("Enter an number: ");
    scanf("%f", &x); //note change of %d to %f
    y = (x+2)/(x-1);
    printf("y: %f\n", y); // %d formats an integer
    return 0;

}
