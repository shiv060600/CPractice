#include <stdio.h>

int main()
{
    int char_freq[128] = {0};
    int c;
    while((c = getchar()) != EOF){
        ++char_freq[c]; /* or you can say char_freq[c] = char_freq*/
    }
    /* now we have an array of frequencies*/
    int i;
    for (i = 0 ; i < 128 ; ++i){
        if (char_freq[i] > 0){
            if (i < 127 && i >= 32){
                printf("freq of %c ",i);
            }
            else{
                printf("freq of %d ",i);
            }
            int j;
            for (j = 0 ; j < char_freq[i] ; ++j){
                putchar('#');
            }
            putchar('\n');
        }
    }
    return 0;
}
