#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    
    char ch,s[100],sen[100],g;
    
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("%c",&g);
    scanf("%[^\n]s",sen);
    printf("%c\n%s\n%s",ch,s,sen);
    

    return 0;
}