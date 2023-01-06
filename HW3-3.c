#include <stdio.h>
int input, s, i = 0, h;
char data[11];
int main()
{
    headprint();
    scanf("%d", &input);
    s = scase(input);
}
headprint()
{
    printf("** Main Menu for 10 data **\n1. Input Data\n2. Search Data\n3. Edit Data\n4. Show All Data\n5. Show Max Data\n6. Show Min Data\n7. Exit\nSelect Menu : ");
}
scase()
{
    switch (input)
    {
    case 1:

        break;
    case 2:

        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    case 6:
        /* code */
        break;
    case 7:
        /* code */
        break;
    default:
        // printf("Hello wold");
        break;
    }
}
line()
{
    printf("===================\n");
}