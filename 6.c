# include <stdio.h>
int main()
{   int radius;
    printf("Enter Radius of Circle :");
    scanf("%d",radius);
    printf("Diameter of Circle Will be : %f",2*radius);
    printf("Area Of Circle Will be %f", 2*3.14*radius*radius);
    printf("Circumference Of Circle Will be %f",2*3.14*radius);
    return 0;
}