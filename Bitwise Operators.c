#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int a = 0, b = 0, c = 0;
    for (int i = 1; i <= n; i++){
        for (int j = i+1; j <= n; j++){
            (a < (i&j) && (i&j) < k) ? a = (i&j) : a;
            (b < (i|j) && (i|j) < k) ? b = (i|j) : b;
            (c < (i^j) && (i^j) < k) ? c = (i^j) : c;
        }
    }
    printf("%d\n%d\n%d\n", a, b, c);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
