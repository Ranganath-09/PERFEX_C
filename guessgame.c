// number guess game 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random,guess;
int noof_guess=0;
int points=0;
int c=236;
int point(){

  if(noof_guess>8){
     points=3;
  }
  else if (noof_guess>15)
  {
    points=3;
  }
  else{
    points+=5;
    printf("jackpot you got 5 points");
  }
}



int main(){
    srand(time(NULL));//imported time func so it gives random number after every execution
   
   
   
    
    printf("################################################\n");
    printf("welcome to number guessing game\n");
    printf(" 1 to start game 0 to end game\n ");
    int m;
    scanf("%d",&m);
    random=rand()%100+1;
    while(m==1){
   do {
    printf("Enter your guess in range(1 to 100)\n");
    scanf("%d",&guess);
    noof_guess++;
    if(guess<random){
        printf("Your guess is less! guess some big ");

      }
    else if(guess>random){
        printf("Your guess is greater! guess some smaller");
    }
  else{
    printf("Wallah!!!! YOU GUESSED IT CORRECT\n");
    printf("You taken this many number of guess: %d\n",noof_guess);
    point();
    
    printf("you gained total points %d",points);
  }
   }while(guess!=random);// do while atleast iretrate once 
   printf(" want to play again ??? 1 to start game 0 to end game\n ");
   
   scanf("%d",&m);
   if(m==0){
   printf("you gained total points %d\n",point());
   printf("bye bye\n");
   break;
  }
  else{
    random=rand()%100+1;
     point();
     noof_guess=0;
  }
          }
     printf("Devloped by Tvashter ~%c",c);
      return 0;
}
