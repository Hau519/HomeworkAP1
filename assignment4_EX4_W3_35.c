#include<stdio.h>   


int max(int a, int b);

int main(){

int no_of_elements;
int sum=0;
int sum_sub = 0;
int maximum;

printf("Enter number of elements in the array please!\n");
scanf("%d", &no_of_elements);
int array[no_of_elements];
for(int i=0; i<no_of_elements; i++){
    printf("Enter value %d of the array please!\n", i);
    scanf("%d", &array[i]);
    sum=sum+array[i];
}

maximum=sum;

for(int i=0; i<no_of_elements; i++){
    sum_sub=array[i];
    maximum=max(maximum, sum_sub);
    for(int j=i+1; j<no_of_elements;j++){
        sum_sub=sum_sub+array[j];
        maximum=max(maximum, sum_sub);
    }
}
printf("maximum is %d", maximum);

return 0;
}

int max(int a, int b){
     if (a>b)
        return a;
    return b;
}