#include <stdio.h>
/*
stdin
stdout
stderr
*/
int main (void)
{
    int a;
    fprintf(stdout,"Please input a value : \n");
    fscanf(stdin,"%d",&a);
    if (a < 0){
        fprintf(stderr, "The value must more than 0! \n");
        return 1;
    }else{
        fprintf(stdout,"You value is %d.\n", a);
    }
    return 0;
}
