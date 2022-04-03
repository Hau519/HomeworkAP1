#include <stdio.h>
#include <stdbool.h>

int main(){

    //#1
    float current_tep = -12;
    char grade = 'A';
    float avg_AP;
    int number_stu = 23;
    int temp_bnncake = 200;
    char midd_initial = 'T';
    long int stu_ID = 2212544;
    long long int number = 5149298735;
    double pi;
    char ans = 'y';
    //#2
    int a = 19;
    float b = (float)(a);
    float c = 25.5;
    int d = (int)(c);
    double e = (double)(c);
    char f =a;
    int g = (int)(f);
    float h = (float)(f);
    char l = (char)(a);
    char m = (char)(c);
    printf (" cac chu can in %d, %f, %f, %d, %f, %c, %d, %f, %c, %c", a, b, c, d, e, f, g, h, l, m);

    //3
   //3.1.a
    int n;
    printf("type a float please: \n");
    scanf("%d", &n);
    printf("The integer is:%d", n);
    //3.1.b
    float p;
    printf("type a float please:\n");
    scanf("%f", &p);
    printf("the number is: %f",p);

    //3.2.1
    float q;
    printf("type an integer please: \n");
    scanf("%f", &q);
    printf("The integer is:%f", q);
    return 0;

    // 4.1
    bool s1 = 5%2==1;
    bool s2 = 8%2==1;
    bool s3 = 4>3;
    bool s4=4>5;
   printf("T && F => %d\n", s1&&s2);
   printf("T && T => %d\n", s1&&s3);
   printf("F && T => %d\n", s2&&s3);
   printf("F && F => %d\n", s2&&s4);

   printf("T || F => %d\n", s1||s2);
   printf("T || T => %d\n", s1||s3);
   printf("F || T => %d\n", s2||s3);
   printf("F || F => %d\n", s2||s4);    
    5
    a. add
    b. power
    c. day
    d. NewLine
    e. prime
    f. convert
    g. bmi 
return 0;
}