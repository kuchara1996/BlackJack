#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef enum {TRUE = 1, FALSE = 0} bool;


int main(int argc, char *argv[]) {
    
        char option = '0';
        bool koniec = FALSE;

        
    
        do{
            if(option == '0'){
            
                system("cls");
                printf("BlackJack\n");
                printf("1:Start\n");
                printf("2:Instrukcja\n");
                printf("3:Koniec\n");
                
                scanf("%s", &option);
            }
            else if(option == '1'){
                option = '0';
            }
            else if(option == '2'){
                option = '0';
            }
            else if(option == '3'){
                koniec = TRUE;    
            }
            else{
                printf("Wybrana opcja jest nieprawid³owa.\nWciœnij enter by porwóciæ do menu");
                scanf("%s", &option);
                option = '0';
                
            }
    
        }
        while(koniec == FALSE);
        
        
	return 0;
    }
