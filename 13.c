// find the third angle of triangle 
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter The First Angle : ");
    scanf("%d",&a);
    printf("Enter The Second Angle : ");
    scanf("%d",&b);
    printf("The Third Angle Will be %d",180-(a+b));
    return 0;
}