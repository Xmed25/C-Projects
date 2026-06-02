// Tinkoff Bank ATM (Russian Bank)

#include<stdio.h>

// Functions 
void displaying (float balance);

// =====================
int main(){
    float balance=0.0f;
    printf("++++++++++++++++\n");
    printf("Tinkoff Bank ATM\n");
    printf("++++++++++++++++\n\n");
// Calling
    displaying(balance);
    return 0;
}

void displaying (float balance){
    int dep=0;
    int withd=0;
    int choice=0;
    do{
        printf("Select an option:\n");
        printf("1.Check Balance\n");
        printf("2.Deposit Money\n");
        printf("3.Withdraw Money\n");
        printf("4.Exit\n");
        
        printf("Enter Your Choice: ");
        if(scanf("%d",&choice)!=1){
            printf("\n!!!!!!!!!!!!!!!!!!\n");
            printf("\nInvalid Choice !\n");
            printf("Please enter only a number\n\n");
            while(getchar()!='\n');
            continue;
        }
     
        switch(choice){
            case 1:
                printf("Your Current Balance is RUB %.2f \n\n",balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d",&dep);
                if(dep<0){
                    printf("Invalid amount\n");
                    continue;}
                else if (dep>0){
                    balance+=dep;
                    printf("Deposited Successfully\n\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d",&withd);
                if (withd<0){
                    printf("Invalid amount\n");
                    continue;}
                else if (withd<=balance){
                    balance-=withd;
                    printf("You withdraw %d\n",withd);
                    printf("Your Currenet Balance is RUB %.2f\n\n",balance);
                }
                else{
                    printf("Insufficient Balance\n");
                }
                break;
            case 4:
                printf("\nExit Succssuflly \n");
                break;
        }
    }while(choice!=4);
}
    
