#include <stdio.h>
#include <math.h>
#define LIMIT 1000


int get_line(char line[]);
int convert_from_hex(char line[] , int len);
int power(int base, int exponent);


int main(){
    int c , len;
    char line[LIMIT];
    while ((len = get_line(line)) > 0){
        int res = convert_from_hex(line,len);
        printf("integer is %d\n",res);
    }
    return 0;
}

int get_line(char line[]){
    int i,c,len = 0;
    for(i = 0; i < LIMIT - 2 && (c = getchar())!= EOF && c != '\n'; ++i){
        line[i] = c;
        ++len;
    }
    if(c == '\n'){
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    return len;
};

int convert_from_hex(char line[] , int len){
    int i , sum = 0, value,start = 2,digit_pos = 0;
    for(i = len -1; i >= start; --i){
        int hexchar = line[i];
        if(hexchar != '0' && hexchar != 'x'){
            if(hexchar >= '0' && hexchar <= '9'){
                value = hexchar - '0';
            }else if (hexchar >= 'A' && hexchar <= 'F'){
                value = hexchar - 'A' + 10;
            }else if (hexchar >= 'a' && hexchar <= 'f'){
                value = hexchar - 'a' + 10;
            }
        }
        sum += value * power(16,digit_pos);
        digit_pos++;
    }
    return sum;
};

int power(int base, int exponent){
    int result = 1,i;
    for(i = 0; i < exponent; ++i){
        result *= base;
    }
    return result;
};




