//Given a sentence, , print each word of the sentence in a new line.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(int i=0;i<strlen(s);i++)
    printf((s[i]!=' ')?("%c",s[i]):"\n");
    
    return 0;
}
