#include <stdio.h>
#include <string.h>
char m[5] = {'A', 'B', 'C', 'D', 'E'};
char c[5];
int n[5];
int i = -1;

int main()
{
    int  x,z;
    for (int j = 1; j <= 5; j++)
    {
        printf("Input Score [%d] : ", j);
        scanf("%d", &x);
        n[j]=x;
        i++;
        z = grade(x);
    }
    print();
}
grade(int j)
{
    int x, z;
    if (j < 50)
    {
        c[i] = m[4];
    }
    else if (j <= 59)
    {
        c[i] = m[3];
    }
    else if (j <= 69)
    {
        c[i] = m[2];
    }
    else if (j <= 79)
    {
        c[i] = m[1];
    }
    else if (j<=100)
    {
        c[i] = m[0];
    }
    return (z);
}
line()
{
    int i;
    for (i = 1; i <= 57; i++)
        printf("=");
}
print()
{
    int j=0;
    line();
    printf("\n");
    printf("Num\t\t\t");
    printf("Score\t\t\t");
    printf("Grade\t\t\t");
    printf("\n");
    for (int x = 1; x <=5; x++)
    {
    line();
    printf("\n");
    printf("%d",x);
    printf("\t\t\t%d",n[x]);
    printf("\t\t\t %c",c[j]);
    printf("\n");
    j++;
    }
    line();
    
}
