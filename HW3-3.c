#include <stdio.h>          
int input,s,i=0;   
char data[11];         
int main()
{
    printf("** Main Menu for 10 data **\n1. Input Data\n2. Search Data\n3. Edit Data\n4. Show All Data\n5. Show Max Data\n6. Show Min Data\n7. Exit\nSelect Menu : ");
    scanf("%d", &input);
    s=scase(input);
}
scase()
{                                       
    switch (input)
    {
    case 1:
        printf("*** Input Data ***\n");
        line();
        do
        {
            printf("Enter Number[%d] : ",i);
            scanf("%d",&data);
            i++;
        } while (i!=10);
        break;
    case 2:
    printf("*** search Data ***\n");
        printf("");
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
line(){
 printf("===================\n");

}