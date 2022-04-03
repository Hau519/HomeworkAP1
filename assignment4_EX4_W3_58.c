#include<stdio.h>   

int main(){

// Write a program in C to move all zeroes to the end of a given array

int no_of_elements;

printf("Enter number of elements in the array please!\n");
scanf("%d", &no_of_elements);
int array[no_of_elements];
int sorted_array[no_of_elements];
int front=0, end=no_of_elements-1;


for(int i=0; i<no_of_elements; i++){
    printf("Enter value %d of the array please!\n", i);
    scanf("%d", &array[i]);
}

for(int i=0; i<no_of_elements; i++){
        if(array[i]==0){
            sorted_array[end]=array[i];
            end--;}
        else {
            sorted_array[front]=array[i];
            front++;
        }
    }
    
printf("The sorted array is:\n");
for(int i=0; i<no_of_elements; i++){
   printf("%d ", sorted_array[i]);
    }


return 0;
}