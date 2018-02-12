#include <stdio.h>
#include <unistd.h>
int main (void)
{
    int i, j;
    for (i=0; i<=100; i++)
    {
        for (j=0; j<=i/2; j++){
            printf("%c", '-');
        }
        putchar('>');
        for (j=i/2+1; j<=50; j++){
            printf(" ");
        }
        printf("%d%%\r", i);
        sleep(1);
    }
    putchar('\n');
    return 0;
}
