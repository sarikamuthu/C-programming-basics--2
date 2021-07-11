# include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    printf("The number is %d\n",number);

    do{
        printf("Enter guess:");
        scanf("%d",&guess);

        if(guess>number){
            printf("Your guess is high\n");
        
        }
        else if(guess<number){
            printf("Your guess is low\n");
        }
        else{
            printf("You guesses it in %d attempt\n",nguesses);
        }
        nguesses++;

    }while(guess!=number);



        return 0;
}