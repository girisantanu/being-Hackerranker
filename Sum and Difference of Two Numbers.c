#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,m;
    float f,d;
    
    scanf("%d %d" ,&n,&m);
    scanf("%f %f",&f,&d);
    
    printf("%d %d\n",(n+m),(n-m));
    printf("%0.1f %0.1f\n",(f+d),(f-d));
    
   
    
    return 0;
}
