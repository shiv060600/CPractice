#include <stdio.h>
#define LIM 1000



int main () 
{
    int c , i = 0;
    int condition = 1;
    int line[LIM];
    while((c = getchar()) != EOF)
    {
        if(i >= LIM){
            condition = 0;
        }
        else if(c == '\n'){
            condition = 0;
        }
        if (condition){
            line[i] = c;
        }
        ++i;
    }
    return 0;
}
