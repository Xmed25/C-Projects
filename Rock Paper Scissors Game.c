// Rock and paper game 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// Functions 
    int ComputerChoice();
    int UserChoice();
    void winner(int pchoice,int uchoice);
int main(){
// Objects
    printf("+++++++++++++++++++++++++++++++++++++\n");
    printf("|Welcome to Rock Paper Scissors Game|\n");
    printf("+++++++++++++++++++++++++++++++++++++\n");
    srand(time(NULL));
    int uchoice=UserChoice();
    int pchoice=ComputerChoice();
    winner( uchoice, pchoice);
    printf("=================");
    return 0;
}

// Functions
int ComputerChoice(){
    int num=(rand()%3) + 1;
    printf("\n=================\n");
    printf("Computer Chose: ");
    switch(num){
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3 :
            printf("Scissors\n");
            break;
    }
    return num;
}
int UserChoice(){
    int choice=0;
    do{
        printf("Choose an Option\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter Your Option: ");
        scanf("%d",&choice);
    }while(choice < 1 || choice>3);
    
    return choice;
}
void winner(int uchoice,int pchoice){
    if(uchoice==pchoice){
        printf("Draw !\n");
    }
    else if(uchoice==1 && pchoice==3 || uchoice==2 && pchoice==1 || uchoice==3 && pchoice==2){
        printf("YOU WIN !\n");
    }
    else{
        printf("You Lose !\n");
    }
}
