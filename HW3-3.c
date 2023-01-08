#include <stdio.h>
int input = 0, s, i = 0, h, b, c, d;
int data[11], search;

int main()
{
    do
    {
        h = ifs();
        headprint();
        scanf("%d", &input);
        system("cls");
    } while (input != 0);
    b = ifs(input);
}
ifs()
{
    switch (input)
    {
    case 1:
        case1();
        printf("Press any key to menu :\n");
        getch();
        system("cls");
        break;
    case 2:
        case2();
        printf("Press any key to menu :\n");
        getch();
        system("cls");
        break;
    case 3:
        case3();
        printf("Press any key to menu :\n");
        getch();
        system("cls");
        break;
    case 4:
        case4();
        printf("Press any key to menu :\n");
        getch();
        system("cls");
        break;
    case 5:

        break;
    case 6:

        break;
    case 7:

        break;
    }
    return (h);
}
headprint()
{
    printf("** Main Menu for 10 data **\n1. Input Data\n2. Search Data\n3. Edit Data\n4. Show All Data\n5. Show Max Data\n6. Show Min Data\n7. Exit\nSelect Menu : ");
}
line()
{
    printf("===================\n");
}
case1()
{
    printf("** Input Data **\n");
    line();
    for (int i = 0; i <= 5; i++)
    {
        printf("Enter Number [%d]:", i);
        scanf("%d", &data[i]);
    }
}
case2()
{
    i = -1;
    printf("** Search Data **\n");
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
    printf("** Edit Data **\n");
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
}
case5()
{
}
case6()
{
    input = 0;
}
