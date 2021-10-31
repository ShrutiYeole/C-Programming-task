#include <stdio.h>
int main(){
    int i, j;
    int n = 6;
    
    // Run this for loop n times
    for (i = 0; i < n; i++)
    {
        // Print (i+1) stars
        for (j = 0; j < i+1; j++)
        {
            printf("01");
        }
        printf("\n");
    }
    return 0;
}
