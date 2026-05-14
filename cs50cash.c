#include<stdio.h>

int quarter(int c);
int dime(int c);
int nickel(int c);
int main(void)
{
    int change, coins;
    do 
    {
        printf("Whats the change owed to costumer in cent?");
        scanf("%d", &change);
    }while(change <= 0);

    int rcoins = quarter(change);
    change = change - (25 * rcoins);

    int dcoins = dime(change);
    change = change - (10 * dcoins);

    int ncoins = nickel(change);
    change = change - (5 * ncoins);

    coins = rcoins + dcoins + ncoins;
    printf("%d", coins);
}

int quarter(int c)
{
    return c/25;
}
int dime(int c)
{
    return c/10;
}
int nickel(int c)
{
    return c/5;
}