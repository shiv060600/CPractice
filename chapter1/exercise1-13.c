#include <stdio.h>

int main()
{
    int c,count = 0 ,i;

    while((c = getchar()) != EOF) {
        if (c != ' ' && c !='\t' && c != '\n'){
            ++count;
        } 
        else{
            for (i = 0 ; i < count ; ++i){
                putchar('+');
            }
            putchar('\n');
            count = 0;
        }
        
    }
    return 0;
}
