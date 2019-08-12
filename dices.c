#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int s = 100;
    int bet;

    for(;;)
    {
        if(s <= 0)
        {
            printf("you have no money\n");
            break;
        }
        printf("your sum=%d\n", s);
        printf("Your bet ");
        scanf("%d", &bet);
        if(bet <= 0){
            break;
        }
        int d1 = (rand() % 6) + (rand() % 6);
        int d2 = (rand() % 6) + (rand() % 6);
        if(d1>d2)
        {
            s += bet;
            printf("you win. ");
        }
        else
        {
            s -= bet;
            printf("you lose. ");
        }
    }
}
