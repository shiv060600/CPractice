#include <stdio.h>
#define MAXLEN 1000

int get_line(char line[]);
void reverse_line(char line[],int len);

int main()
{
    int len;
    char line[MAXLEN];
    while((len = get_line(line)) > 0){
        reverse_line(line,len);
        printf("reversed line is: %s\n",line);
    }

    return 0;
}

int get_line(char line[])
{
    int c , i , len = 0;

    for(i = 0; i < MAXLEN - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        line[i] = c;
        ++len;
    }
    if (c == '\n'){
        line[i] = c;
        ++len;
        ++i;
    }
    line[i] = '\0';
    return len;
}

void reverse_line(char line[],int len){
    int l = 0 , r = len - 1;
    while(l < r){
        int temp = line[r];
        line[r] = line[l];
        line[l] = temp;
        ++l;
        --r;
    }
}
