#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_in_the_sentence(char *a, char *b);

int main()
{
    // Create a function which takes two strings as parameters
    // One string is actually a sentence and the other one is a word
    // It should return 1 if the given sentence contains the given word
    // and 0 otherwise
    // Try to erase small and uppercase sensitivity.
    //char *word = "apple";
    //char *sentence = "An apple a day keeps the doctor away.";
    // the output should be: 1
    //printf(is_in_sentence(&word, &sentence));

    char sentence[100];

    printf("Enter a sentence:\n");
    scanf("%[^\n]s",sentence);

    char word[20];

    printf("Enter a word:\n");
    scanf("%s", word);

    char* lower_sentence = strlwr(sentence);
    char* lower_word = strlwr(word);

    int result = is_in_the_sentence(sentence, word);
    printf("%d", result);

    return 0;
}

int is_in_the_sentence(char *a, char *b)
{
    if (strstr(a, b) != NULL)
        return 1;
    else
        return 0;
}