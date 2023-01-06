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
        z = grade(x,j);
    }
    print();
}
grade(int j,int q)
{
    int x, z;
    if (j < 50)     // D 0-49
    {
        c[i] = m[4];
    }
    else if (j <= 59)// D 50-59
    {
        c[i] = m[3];
    }
    else if (j <= 69)// C 60-69
    {
        c[i] = m[2];
    }
    else if (j <= 79)// B 70-79
    {
        c[i] = m[1];
    }
    else if (j<=100)// A 80-100
    {
        c[i] = m[0];
    }else {
        x=error(q);
    }
    return (z);
}
error(int q)
{
    int j, z, e;
    printf("Error\n");
    printf("Input Score [%d] : ", q);
    scanf("%d", &j);
    n[q]=j;
    z = grade(j,q);
    return (e);
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