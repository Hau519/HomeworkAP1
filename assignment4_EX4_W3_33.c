#include<stdio.h>   

int main(){

// Write a program in C to find the majority element of an array

int no_of_elements;
int majority=0;

printf("Enter number of elements in the array please!\n");
scanf("%d", &no_of_elements);
int array[no_of_elements];
int count[no_of_elements];
for(int i=0; i<no_of_elements; i++){
    printf("Enter value %d of the array please!\n", i);
    scanf("%d", &array[i]);
}

for(int i=0; i<no_of_elements; i++){
    count[i]=1;
}

for(int i=0; i<no_of_elements; i++){
    for(int j=i+1; j<no_of_elements; j++ ){
        if (array[i]==array[j]){
            count[i]++;
        }
    }
}



for(int i=0; i<no_of_elements; i++){
    if (count[i]>no_of_elements/2)
        majority=array[i];
    }

if(majority==0)
    printf("There is no majority element in this array");
else printf("The majority element of this array is %d", majority);

return 0;
}