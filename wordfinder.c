#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char letter;
int position;
char word[50];

//int letterFinder(char word[50]);

int main(){

    printf("Enter your word: ");
    fgets(word, 50, stdin);

    printf("Enter letter to find: ");
    scanf(" %c", &letter);
    
    letterFinder(word);

    return 0;
}

int letterFinder(char word[50]){
    for (int i = 0; i < strlen(word); i++)
    {
        if (letter == word[i])
        {
            position = i+1;
            printf("%c is in %d position from %s word\n", letter, position, word);
        }
        
    }
    return 0;
}




