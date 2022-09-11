#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<Windows.h>

int main()
{
    int n, mod;
    int sum=0;
    float div;
    char answer;

    do
    {
        do
        {
            printf("\n Insert a number with 5 digits: ");
            scanf("%d", &n);

            if(n<10000 || n>99999)
            {
                printf("\n The number must have 5 digits!!!");
                Sleep(4000);
                system("cls");
            }
        }while(n<10000 || n>99999);

        do
        {
            //modulo operation
            mod = n%10;
            sum=sum+mod;

            //division
            div = n/10;

            n=div-(mod/10);

        }while(div>=1);

        printf("\n The sum of the digits is equal %d",sum);

        Sleep(5000);

        printf("\n\n Do you want to insert a new number? (Y/N): ");
        getchar();
        answer = getchar();
        getchar();

        if(answer == 'Y' || answer == 'y')
        {
            system("cls");
            sum = 0;
        }

    }while(answer == 'Y' || answer == 'y');

    return 0;
}
