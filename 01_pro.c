#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int min= 1;
    int max=100;
    int rand_num=(rand()%(max-min+1)+min);
    int a ;int guess=0;
    while(a!=rand_num){
    printf("\nenter the number");
    scanf("%d",&a);
    guess++;
    if (a<rand_num){
        printf(" Guess upper value ");
    
    }
    else if(a>rand_num){
        printf("Guess lower value");
    }
}
if (a==rand_num){
    printf("you guess  correct number in %d time",guess);
}
return 0;
}