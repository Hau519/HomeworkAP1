/***************************************************************
 * Vu Thi Hau
 * AP -  Final project
 *
 * 
 * *********************************************************/  
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void populate_inventory();
int search_by_keyword();
void process_transaction();
void delete_record();
void display_book();
void initial_populate();
void print_book_record(int i);
const char* lowerfunction(char str[]); // to avoid case sentitive in search. 
int ISBN_search();
void reset_record(int index);
void purchase(int index_book);
void return_book(int index_book);


typedef struct books {
    char ISBN[30];
    char title[500];
    char author[500];
    char publisher[500];
    char genre[500];
    int year_of_publish;
    int amount_of_stock;
    float selling_price;
} books;

books book_array[500];

int k=0; 
int choice;
char target_search[100];

int main(){
    initial_populate();
    do{ 
        system("cls");
        do{ 
            printf("\n\n\t\t MENU OPTION \n");
            printf("1. Populate the inventory.\n");
            printf("2. Search by keyword\n");
            printf("3. Process a transaction.\n");
            printf("4. Delete a book record.\n");
            printf("5. Display all books in the inventory.\n");
            printf("6. Exit the system.\n");
            scanf("%d", &choice);
        } while(choice!=1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice !=6 );
    
        switch(choice){
            case 1: 
                populate_inventory();
                break;
            case 2: 
                print_book_record(search_by_keyword());
                break;
            case 3:
                process_transaction();
                break;
            case 4: 
                delete_record();
                break; 
            case 5: 
                display_book();
                break;
            case 6:
                printf("Thank you for using book inventory. Goodbye!");
                exit(0);
                break;  
        } 
        getch();
    } while (1);
     

    return 0;
}

void initial_populate(){

    books b1, b2, b3, b4, b5, b6;
    strcpy(b1.ISBN, "0-17-602102-7");
    strcpy(b1.title, "My family and me");
    strcpy(b1.author, "Phoebe Rankin & Elizabeth Stenson");
    strcpy(b1.publisher, "Nelson Canada");
    strcpy(b1.genre, "Poetry and Verse");
    b1.year_of_publish = 1986;
    b1.amount_of_stock = 100;
    b1.selling_price=20.99;
    book_array[0]=b1;

    strcpy(b2.ISBN, "0-439-06365-5");
    strcpy(b2.title, "You are special");
    strcpy(b2.author, "Max Lucado");
    strcpy(b2.publisher, "Scholastic Inc.");
    strcpy(b2.genre, "Poetry and Verse");
    b2.year_of_publish = 1998;
    b2.amount_of_stock = 120;
    b2.selling_price=15.79;
    book_array[1]=b2;

    strcpy(book_array[2].ISBN, "978-1-9264-4452-9");
    strcpy(book_array[2].title, "Animal school Time");
    strcpy(book_array[2].author, "Sara Conway");
    strcpy(book_array[2].publisher, "Rainstorm publishing");
    strcpy(book_array[2].genre, "Fable");
    book_array[2].year_of_publish = 2019;
    book_array[2].amount_of_stock = 300;
    book_array[2].selling_price=9.99;

    
    strcpy(b4.ISBN, "978-0-312-52977-2");
    strcpy(b4.title, "My first town");
    strcpy(b4.author, "Barbara Bakos");
    strcpy(b4.publisher, "Priddy books");
    strcpy(b4.genre, "Concept books");
    b4.year_of_publish = 1986;
    b4.amount_of_stock = 100;
    b4.selling_price=12.5;
    book_array[3]=b4;


    strcpy(b5.ISBN, "978-1-328-76841-4");
    strcpy(b5.title, "Little Bear's Little boat");
    strcpy(b5.author, "Nancy Carpenter");
    strcpy(b5.publisher, "Houghton Mifflin Harcourt");
    strcpy(b5.genre, "Fable");
    b5.year_of_publish = 2003;
    b5.amount_of_stock = 170;
    b5.selling_price=17.99;
    book_array[4]=b5;
    
    k=5;  
}


void populate_inventory(){
    int no_of_book;
    do{
        printf("how many books would you like to enter? \n");
        scanf("%d", &no_of_book);
    } while(no_of_book<0 || no_of_book>500);

    for(int i=0; i<no_of_book; i++){ 

        printf("\nISBN: ");
        fflush(stdin);
        scanf("%[^\n]%*c", book_array[k].ISBN);
        printf("\nTitle: ");
        fflush(stdin);
        scanf("%[^\n]%*c", book_array[k].title);
        printf("\nAuthor: ");
        fflush(stdin);
        scanf("%[^\n]%*c", book_array[k].author);
        printf("\nPublisher: ");
        fflush(stdin);
        scanf("%[^\n]%*c", book_array[k].publisher);
        printf("\nGenre: ");
        fflush(stdin);
        scanf("%[^\n]%*c", book_array[k].genre);
        printf("\nyear of publish: ");
        scanf("%d", &book_array[k].year_of_publish);
        printf("\nAmount of stock: ");
        scanf("%d", &book_array[k].amount_of_stock);
        printf("\nSelling price: ");
        fflush(stdin);
        scanf("%f", &book_array[k].selling_price);
        k++;
    }
    display_book();
}

int search_by_keyword(){

    char lower_string[100];
    char replace_string[100];

    do{
        printf("\n\n \t SEARCH BY KEYWORD\n");
        printf("Base on what do you want to search for the book (please choose 1-4)?\n");
        printf("1. Author\n");
        printf("2. Title\n");
        printf("3. Publisher\n");
        printf("4. Genre\n");
        scanf("%d", &choice);
    }while (choice<1||choice> 4);

    fflush(stdin);
    printf("Please enter your search: \n");
    scanf("%[^\n]%*c", &target_search);
    strcpy(target_search, lowerfunction(target_search));

    for (int i=0; i<k; i++){
        switch(choice)
        {
            case 1: 
                strcpy(replace_string, book_array[i].author);
                break;
            case 2: 
                strcpy(replace_string, book_array[i].title);
                break;
            case 3: 
                strcpy(replace_string, book_array[i].publisher);
                break;
            case 4: 
                strcpy(replace_string, book_array[i].genre);
                break;
        }
        strcpy(lower_string,lowerfunction(replace_string));
        if(strstr(lower_string, target_search)!=NULL)
            return i;   
    }
    printf("Sorry, no match!");
    return -1;
}

void process_transaction(){
    int index_book;
    do{
        printf("\nwhat kind of transaction would you like to process? please choose (1-2)? \n");
        printf("1. Buy a book?\n");
        printf("2. Return a book?\n");
        scanf("%d", &choice);
    }while(choice!=1 && choice!=2);
    
    printf("\n Please search for book first\n");
    index_book=search_by_keyword();
    if(index_book==-1)
        printf("Sorry there is no book record to process\n");
    else{
        switch (choice)
        {
        case 1:     
            purchase(index_book);
            break;
        case 2: 
            return_book(index_book);
            break;
        }
    }
} 

void purchase(int index_book){
    if(index_book!=-1 && book_array[index_book].amount_of_stock>=1){
        print_book_record(index_book);
        printf("\n The book is available to purchase. The price is %.2f \n", book_array[index_book].selling_price);
        getch();
        book_array[index_book].amount_of_stock--;
        printf("\nNew amount of stock now is %d\n", book_array[index_book].amount_of_stock);
        k--;
    }
    else 
    printf("\n This is not available to buy.\n");

}

void return_book(int index_book){
    book_array[index_book].amount_of_stock++;
    printf("\nAmount of stock now increased to %d", book_array[index_book].amount_of_stock);
    print_book_record(index_book);
}

void delete_record(){
    int search_index = ISBN_search();
    if(search_index!=-1)
    {
        for (int i=search_index; i<=k-2; i++) 
            book_array[i]=book_array[i+1];
    }
    reset_record(k-1);
    k--;
    printf("The record has been removed. \n");
} 

void display_book(){

    for (int i=0; i<k; i++){
        print_book_record(i);
    }
}

void print_book_record(int i){

    printf("\n\n\n\tPrinting book %d\n", i+1);
    printf("\n\rISBN: %s", book_array[i].ISBN);
    printf("\n\rTitle: %s", book_array[i].title);
    printf("\n\rAuthor: %s", book_array[i].author);
    printf("\n\rPublisher: %s", book_array[i].publisher);
    printf("\nGenre: %s", book_array[i].genre);
    printf("\nYear of pulish: %d", book_array[i].year_of_publish);
    printf("\nAMount of stock: %d", book_array[i].amount_of_stock);
    printf("\nSelling price: %.2f", book_array[i].selling_price);
}


const char* lowerfunction(char str[]){
   int i;
   for(i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
   return str;
}

int ISBN_search(){
    fflush(stdin);
    printf("\nPlease enter ISBN of the book that you want to delete\n");
    scanf("%[^\n]%*c", &target_search);
    for(int i=0; i<k; i++)
    {
        if(strstr(book_array[i].ISBN, target_search)!=NULL)
            return i;
    }
    printf("No match!\n");
    return -1;
}

void reset_record(int index){
    strcpy(book_array[index].ISBN, " ");
    strcpy(book_array[index].author, " ");
    strcpy(book_array[index].title, " ");
    strcpy(book_array[index].publisher, " ");
    strcpy(book_array[index].genre, " ");
    book_array[index].amount_of_stock=-1;
    book_array[index].year_of_publish=-1;
    book_array[index].selling_price=-1; 
} 

    



