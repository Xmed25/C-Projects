//Real Madrid Club Management System


#include<stdio.h>
#include<string.h>


typedef struct{
    int id;
    char names[50];
    int age;
    char roles[50];
    char nat[50];
}Employees;

void displaying(Employees employee);
void info(Employees employee[], int size);

int main(){
    Employees employee[]={
        //Players
        
        {1,"Courtois",34,"Keeper","Belgium"},
        
        {2,"Trent Alexander-Arnold",26,"Right-Back","England"},
        {3,"Álvaro Carreras",23,"Left-Back","Spain"},
        {4,"Éder Militão",28,"Centre-Back","Brazil"},
        {5,"Dean Huijsen",20,"Centre-Back","Spain"},

        {6,"Aurélien Tchouaméni",26,"Defensive Midfield","France"},
        {7,"Federico Valverde",28,"Central Midfield","Uruguay"},
        {8,"Jude Bellingham",22,"Attacking midfield","England"},
        {9,"Arda Güler",20,"Attacking Midfield","Turkey"},
        
        {10,"Vinicius Junior",25,"Left-Winger","Brazil"},
        {11,"Mbappe",26,"Center-Forward","France"},
        
    };
    int size=sizeof(employee)/sizeof(employee[0]);
    info(employee, size);
    
    
    return 0;
}
void info(Employees employee[],int size){
    int choice=0;
    do{
        
        printf("------------- Real Madrid ♚ -------------\n\n");
       
        printf("1.Home\n");
        printf("2.Transfers\n");
        printf("3.Squad\n");
        printf("4.Results\n");
        printf("5.Fixtures\n");
        printf("6.Exit\n");
        
        printf("Enter Choice: ");
        if(scanf("%d",&choice)!=1){
            printf("Error\n");
            printf("Please try again !");
            while(getchar()!='\n');
            continue;
        };
        switch(choice){
            case 1:
                printf("Squad size: 29\n");
                printf("Average age: 25.8\n");
                printf("Current transfer record: €-165.50m\n");
                printf("Stadium: Santiago Bernabéu  83.186 Seats\n");
                printf("National team players: 18\n");
                printf("------------------\n");
                printf("15x UEFA Champions League winner\n");
                printf("36x Spanish Champion\n");
                printf("6x UEFA Supercup Winner\n");
                printf("2x UEFA Cup Winner\n");
                printf("1x FIFA Intercontinental Cup Winner\n");
                printf("20x Spanish Cup winner\n");
                printf("13x Spanish Super Cup winner\n");
                printf("3x Intercontinental Cup Winner\n");
                printf("1x Copa Eva Duarte Winner\n");
                break;
            
            case 2:
                printf("Real Madrid Transfers\n");
                printf("Empty\n");
                printf("\n");
                break;
            
            case 3:
                printf("Real Madrid Squad\n");
                for(int x=0;x<size;x++){
                    displaying(employee[x]);
                }
                break;
            case 4:
                printf("Last Match\n");
                printf("Real Madrid 4 - 2 Athletic Club\n");
                printf("\n");
                break;
            
            case 5:
                printf("Real Madrid Fixtures\n");
                printf("Empty\n");
                printf("\n");
                break;
            case 6:
                printf("Exit Successuflly !\n");
                break;
            
            default:
                printf("Invalid Choice !\n");
                printf("\n");
                break;
        }
    }while(choice>6||choice<0);
    
    
};
void displaying(Employees employee){
    printf("ID:%d\n",employee.id);
    printf("Name:%s\n",employee.names);
    printf("Age:%d\n",employee.age);
    printf("Role:%s\n",employee.roles);
    printf("Nationality:%s\n",employee.nat);
    printf("----------\n");
}
