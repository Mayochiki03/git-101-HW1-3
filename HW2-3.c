#include <stdio.h>
int first,last, e, i = 0,t,c,a,g;
int h[100];
int main()
{
    printf("Enter First number :");
    scanf("%d", &first);
    printf("Enter last number :");
    scanf("%d", &last);
    a=sum();
    printf("%d",c);

}
/*print()
{
    printf("Enter First number :");
    printf("\n");
    printf("Enter last number :");

}
iscan()
{
    scanf("%d", &first);
    i++;
    scanf("%d", &last);
}*/
sum(){
    e=last-first;
    t=first;
    h[i]=first;
    do
    {
        i++;
        t=t+1;//21
        h[i]=t;
    } while (i!=e);

    return(a);

}
