#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    /*There are some mistakes in the sentence below: some words start with capital letter, despite the fact
    that only the initial word should start with a capital letter.
    Print out the wrong words.
    Your program works as expected if you see this text on the console:

    Not
    Many

    Note that, strtok() is not neccessary to use and not always the best solution.*/

    char text[] = "He said he was Not there yesterday; however, Many people saw him there.";

    char * text_result;
    for (int i = 0; i < strlen(text); ++i) {
        if(isupper(text[i]) && i != 0){
            for (i; i < strlen(text); ++i) {
                if (text[i] == ' '){
                    printf("\n");
                    break;
                }
                printf("%c", text[i]);
            }
        }

    }


    return 0;
}