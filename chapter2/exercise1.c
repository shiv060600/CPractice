#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    long zero = 0;
    printf("range of char is %d to %d \n",CHAR_MIN , CHAR_MAX);
    printf("range of short int is %d to %d \n",SHRT_MAX,SHRT_MIN);
    printf("range of signed int is %d to %d \n ", INT_MIN, INT_MAX);
    printf("range of unsigned int is %d to %d \n",0, UINT_MAX);
    printf("range of signed long is %ld to %ld \n",LONG_MIN, LONG_MAX);
    printf("range of unsigned long is %ld to %lu \n",zero, ULONG_MAX);
    printf("range of float is %f to %f\n",0.0 ,FLT_MAX);

    return 0;
}
