#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N;
    char P;

    FILE *fp;

    fp = fopen("./2_new.txt", "w+");

    printf("Raws: \n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++){
            fprintf(fp, "%c", 'a'+j-1);
        }
            fprintf(fp, "\n");
    }
    
    fclose(fp);
    return 0;
}
