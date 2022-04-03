#include<stdio.h>   

int main(){

//  Write a program in C to find the missing number from a given array. There are no duplicates in list.
// sorted the elements -> look for the missing number

int no_of_elements;
int min;
int temp;

printf("Enter number of elements in the array please!\n");
scanf("%d", &no_of_elements);
int array[no_of_elements];
for(int i=0; i<no_of_elements; i++){
    printf("Enter value %d of the array please!\n", i);
    scanf("%d", &array[i]);
}
for(int i=0; i<no_of_elements; i++){
    for(int j=i+1; j<no_of_elements; j++){
        if(array[i]>array[j]){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
}

for(int i=0; i<no_of_elements; i++){
    if (array[i+1]!=array[i]+1){
        printf("The missing value is %d", array[i]+1);
        break;
    }
}

return 0;
}
