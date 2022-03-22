#include<stdio.h>

float addition(int n){
    float sum = 0;
    float number;
    for(int i=1; i<=n; i++){
        printf("\nEnter value %d: ", i);
        scanf("%f", &number);
        sum=sum+number;
    }
    return sum;
}
float division(){
    float num1, num2;
    float div;
    printf("\n Enter the value to divide: ");
    scanf("%f", &num1);
    do {
        printf("\nEnter the divider (not 0):");
        scanf("%f", &num2);}
        while (num2==0);
    div=num1/num2;
    return div;
}
float multiplication(int n){
    float product = 1;
    float number;
    for(int i=1; i<=n; i++){
        printf("\nEnter value %d: ", i);
        scanf("%f", &number);
        product=product*number;
    }
    return product;
}
float subtraction(){
    float num1, num2;
    float sub;
    printf("\nEnter the first value: ");
    scanf("%f", &num1);
    printf("\nEnter value to subtract:");
    scanf("%f", &num2);
    sub=num1-num2;
    return sub;
}

int main(){
    int choice;
    float result;
    int num;
    char ans;
    head: 
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

    switch (choice)
    {
    case 1: {
        printf("\t\t\t    ADDITION OPERATION\n");
        printf("\t\t\t-----------------------------\n");
        do {
            do{
            printf("\nEnter the number of values to add: ");
            scanf("%d", &num);}
            while (num<2||num>20);
            result=addition(num);
            printf("\nThe results is %0.2f", result);
            do {
                printf("\nWould you like to do another addition? (Y/N)");
                scanf("%s",&ans);}
            while (ans!='Y'&&ans!='N');
            }
        while (ans=='Y');
    }
        if (ans=='N') 
            goto head;
        break;
    case 2: {
        
            printf("\t\t\t   DIVISION OPERATION\n");
            printf("\t\t\t----------------------------\n");
        do{
            result=division();
            printf("The results is %0.2f\n", result);
            do{
                printf("\nWould you like to do another division? (Y/N)");
                scanf("%s",&ans);}
            while (ans!='Y'&&ans!='N');
             }
        while (ans=='Y');
    }
        if (ans=='N') 
            goto head;
        break;
    case 3: {
        printf("\t\t\t   MULTIPLICATION OPERATION\n");
        printf("\t\t\t------------------------------\n");
        do{
        printf("\nEnter the number of values to multilize: ");
        scanf("%d", &num);
        result=multiplication(num);
        printf("\nThe results is %0.2f", result);
        do{
            printf("\nWould you like to do another multiplication? (Y/N)");
            scanf("%s",&ans);}
        while (ans!='Y'&&ans!='N');}
        while (ans=='Y');
    }
        if (ans=='N') 
            goto head;
        break;
    case 4: {
        printf("\t\t\t   SUBTRACTION OPERATION\n");
        printf("\t\t\t----------------------------\n");
        do{
        result= subtraction();
        printf("\nThe results is %0.2f", result);
        do{
            printf("\nWould you like to do another subtraction? (Y/N)");
            scanf("%s",&ans);}
        while (ans!='Y'&&ans!='N');}
        while (ans=='Y');
    }
        if (ans=='N') 
            goto head;
        break;
    default:
        break;
    }
    
}
