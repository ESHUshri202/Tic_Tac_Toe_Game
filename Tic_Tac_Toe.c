#include<stdio.h>
#include<conio.h>

// matrix declaration
char squ[]={'0','1','2','3','4','5','6','7','8','9'};

int checksum();
void board();
int main()
{
    int player=1,i,choice;
    char mark;
    do{
        board();
        player = (player%2) ? 1 : 2;
        printf("Player %d enter a number", player);
        scanf("%d", &choice);
        
        mark=(player == 1)? 'X' : 'O';
        if(choice == 1 && squ[1]== '1')
        {
            squ[1]=mark;
        }
        else if(choice == 2 && squ[2] == '2')
        {
            squ[2]=mark;

        }
        else if(choice == 3 && squ[3] == '3')
        {
            squ[3]=mark;

        }
        else if(choice == 4 && squ[4] == '4')
        {
            squ[4]=mark;
            
        }
        else if(choice == 5 && squ[5] == '5')
        {
            squ[5]=mark;
            
        }
        else if(choice == 6 && squ[6] == '6')
        {
            squ[6]=mark;
            
        }
        else if(choice == 7 && squ[7] == '7')
        {
            squ[7]=mark;
            
        }
        else if(choice == 8 && squ[8] == '8')
        {
            squ[8]=mark;
        }
        else if(choice == 9 && squ[9] == '9')
        {
            squ[9]=mark;
        }
        else
        {
            printf("Invalid move");
            player--;
            getch();

        }
        i=checksum();
        player++;

        
    }while(i == -1);
    board();
    if(i == 1)
    {
        printf("==>\aPlayer %d win ", --player);
        
    }
    else
    {
        printf("==>\aGame draw");
        
    }
    getch();
    return 0;
}


// ___________RESULT OF GAME MATCH____________

int checksum()
{
    if(squ[1]==squ[2] && squ[2]==squ[3])
    {
        return 1;
    }
    else if(squ[1]==squ[5] && squ[5]==squ[9])
    {
        return 1;
    }
    else if(squ[1]==squ[4] && squ[4]==squ[7])
    {
        return 1;
    }
    else if(squ[2]==squ[5] && squ[5]==squ[8])
    {
        return 1;
    }
    else if(squ[3]==squ[6] && squ[6]==squ[9])
    {
        return 1;
    }
    else if(squ[3]==squ[5] && squ[5]==squ[7])
    {
        return 1;
    }
    else if(squ[3]==squ[2] && squ[2]==squ[1])
    {
        return 1;
    }
    else if(squ[4]==squ[5] && squ[5]==squ[6])
    {
        return 1;
    }
    else if(squ[7]==squ[8] && squ[8]==squ[9])
    {
        return 1;
    }
    else if(squ[1]==squ[2] && squ[2]==squ[3])
    {
        return 1;
    }
    else if(squ[1] != '1' && squ[2] !='2' && squ[3] !='3' && squ[4]!='4' && squ[5] !='5' && squ[6]!= '6' && squ[7]!= '7' && squ[8] != '8' && squ[9]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}


//________BOARD FORMATION________
void board()
{
    system("cls");
    printf("\n\n\tTic_Tac_Toe\n\n");
    printf("Player 1 (X) \n");
    printf("Player 2 (Y) \n");
    printf("    |   |   \n");
    printf(" %c | %c | %c \n",squ[1],squ[2],squ[3]);
    printf("    |   |   \n");
    printf("    |   |   \n");
    printf(" %c | %c | %c \n",squ[4],squ[5],squ[6]);
    printf("_____|_____|_____\n");
    printf(" %c | %c | %c \n",squ[7],squ[8],squ[9]);
    printf("    |    |    \n\n\n\n");

    //__________END OF PROJECT__________

}