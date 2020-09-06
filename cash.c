#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //varibles
    int coin;
    float change;
    float modchange;
    
    //user input loop
    do 
    {
        change = get_float("Input Change: ");
        modchange = round(change * 100);
    }
    while (change < 0);
    
    //counts change in to coins
    if (modchange - 25 >= 0)
    {
        while (modchange >= 25)
        {
            modchange = modchange - 25;
            coin = coin + 1;
        }    
            
    }
    if (modchange - 10 >= 0)
    {
        while (modchange >= 10)
        {
            modchange = modchange - 10;
            coin = coin + 1;
        }
            
    }
    
    if (modchange - 5 >= 0)
    {
        while (modchange >= 5)
        {
            modchange = modchange - 5;
            coin = coin + 1;
        }    
            
    }
    
    if (modchange - 1 >= 0)
    {
        while (modchange >= 1)
        {
            modchange = modchange - 1;
            coin = coin + 1;
        }    
            
    }
    
    //prints number of coins
    printf("%d \n", coin);
    
    
}
