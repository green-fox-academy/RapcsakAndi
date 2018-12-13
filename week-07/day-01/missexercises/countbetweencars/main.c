#include <stdio.h>
#include <string.h>

int main()
{
    char *buff = "this is a test string";

    char subbuff[5];
    memcpy( subbuff, &buff[10], 4 );
    subbuff[4] = '\0';

    printf("%s", subbuff);

    char s[] = "THESTRINGHASNOSPACES";
    size_t i, slen = strlen(s);
    for (i = 0; i < slen; i += 4) {
        printf("%.4s\n", s + i);
    }

    const char haystack[20] = "TutorialsPoint";
    const char needle[10] = "Point";
    char *ret;

    ret = strstr(haystack, needle);

    printf("The substring is: %s\n", ret);
    return 0;
}