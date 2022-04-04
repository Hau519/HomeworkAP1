#include<stdio.h>   

void swap(int array[], int n);

int main(){

int no_of_elements;

printf("Enter number of elements in the array please!\n");
scanf("%d", &no_of_elements);

int array[no_of_elements];

for(int i=0; i<no_of_elements; i++){
    printf("Enter value %d of the array please!\n", i);
    scanf("%d", &array[i]);
}
swap(array, no_of_elements);


return 0;
}

void swap(int array[], int n){
    int index1, index2;
    int temp;
    printf("please enter the indexs of the two elements that you wanna swap\n");
    scanf("%d %d", &index1, &index2);
    
    temp=array[index1];
    array[index1]=array[index2];
    array[index2]=temp;
    printf("New array is: \n");
    for(int i=0; i<n;  i++){
        printf("%d", array[i]);
    }
}