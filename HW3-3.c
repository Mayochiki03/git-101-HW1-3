#include <stdio.h>
int input, s, i = 0, h, b, c, d, u = 1, max,min,search,data[11],n=0;
int main()
{
    do
    {
        h = ifs();
        if (u == 1)
        {
            headprint();
            scanf("%d", &input);
            system("cls");
        }
    } while (input != 0);
    b = ifs(input);
}
ifs()
{
    int e;
    switch (input)
    {
    case 1:
        case1();
        textf();
        break;
    case 2:
        case2();
        textf();
        break;
    case 3:
        case3();
        textf();
        break;
    case 4:
        case4();
        textf();
        break;
    case 5:
        case5();
        textf();
        break;
    case 6:
        case6();
        textf();
        break;
    case 7:
        u = 0;
        system("cls");
        break;
        return (h);
    }
}
headprint()
{
    printf("** Main Menu for 10 data **\n1. Input Data\n2. Search Data\n3. Edit Data\n4. Show All Data\n5. Show Max Data\n6. Show Min Data\n7. Exit\nSelect Menu : ");
}
line()
{
    printf("===================\n");
}
textf()
{
    printf("\n\n\nFinish Process!!\n");
    printf("Press any key to menu :");
    getch();
    system("cls");
}
case1()
{
    printf("*** Input Data ***\n");
    line();
    int i;
    for (i = 0; i <= 9; i++)
    {
        printf("Enter Number [%d]:", i);
        scanf("%d", &data[i]);
    }
}
case2()
{
    i = -1;
    printf("*** Search Data ***\n");
    line();
    printf("Enter Data :");
    scanf("%d", &search);
    do
    {
        i++;
    } while (search != data[i]);
    printf("Position Data >> [%d]\n", i);
}
case3()
{
    printf("*** Edit Data ***\n");
    line();
    printf("Enter Position :");
    scanf("%d", &search);
    do
    {
        i++;
        d = i;
    } while (search != i);
    printf("Enter Data :");
    scanf("%d", &data[d]);
}
case4()
{
    printf("*** Show All Data ***\n");
    line();
    printf("Number\t\tData\n");
    int i;
    for (i = 0; i <= 9; i++)
    {
        printf("[%d]\t\t%d\n", i, data[i]);
    }
}
case5()
{
    printf("** Show Max Data **\n");
    line();
    max = data[0];
    int i;
    for (i = 0; i <= 9; i++)
    {
        if (data[i] >= max)
        {
            max = data[i];
            n=i;
        }
    }
    printf("Maximum Position >> \t  %d\nMaximum Data >>\t\t  %d\n",n, max);
}
case6()
{
    printf("** Show Min Data **\n");
    line();
       min = data[0];
       int i;
    for(i=0; i<=9; i++)
    {
        if(data[i] <= min)
        {
            min = data[i];
            n=i;
        }
    }
   printf("Minimum Position >> \t  %d\nMinimum Data >>\t\t  %d\n",n, min);
}
