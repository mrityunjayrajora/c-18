# include <stdio.h>
int main()
{   int c,eng,maths,elec,mech;
    printf("Enter The Marks Of C Programming :");
    scanf("%d",&c);
    printf("Enter The Marks Of English :");
    scanf("%d",&eng);
    printf("Enter The Marks Of Maths :");
    scanf("%d",&maths);
    printf("Enter The Marks Of Electronic Engg. :");
    scanf("%d",&elec);
    printf("Enter The Marks Of Mechenical Engg. :");
    scanf("%d",&mech);
    printf("Average Marks are %f \n",0.2*(c+eng+maths+elec+mech));
    return 0;
}