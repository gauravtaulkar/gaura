#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses=0;
    srand(time(0));
    number=rand()%100 +1; //this line for generating random number
   // printf("the value of %d \n", number);
  
    do{
        printf("Guess the number between 1 to 100 \n");
        scanf("%d",&guess);
        nguesses++;
        if(guess>number){
            
            printf("Lower number please  \n");
        }
        else if(guess<number){
            
            printf("higher number please \n");
        }
        else{
            printf("You guesss the number in %d attempts \n", nguesses);
            
        }
        
    }while(guess!=number);
    return 0;
}

