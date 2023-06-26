#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s,n,i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for(i=0;s[i]!='\0';i++)
    {
        if(*(s+i)==' ')
        printf("\n");
        else{
            printf("%c",*(s+i));
        }
        
        
        
        
    }
    
   free(s);
    
    return 0;
}
