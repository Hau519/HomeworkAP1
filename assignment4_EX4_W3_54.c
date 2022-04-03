#include<stdio.h>   

int main(){

//  Write a program in C to sort an array of 0s, 1s and 2s

int no_of_elements;
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
printf("The sorted array is:\n");
for(int i=0; i<no_of_elements; i++){
   printf("%d ", array[i]);
    }


return 0;
}
