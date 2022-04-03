#include<stdio.h>
#include<stdbool.h>

void isPalindrome(char arrayA[], char ararayB[], int sizeA, int sizeB);

int main(){

// a. Write a program that reads characters in an array A and prints them in reverse. 
char no_of_elements;
printf("enter the number of element please!\n");
scanf("%d", &no_of_elements);
char arrayA[no_of_elements];
for(int i=0; i<no_of_elements; i++){
    printf("enter the value of element %d please: \n", i);
    scanf(" %c", &arrayA[i]);
}
for (int j=no_of_elements-1; j>=0; j--){
    printf(" %c", arrayA[j]);}
    printf("\n");
// b. Modify the program to copy the content of array A, in reverse order, in an array B. Display the content of both arrays. 
char arrayB[no_of_elements];
for (int i=0; i<no_of_elements; i++){
    arrayB[i]=arrayA[no_of_elements-1-i];
    printf(" %c", arrayB[i]);
}
//c. Read the sequence of characters in both arrays from [0] to [n-1]. Is it the same? 
int count=0;
for(int i=0; i<no_of_elements; i++){
    if(arrayA[i]!=arrayB[i])
        count++;
}
if (count==0)
    printf("\nThe sequence of characters in both arrays is the same\n");
else printf("The sequence of characters in both arrays is not the same\n");

// d. Use part (c) to define a function called isPalindrome(), that takes 4 parameters (2 arrays and 2 sizes), and returns true if the word is a palindrome and false otherwise. 
printf("Using function to see if the two array is palindrom\n");
isPalindrome(arrayA, arrayB, no_of_elements, no_of_elements);

return 0;
}

void isPalindrome(char arrayA[], char arrayB[], int sizeA, int sizeB){
/* printf("Please enter the number of element of 1st array: \n");
scanf("%d", &sizeA);
for(int i=0; i<sizeA; i++){
    printf("Enter the %d value of the 1st Array please: \n");
    scanf(" %c", &arrayA[i]);
}
printf("Please enter the number of element of 2nd array: \n");
scanf("%d", &sizeB);
for(int i=0; i<sizeB; i++){
    printf("Enter the %d value of the 2nd Array please: \n");
    scanf(" %c", &arrayB[i]);
}
 */
int count=0;
if (sizeA!=sizeB)
    count=1;
else{   
    for(int i=0; i<sizeA; i++)
        if(arrayA[i]!=arrayB[i])
            count++;
}
if (count==0)
    printf("Yes! The two arrays are palindrome\n");
else printf("No! The two arrays are not palindrome\n");
}
