#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min, max, newMin, newMax;
    printf("Input your range(Example: 1-100) : ");
    scanf("%d-%d",&min,&max);
    if(min>max){
        newMin = max;
        newMax = min;
    }
    else{
        newMax = max;
        newMin = min;
    }
    printf("Range : %d-%d",newMin, newMax);
}
