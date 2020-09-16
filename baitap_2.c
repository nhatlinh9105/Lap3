#include <stdio.h>

int main()
{
    float a;
    
    printf("Input centimeters:");
    scanf("%f", &a);
    
    printf("%f centimeters is: %.2f feet\n", a, a*0.032);
    printf("%f centimeters is: %.2f inch\n", a, a*0.39);
    
    
}
