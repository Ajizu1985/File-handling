#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ptr;
    int i, j, N, K;
    char str[100];
    
    N=10; K=10;

    ptr = fopen("./1_new.txt", "w+");
    
    for(i=0; i<N; i++){
        for(j=0; j<K; j++){
        fprintf(ptr, "*");
        }
        fprintf(ptr, "\n");
    }
  
    fclose(ptr);

    return 0;
}
