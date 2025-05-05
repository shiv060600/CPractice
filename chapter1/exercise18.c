#include <stdio.h>

#define ISBLANK 1
#define MAXLEN 1000

int get_line(char line[]);

int main()
{
    int len;
    char line[MAXLEN];
    
    while((len = get_line(line)) > 0){
        if (len > 0 && line[0] != '\n'){
            printf("%s\n",line);
        }
    }
    return 0;
}

int get_line(char line[])
{
    int i, c;
    int last_non_blank = -1;
    
    for(i = 0; i < MAXLEN - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
        if (c != ' ' && c != '\t') {
            last_non_blank = i;  
        }
    }
    
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    
    int end_pos = (last_non_blank == -1) ? 0 : last_non_blank + 1;
    if (c == '\n') {
        line[end_pos] = '\n';
        end_pos++;
    }
    
    line[end_pos] = '\0';
    return end_pos;
}


