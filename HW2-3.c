#include <stdio.h>
int e, i = 0, t, c,l;
int h[10000];
int sum1, sum2, a;
int main()
{
    int first, last;
    print1();
    scanf("%d", &first);
    print2();
    scanf("%d", &last);
    iscan(first, last);
    a = sum();
}
print1()
{
    printf("Enter First number :");
}
print2()
{
    printf("Enter last number :");
}
iscan(int first, int last)//convert data
{
    e = last - first;
    c=first;
    l=last;
    t = first;
    h[i] = first;
}
sum()//calculate
{
    do
    {
        i++;
        t = t + 1; 
        sum2 = t + c;
        h[i] = h[i] + sum2;
        sum1 = sum1 + h[i] - c;
    } while (i != e);
    sum1 = sum1 + c;
    printf("SUM of %d-%d :%d",c,l, sum1);
    return (a);
}
