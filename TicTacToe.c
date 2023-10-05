#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

char sqaure[10] = {"0", "1,", "2", "3", "4", "5", "6", "7", "8", "9"};
int checkWin();
void drawBoard();

int main(){
    int player = 1, i, choice; //i tracks the progress
    char mark; // X,O
    do{
        drawBoard();
        player = (player % 2) ? 1 : 2;
        printf("Player %d, enter the choice : ",player);
        scanf("%d", &choice);
    }while(i == -1);
}