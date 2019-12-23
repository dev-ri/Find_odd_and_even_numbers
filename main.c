#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min, max, newMin, newMax;
    char ans;

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
    //Now checking what user needs, even numbers or odd numbers!
    printf("Odd or Even? (o/e) ");
    scanf("%s",&ans);
    if(ans == 'o' | ans == 'O'){
        if(newMin%2 == 0){
            newMin = newMin + 1;
        }
        printf("%d-%d",newMin,newMax);
    }
    else if(ans == 'e' | ans == 'E'){
        if(newMin%2 == 1){
            newMin = newMin + 1;
        }
        printf("%d-%d",newMin,newMax);
    }
}
