// To calculate area of any rectangle, use the formula area = len*bre. Here len is the length and bre is the breadth of rectangle.

#include <stdio.h>
 
int main()
{
    float length, width, area;
    scanf("%f", &length);
    scanf("%f", &width);
    area = length * width;
    printf("%0.02f\n", area);
    
    return 0;
}

// Input: 2.5
//        3
// Output: 7.50