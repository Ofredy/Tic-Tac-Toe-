#include <stdio.h>
#include <stdlib.h>

int main(){

    int count = 0, winner = 0;
    int i,player,index;
    char board[9],sign;
 
    for( i=0; i<9; ++i ){

        board[i] = ' ';

    }

    while( count < 9 && winner != 1 ){
        
        printf("\n");
        printf("%c|%c|%c\n",board[0],board[1],board[2]);
        printf("-+-+-\n");
        printf("%c|%c|%c\n",board[3],board[4],board[5]);
        printf("-+-+-\n");
        printf("%c|%c|%c\n",board[6],board[7],board[8]);
        
        player = count % 2 + 1;

        printf("Player%d Turn, Enter Number (1-9): ",player);
        scanf("%d",&index);

        --index;

        if( player == 1 ){
            sign = 'X';
        }
        else{
            sign = 'O';
        }

        while( board[index] == 'X' || board[index] == 'O' ){
            printf("Error, Position Selected is Occupied, Enter New Number (1-9): ");
            scanf("%d", &index);
            --index;
        }
        
        board[index] = sign;
        
        if( board[0] == sign && board[0] == board[4] && board[4]==board[8] ){
            winner = 1;      
            break;
        }
        else if( board[4]==sign && board[4]==board[2] && board[4]==board[6] ){
            winner = 1;    
            break;
        }
        else if( board[4]==sign && board[1]==board[4] && board[4]==board[7] ){
            winner = 1;
            break;
        }
        else if( board[4]==sign && board[3]==board[4] && board[4]==board[5] ){
            winner = 1;  
            break;
        }
        else if( board[0]==sign && board[0]==board[3] && board[3]==board[6] ){
            winner = 1;
            break;
        }
        else if( board[0]==sign && board[0]==board[1] && board[1]==board[2] ){
            winner = 1;
            break;
        }
        else if( board[6]==sign && board[6]==board[7] && board[7]==board[8] ){
            winner = 1;
            break;
        }
        else if( board[2]==sign && board[5]==board[2] && board[5]==board[8] ){
            winner = 1;
            break;
        }

        ++count;

    }

    printf("\n");
    printf("%c|%c|%c\n",board[0],board[1],board[2]);
    printf("-+-+-\n");
    printf("%c|%c|%c\n",board[3],board[4],board[5]);
    printf("-+-+-\n");
    printf("%c|%c|%c\n",board[6],board[7],board[8]);

    if( winner == 0 ){

        printf("No Winner, PLay Again");
        
    }

    if( winner == 1 ){

        printf("Player%d is The Winner\n",player);
        printf("FUCK YOU HOE\n");
    
    }

}

