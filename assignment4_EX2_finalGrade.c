#include<stdio.h>
#include<math.h>

void getMax(float array[], int n);
void getMin(float array[], int n);
void getAvg(float array[], int n);
void displayDistribution(float array[], int n);

int main(){
    
//2. [final grades]
//a Find min, max, average from grades in an array. 
int no_of_students; 
printf("enter number of student please: \n");
scanf("%d", &no_of_students);
float array_final_grades[no_of_students];
for(int i=0; i<no_of_students; i++){
    printf("enter grade of student %d please: \n", i+1);
    scanf("%f", &array_final_grades[i]);
}
getMax(array_final_grades, no_of_students);
getMin(array_final_grades, no_of_students);
getAvg(array_final_grades, no_of_students);

/* b. Declare a separate array that captures the distribution of these grades and lets the user know the 
percentage of students that falls in the different ranges. Define a function displayDistribution() to compile 
and print this information*/

displayDistribution(array_final_grades, no_of_students);

return 0;
}

void getMax(float array[], int n){
    float max=0;
    for (int i=0; i<n; i++){
        if (array[i]>max){
            max=array[i];
        }
    }
    printf("Max grade is %0.2f\n", max);
}

void getMin(float array[], int n){
    float min=100;
    for (int i=0; i<n; i++){
        if (array[i]<min)
            min=array[i];
    }
    printf("Min grade is %0.2f\n", min);
}

void getAvg(float array[], int n){
    float sum=0;
    for(int i=0; i<n; i++){
        sum=sum+array[i];
    }
    printf("Average grade is %0.2f\n",sum/n);
}

//mean, variance, standard deviation
void displayDistribution(float array[], int n){
    printf("Display the distribustion of the grades!!!\n");
    float sum=0;
    float difference_with_mean_square;
    float sum_difference_with_mean=0;
    float variance;
    float standard_deviation;
    float array_of_distribution[n]; //how many of standard deviation mà giá trị đó khác so với mean. 
    for(int i=0; i<n; i++){
        sum=sum+array[i];}
    float mean=sum/n;
    int count_SD_1=0;
    int count_SD_2=0;
    int count_SD_3=0;
    int count_SD_left=0;
    printf("Mean of the grades is %f\n", mean);
    for (int i=0; i<n; i++){
        difference_with_mean_square=(array[i]-mean)*(array[i]-mean);
        sum_difference_with_mean+=difference_with_mean_square;
    }
    variance=sum_difference_with_mean/(n-1); //tính phương sai trước
    printf("varinace is %f\n", variance);
    standard_deviation=sqrt(variance); // tính độ lêch chuẩn
    printf("standard deviation is %f\n", standard_deviation);
    for(int i=0; i<n; i++){
        array_of_distribution[i]=(fabs(array[i]-mean))/standard_deviation;
        printf("student %d has a differece of %f standard deviation\n", i, array_of_distribution[i]);
        if (array_of_distribution[i]<=1)
            count_SD_1++;
        else if(array_of_distribution[i]<=2)
            count_SD_2++;
        else if(array_of_distribution[i]<=3)
            count_SD_3++;
        else count_SD_left++;
    }
    float percent_1= (double)count_SD_1/n * 100;
    float percent_2=(double)count_SD_2/n * 100;
    float percent_3=(double)count_SD_3/n * 100;
    float percent_left=(double)count_SD_left/n * 100;


    printf("%d students has grade less than 1 standard deviation away from the mean, %.2f %% \n", count_SD_1, percent_1);
    printf("%d students has grade less than 2 standard deviation away from the mean, %.2f %% \n", count_SD_2, percent_2);
    printf("%d students has grade less than 3 standard deviation away from the mean, %.2f %% \n", count_SD_3, percent_3);
    printf("%d students has grade more than 3 standard deviation away from the mean, %.2f %% \n", count_SD_left, percent_left);
}