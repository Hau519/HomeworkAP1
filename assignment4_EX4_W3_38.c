#include<stdio.h>   

int main(){

//38. Write a program in C to merge one sorted array into another sorted array

int no_of_elements1, no_of_elements2;
int temp;

printf("Enter number of elements in the 1st array please!\n");
scanf("%d", &no_of_elements1);
int array1[no_of_elements1];
for(int i=0; i<no_of_elements1; i++){
    printf("Enter value %d of the 1st array please!\n", i);
    scanf("%d", &array1[i]);
}
printf("Enter number of elements in the 2nd array please!\n");
scanf("%d", &no_of_elements2);
int array2[no_of_elements2];
for(int i=0; i<no_of_elements2; i++){
    printf("Enter value %d of the 2nd array please!\n", i);
    scanf("%d", &array2[i]);
}
int array_merge[no_of_elements1+no_of_elements2];
for(int i=0; i<no_of_elements1; i++){
    array_merge[i]=array1[i];
}

for(int i=0; i<no_of_elements2; i++){
    array_merge[i+no_of_elements1]=array2[i];
}

for(int i=0; i<no_of_elements1+no_of_elements1; i++){
    for(int j=i+1; j<no_of_elements1+no_of_elements1; j++){
        if(array_merge[i]>array_merge[j]){
            temp=array_merge[i];
            array_merge[i]=array_merge[j];
            array_merge[j]=temp;
        }
    }
}

printf("New sorted array is: \n");
for(int i=0; i<no_of_elements2+no_of_elements1; i++){
   printf("%d\n", array_merge[i]);}

return 0;
}