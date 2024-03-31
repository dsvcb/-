#include<stdio.h>
void main()
{
    printf("[1] crisps\n");
    printf("[2] popcorn\n");
    printf("[3] chocolate\n");
    printf("[4] cola\n");
    printf("[0] exit\n");
    char ch;
    int i;
    for(i=1;i<=5;i++)
    {
    scanf("%c",&ch);
    switch(ch)
      {
        case 1:printf("price = 3.0\n");break;
        case 2:printf("price = 2.5\n");break;
        case 3:printf("price = 4.0\n");break;
        case 4:printf("price = 3.5\n");break;
        default:printf("price = 0.0\n");break;
      }
    }
    printf("Thanks\n");
}
