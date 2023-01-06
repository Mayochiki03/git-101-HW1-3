#include <stdio.h>//0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25
char str[2][26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
                   'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z', };              
int input,s;            
int main()
{
    print();
    scanf("%d", &input);
    s=scase(input);
}

print()
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
        /* code */
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