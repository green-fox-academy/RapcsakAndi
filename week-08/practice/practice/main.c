#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("Type a sentence:\n\n");
    char* string = malloc(256 * sizeof(char));
    scanf("%[^'\n']s",string);
    string = realloc(string, (strlen(string) + 1)* sizeof(char));

    for (int i = 0; i < strlen(string); ++i) {
        if(i == 0){
            strupr (&string[i]); // blDADFHAERGalbala
        }else
           strlwr (&string[i]);
    }
    printf("%s\n",string);



    free(string);

    return 0;
}