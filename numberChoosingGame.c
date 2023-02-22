// Write a Code for guess the Correct Number Game.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game(){
    char exit_game;
    int choice;
    time_t t1;
    int random_Number;
    srand((unsigned)time(&t1));
    random_Number=rand()%100;
    int input_Number;
    wrong_Level:
    printf("Choose the Difficulty Level\n1.Easy\n2.Medium\n3.Hard\n4.Exit Game\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
                printf("You Will Get Only 15 Chances!!\n");
            for(int total_life=14;total_life>=0;total_life--){
                printf("Enter Your Number Now: ");
                scanf("%d",&input_Number);
                if(input_Number<random_Number){
                    printf("Your Number is less than Choosen Number!!\n");
                }
                else if(input_Number>random_Number){
                    printf("Your Number is greater than Choosen Number!!\n");
                }
                else{
                    printf("\n\n");
                    return 1;
                }
            }
        break;
        case 2:
                printf("You Will Get Only 7 Chances!!\n");
            for(int total_life=6;total_life>=0;total_life--){
                printf("Enter Your Number Now: ");
                scanf("%d",&input_Number);
                if(input_Number<random_Number){
                    printf("Your Number is less than Choosen Number!!\n");
                }
                else if(input_Number>random_Number){
                    printf("Your Number is greater than Choosen Number!!\n");
                }
                else{
                    printf("\n\n");
                    return 1;
                }
            }
        break;
        case 3:
                printf("You Will Get Only 3 Chances!!\n");
            for(int total_life=2;total_life>=0;total_life--){
                printf("Enter Your Number Now: ");
                scanf("%d",&input_Number);
                if(input_Number<random_Number){
                    printf("Your Number is less than Choosen Number!!\n");
                }
                else if(input_Number>random_Number){
                    printf("Your Number is greater than Choosen Number!!\n");
                }
                else{
                    printf("\n\n");
                    return 1;
                }
            }
        break;
        case 4:
            printf("Are You Sure You Want to Exit the Game!!(Y/N): ");
            fflush(stdin);
            scanf("%c",&exit_game);
            if(exit_game=='Y'||exit_game=='y'){
                exit(0);
            }
            else{
                goto wrong_Level;
            }
            
        break;
        default:
        printf("Please Enter The Correct Difficulty Level\n");
        goto wrong_Level;
        break;
    }
    return -1;
}
int main(){
    char play_again;
    int result=0;
    letsPlay:
    result=game();
    fflush(stdin);
    if(result==1){
        printf("You Won!!\n");
        printf("Congratulations!!\n");
        printf("Do You Want to Play again!!(Y/N)\n");
        scanf("%c",&play_again);
        if(play_again=='Y'||play_again=='y'){
            goto letsPlay;
        }
    }
    else{
        printf("\n\n");
        printf("You Lose!!\n");
        printf("Better Luck Next Time!!\n");
        printf("Do You Want to Play again!!(Y/N)\n");
        scanf("%c",&play_again);
        if(play_again=='Y'||play_again=='y'){
            goto letsPlay;
        }
    }
    return 0;
}