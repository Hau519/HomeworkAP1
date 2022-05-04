/***************************************************************
 * Vu Thi Hau
 * AP - TicTacToe
 * version Player vs Computer
 * 
 * *********************************************************/  

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void initial_board();
void printing_board();
void player_move();
void computer_move();
int check_winner();
int movement(int choice, char XO); // check valid place for each move. 

char table[3][3];
int move; // move of player or computer
int count=0; // count how many turn is played
int check_valid; // to get value from function movement
char ans; // for the loop play again. 
int i; // to get value from check_winner. 

int main(){
    char winner[10];
    do{

        initial_board(); // reset the table for the new games.
        count=1; // reset count value for the new games. 
        do{
            if(count%2!=0)
            {
                player_move();
                strcpy(winner, "Player");}
            else 
            {
                printf("\nComputer's turn\n");
                computer_move();
                strcpy(winner, "Computer");
            }
            printing_board();
            if (count>4)
            {
                i=check_winner();
                if(i==1)
                {
                    printf("%s win, congra!\n", winner);
                    break;
                }
            }
            count++;
        }while(count<10);
        if (count==10 && i==2)
            printf("Draw game! \n");
        fflush(stdin);
        printf("would you like to play again?(Y/N)\n");
        scanf(" %c", &ans);
    } while (ans=='Y'|| ans=='y');
    return 0;
}

void initial_board(){
    printf("\n\n\tTic-Tac-toe");
    printf("\n\nPlayer (X) vs Computer (O)");
    printf("\n\n");
    int k=49;
    char n;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            table[i][j]=k;
            k++;}
    }
    printing_board();
}

void printing_board(){

    for(int i=0; i<3; i++){
        printf("     |     |     \n");
        printf("  %c  |  %c  |   %c  \n", table[i][0], table[i][1], table[i][2]);
        printf("_____|_____|_____\n");
    }
}

void player_move(){
    do{
        printf("\nPlayer, please enter your move\n");
        scanf("%d", &move);
        char XO='X';
        check_valid=movement(move, XO);
        if(check_valid==0)
            printf("Invalid move, this position is taken, try again\n");
    } while (check_valid==0);
}

void computer_move(){
    do{
        move=rand()%9+1;
        char XO = 'O';
        check_valid=movement(move, XO);
    } while (check_valid==0);
}

int movement(int choice, char XO){
    
    for(int j =0; j<3; j++){
        if (choice == j+1 && table[0][j]==(char)(choice+48)){ 
            table[0][j]=XO; 
            return 1;   
            }
        else if (choice == j+4 && table[1][j]==(char)(choice+48)){
            table[1][j]=XO;
            return 1;
            }
        else if (choice == j+7 && table[2][j]==(char)(choice+48)){
            table[2][j]=XO;
            return 1;
            }   }
    return 0; // if it didnt return 1, then the place is not available, then return 0.
            }

int check_winner(){
    for(int i=0; i<3; i++)
    {if(table[i][0]==table[i][1] && table[i][1]==table[i][2])
            return 1;
        else if(table[0][i]==table[1][i] && table[1][i]==table[2][i])
            return 1;}
    if(table[0][0]==table[1][1] && table[1][1]==table[2][2])
        return 1; 
    else if(table[0][2]==table[1][1] && table[1][1]==table[2][0])
        return 1; 
    else 
        return 2;
}





