#include<stdio.h>

int main(){
    //1 a. declare and initialize an array num[10] of type int, such that the value at index i is i+1.
int array1[10];
printf("Value of the array is: \n");
for(int i=0; i<10; i++){
    array1[i]=i+1;
    printf("%d\n", array1[i]);
}
//b.  Modify your code to replace the values in the array with their square.
printf("The new value of the array is: \n");
for (int i=0; i<10; i++){
    array1[i]=array1[i]*array1[i];
    printf("%d\n", array1[i]);
}
//c. Return the sum of values in the array
int sum=0;
for (int i=0; i<10; i++){
    sum=sum+array1[i];
}
printf("Sum of values in the array is %d\n", sum);
//d:  linearSearch()
int element1;
int count1=0;
printf("please enter an element: ");
scanf("%d", &element1);
for (int i=0; i<10; i++){
    if (array1[i]==element1){
        printf("index %d", i);
        count1++;
    }}
if (count1=0)
    printf("-1"); 
return 0;
}

