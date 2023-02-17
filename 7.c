//find radius of circle and circumference
#include <stdio.h>
int main()
{
    float radius;
    printf("Enter Radius of Circle :");
    scanf("%f",&radius);
    printf("Diameter of Circle Will be : %f \n",radius+radius);
    printf("Area Of Circle Will be %f \n", 3.14*radius*radius);
    printf("Circumference Of Circle Will be %f \n",2*3.14*radius);
    return 0;
}


