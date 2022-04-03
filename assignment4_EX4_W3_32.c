#include<stdio.h>

int main(){
//32. Write a program in C to find a pair with given sum in the array
int no_of_elements;
int sum;

printf("Enter number of elements in the array please!\n");
scanf("%d", &no_of_elements);
int array[no_of_elements];
for(int i=0; i<no_of_elements; i++){
    printf("Enter value %d of the array please!\n", i);
    scanf("%d", &array[i]);
}

printf("Enter the sum please\n");
scanf("%d", &sum);

for(int i=0; i<no_of_elements; i++){
    for(int j=no_of_elements-1; j>=0; j--){
        if (array[j]==sum-array[i] && i!=j){
            printf("Pair of elements that make the sum is %d and %d\n", i, j);
            goto end;
        }
    }
}

end:

return 0;
}