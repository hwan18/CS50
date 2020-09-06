#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, s, d, m; //declare variables
  
    do //loop to check user input is correct, if not asks again
    {
        height = get_int("Height: ");//gets height from user
        s = height - 1; //
        d = height - 1; //
        m = height - 1; //
    }
    while (1 > height || height > 8);  //goes back if its not between 1-8
   
    //pyramid creation
    for (int i = 0; i < height; i++) //vertical hash iteration
    {
        for (int p = height - m; p < height; p++) //prints spaces horizontally
        {
            printf(" "); //prints the spaces before #
        }
         
        m = m - 1; //sets amount of spaces it prints on each line/loop. decreasing because its changes after each loop to make it a pyramid
     
        for (int j = s; j < height; j++) //hortizontal hash interation
        {
            printf("#"); //prints hashes
        }
         
        s = s - 1; //increases amount of hashes
   
        printf("\n");
     
    }
    
}
