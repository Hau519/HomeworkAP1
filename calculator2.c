/***************************************************************
 * Vu Thi Hau
 * AP/Fode's calculator using function
 * 
 * *********************************************************/   
#include<stdio.h>

void addition();
void division();
void multiplication();
void subtraction();

char ans;


int main(){
    int choice;
    do{
    printf("\t\t\t    Numeric calculation\n");
    do{
        printf("\t\t\t Main menu operators choice\n");
        printf("\t\t\t-----------------------------\n\n");
        printf("1 - ADDITION");
        printf("\n2 - DIVISION");
        printf("\n3 - MULTIPLICATION");
        printf("\n4 - SUBTRACTION");
        printf("\n5 - QUIT");
        printf("\nMake your choice (1-5): ");
        scanf("%d", &choice);}
    while (choice <1|| choice >5);
    switch (choice){
    case 1: 
        addition();
        break;
    case 2: 
        division();
        break;
    case 3: 
        multiplication();
        break;
    case 4: 
        subtraction();
        break; 
    default:
        break;}
    }
    while (ans='N');
return 0;
}

void addition(){
    float sum = 0;
    float num, number;
    printf("\t\t\t    ADDITION OPERATION\n");
    printf("\t\t\t-----------------------------\n");
    do {
        do{
            fflush(stdin);
            printf("\nEnter the number of values to add: ");
            scanf("%f", &num);}
            while (num<2||num>20);
        for(int i=1; i<=num; i++){
            printf("\nEnter value %d: ", i);
            scanf("%f", &number);
            sum=sum+number; }
        printf("\nThe results is %0.2f", sum);
        do {
            fflush(stdin);
            printf("\nWould you like to do another addition? (Y/N)");
            scanf("%c",&ans);}
        while (ans!='Y'&&ans!='N');
            }
        while (ans=='Y');
}
void division(){
    float num1, num2;
    float div;
    printf("\t\t\t   DIVISION OPERATION\n");
    printf("\t\t\t----------------------------\n");
    do{
        printf("\n Enter the value to divide: ");
        scanf("%f", &num1);
        do {
            printf("\nEnter the divider (not 0):");
            scanf("%f", &num2);}
        while (num2==0);
        div=num1/num2;
        printf("The results is %0.2f\n", div);
        do{
            printf("\nWould you like to do another division? (Y/N)");
            scanf("%c",&ans);}
        while (ans!='Y'&&ans!='N');
             }
    while (ans=='Y');
    }
void multiplication(){
    float product = 1;
    float number, num;
    printf("\t\t\t   MULTIPLICATION OPERATION\n");
    printf("\t\t\t------------------------------\n");
    do{
        do{
            printf("\nEnter the number of values to multilize: ");
            scanf("%f", &num);}
        while(num<2||num>20);
        for(int i=1; i<=num; i++){
            printf("\nEnter value %d: ", i);
            scanf("%f", &number);
            product=product*number;}
        do{
            printf("\nWould you like to do another multiplication? (Y/N)");
            scanf("%c",&ans);}
        while (ans!='Y'&&ans!='N');}
        while (ans=='Y');
    }

void subtraction(){
    float num1, num2;
    float sub;
    printf("\t\t\t   SUBTRACTION OPERATION\n");
    printf("\t\t\t----------------------------\n");
    do{
        printf("\nEnter the first value: ");
        scanf("%f", &num1);
        printf("\nEnter value to subtract:");
        scanf("%f", &num2);
        sub=num1-num2;
        do{
        printf("\nWould you like to do another subtraction? (Y/N)");
        scanf("%c",&ans);}
        while (ans!='Y'&&ans!='N');
    } while (ans=='Y'); }
