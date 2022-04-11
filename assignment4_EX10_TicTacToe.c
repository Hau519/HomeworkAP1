/***************************************************************
 * Vu Thi Hau
 * AP - assignment 4 - ex 10 - tic tac toe
 * 
 * *********************************************************/  

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

char table[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice;
char mark;
int player =1;

void board();
void movement();
int check_winner();


int main(){
    int i;
    do{ 
        system("cls");
        board();
        if(player%2 != 0)
            player=1;
        else
            player=2;
        if(player==1)
            mark='X';
        else mark='O';

        printf("player %d, enter a number of your move: ", player);
        scanf("%d", &choice);
        movement();
        board();
        player++;
        i=check_winner();
    } while (i==2);

    if (i==1)
        printf("\nplayer %d win", player-1);
    else {
        printf("\nNo one win");
    }

return 0;
}


void board(){
    printf("\n\n\tTic-Tac-toe");
    printf("\n\nPlayer 1 (X) vs Player 2 (O)");
    printf("\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |   %c  \n", table[1], table[2], table[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |   %c  \n", table[4], table[5], table[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |   %c  \n", table[7], table[8], table[9]);
    printf("     |     |     \n");
}

int check_winner(){
    if(table[1]==table[2] && table[2]==table[3])
        return 1;
    else if(table[4]==table[5] && table[5]==table[6])
        return 1; 
    else if(table[7]==table[8] && table[8]==table[9])
        return 1; 
    else if(table[1]==table[4] && table[4]==table[7])
        return 1; 
    else if(table[2]==table[5] && table[5]==table[8])
        return 1; 
    else if(table[3]==table[6] && table[6]==table[9])
        return 1; 
    else if(table[1]==table[5] && table[5]==table[9])
        return 1; 
    else if(table[3]==table[5] && table[5]==table[7])
        return 1; 
    else if(table[1]!='1'&& table[2]!='2'&&table[3]!='3'&&table[4]!='4'&&table[5]!='5'&&table[6]!='6'&&table[7]!='7'&&table[8]!='8'&&table[9]!='9')
        return 0;
    else 
        return 2;
}

void movement(){
    if(choice==1 && table[1]=='1')
        table[1]=mark;
    else if(choice==2 && table[2]=='2') 
        table[2]=mark;
    else if(choice==3 && table[3]=='3') 
        table[3]=mark;
    else if(choice==4 && table[4]=='4') 
        table[4]=mark;
    else if(choice==5 && table[5]=='5') 
        table[5]=mark;
    else if(choice==6 && table[6]=='6') 
        table[6]=mark;
    else if(choice==7 && table[7]=='7') 
        table[7]=mark;
    else if(choice==8 && table[8]=='8') 
        table[8]=mark;
    else if(choice==9 && table[9]=='9') 
        table[2]=mark;
    else {
        printf("Invalid move \n");
        player --;
        getch();//to stop, user need to press any key to continue. 
    }}