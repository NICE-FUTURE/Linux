#include <stdio.h>
int main (void)
{
    char name[12];
    printf("Please enter your name: ");
    scanf ("%s",name);
    printf("Hello %s!!!\n",name);
    return 0;
}
