#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int keyMod;
int key;

string inputString;

int main(int argc, string argv[])
{
    int atoi(const char *str);
    void exit(int status);

    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }

    //printf("Sucess %s", argv[1]);
    int commandKey = atoi(argv[1]);

    /*    if (commandKey == 0){
            printf("Usage: ./caesar key");
            return 1;
          }*/

    string checkString = argv[1];
    for (int i = 0; i < strlen(checkString); i++)
    {
        if (isdigit(checkString[i]) == 0)
        {
            printf("Usage: ./caesar key");
            return 1;
        }
    }
    /*if (argv[1].equals(" ")){
         printf("Usage: ./caesar key");
        exit(1);
    }*/
    /*else if (argc ==1){
        printf("Usage: ./caesar key");
        exit(1);
    }*/

    key = commandKey;

    //int inputKey();
    int upperRotation;
    int lowerRotation;

    if (key > 0 && key < 27)
    {
        keyMod = key;
    }
    else if (key > 26)
    {
        keyMod = key % 26;
    }

    int check;
    /*    do{*/
    //check=inputKey();

    /* }while(check==1);{
    }*/
    // c takes string as char array i think, also have to have resoultion for ascii code increment to go back to a or A
    inputString = get_string("plaintext: ");
    char inputText[strlen(inputString) + 1];
    int newText[strlen(inputString)];
    char resultText[strlen(inputString) + 1];

    for (int j = 0; j < strlen(inputString); j++)
    {
        inputText[j] = (char)inputString[j];
    }
    inputText[strlen(inputString)] = '\0';

    for (int i = 0; i < strlen(inputText); i++)
    {
        newText[i] = (inputText[i] + (keyMod));
        if (inputText[i] >= 65 && inputText[i] <= 90)
        {
            if (newText[i] > 90)
            {
                int rotationsOver = (int)newText[i];
                upperRotation = rotationsOver - 90;
                newText[i] = (64 + upperRotation);
            }//else{
            //     newText[i]=(inputText[i]+(keyMod));
            // }
        }
        else if (inputText[i] >= 97 && inputText[i] <= 122)
        {
            if (newText[i] > 122)
            {
                int rotationsOver2 = (int)newText[i];
                lowerRotation = rotationsOver2 - 90;
                newText[i] = (64 + lowerRotation);
            }//else{
            //     newText[i]=(inputText[i]+(keyMod));

        }
        else
        {
            newText[i] = inputText[i];
        }
    }

    /*  string finalText[strlen(newText)];
    for (int k = 0; k<strlen(newText);k++){
    finalText[k] = newText[k];
    }*/

    for (int z = 0; z < sizeof(newText); z++)
    {
        resultText[z] = (char)newText[z];
    }
    resultText[strlen(inputString)] = '\0';
    printf("ciphertext: %s\n", resultText);
}

/*   int inputKey(){
    int result=0;
    if (key > 0 && key < 27) {
        keyMod=key;
    }else if(key>26){
        keyMod=key%26;
    }else{
        result=1;
    }
       return result;
   }*/
