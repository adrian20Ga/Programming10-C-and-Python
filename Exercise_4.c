#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int move, computer;
int main(){
	printf("This program will play rock paper scissors with you\n");
	printf("1 = Rock \n2= Paper\n3= Scissors\n");
	printf("Input your move\n");
	scanf("%i", &move);
	srand(time(NULL));
	computer=rand()%3+1;  
	if(computer==1){
		printf("computer played rock\n");}
	if(computer==2){
		printf("computer played paper\n");}
	if(computer==3){
		printf("computer played scissors\n");}
	switch (move){
		case (1):
			if(computer==1){
                    printf("Draw\n");
                }
            if(computer==2){
                    printf("computer wins\n");
                    
                }
        	if(computer==3){
                    printf("player wins\n");
               	}
            break;
        
		case (2):
			 if(computer==1){
                  printf("player wins\n");
                    }
        	if(computer==2){
                        printf("draw\n");
                        
                    }
            if(computer==3){
                        printf("computer wins\n");
                        
                    }
                
		break;
		
		case(3):
			
			  if(computer==1){
                printf("computer wins\n");
                
                    }
              if(computer==2){
                        printf("player wins\n");
                        
                    }
              if(computer==3){
                        printf("draw\n");
                    }
        break;
     }
	
}

