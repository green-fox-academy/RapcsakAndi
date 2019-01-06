#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*int is_in_sentence(char* sentence, char * word);

int main()
{
    // Create a function which takes two strings as parameters
    // One string is actually a sentence and the other one is a word
    // It should return the index of the word in the sentence and 0 otherwise
    // Try to erase small and uppercase sensitivity.
    // the output should be: 6


    char sentence[100] = "An apple a day keeps the doctor away.";
    char word[20] = "doctor";

    int result = is_in_sentence(sentence, word);
    printf("%d", result);

    return 0;
}

int is_in_sentence(char* sentence, char * word){
    int index_of_the_word = 0;
    const char s[2] = " ";
    char *token;
    char *new_words[10];

    token = strtok(sentence, s);

    int i = 0;

    while( token != NULL ) {
        new_words[i] = token;
        token = strtok(NULL, s);
        i++;
    }
    for (int j = 0; j <i; ++j) {
        if (strcmp(word, new_words[j]) == 0) {
            index_of_the_word = j;
        }
    }
    return index_of_the_word;
}*/
int is_in_sentence(char *word, char* sentence);

int main()
{
    // Create a function which takes two strings as parameters
    // One string is actually a sentence and the other one is a word
    // It should return the index of the word in the sentence and 0 otherwise
    // Try to erase small and uppercase sensitivity.
    // the output should be: 6


    char *word = "doctor";
    char *sentence = "An apple a day keeps the doctor away.";

    // the output should be: 6
    printf("%d", is_in_sentence(word, sentence));

    return 0;
}

int is_in_sentence(char *word, char* sentence){
    int index_of_the_word = 0;
    int j = 0;

    for (int i = 0; sentence[i] != '\0'; ++i){
       if(sentence[i] == ' ') {
            index_of_the_word++;
       }
       if(sentence[i] != word[j]){
            j = 0;
       }
       else {
            j++;
            if(word[j] == '\0'){
                return index_of_the_word;
            }
       }
    }
    return 0;
}