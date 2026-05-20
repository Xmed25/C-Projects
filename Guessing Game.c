#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int guess=0;
    int tries=0;
    int max=10;
    int answer=rand() % max + 1 ;
    
    printf("***Welcome to Number Guessing Game*** \n\n");
   do{
    printf("Guess a number between (0-%d):",max);
    if(scanf("%d",&guess)!=1){
        printf("Please guess only a number\n");
        while(getchar()!='\n');
        continue;
    }
    
    tries++;
    
    if(guess>answer){
        printf("TOO HIGH !\n");
    }
    else if (guess<answer){
        printf("TOO LOW !\n");
    }

   }while(guess!=answer);
   
    printf("Correct !");
    printf("the answer is %d\n",answer);
    printf("it took you %d tries",tries);
   
    return 0 ;
}