#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int choice;
int tries;
int answer;

void displaying();
void processing();

// ==============================
int main() {
    srand(time(NULL));
    answer=rand()%10 +1;
    displaying(&choice);
    processing(answer);
    
    return 0;
}

void displaying(){
    printf("=======================\n");
    printf("Welcome to guess Game !\n");
    printf("=======================\n");
    
    
    
    printf("1.Play\n");
    printf("2.Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
}

void processing(){
    int guess;
     switch(choice){
            case 1:
                do{
                    printf("Guess a number between 1-10 : ");
                    if(scanf("%d",&guess)!=1){
                        printf("Error !\n");
                        printf("Please Enter a number\n");
                        while(getchar()!='\n');
                        continue;
                    }
                    if(guess>10 || guess<1 ){
                        printf("Please Enter a number between 1-10 !\n");
                        continue;
                    }
                    
                    tries++;
                    if(guess==answer){
                        printf("Correct answer!\n");
                        printf("Computer Choice was %d\n",answer);
                        printf("Number of tries: %d\n", tries);
                        break;
                    }
                    
                    else if (guess>answer){
                        printf("Too High !\n");
                        continue;
                    }
                    else if (guess<answer){
                        printf("Too Low !\n");
                        continue;
                    }
                    break;
                    
                }while(guess!=answer);
                break;
                
            case 2:
                printf("\nExit Successuflly !\n");
                break;
            
            default:
                printf("Invalid Choice !\n");
        }   
    
}
    

