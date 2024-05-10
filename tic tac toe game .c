#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void game();
int chacking();
char b[]={'0','1','2','3','4','5','6','7','8','9'};
int main()
{


int player=1,input,status=1;
system("color 0f");

game();
while(status=1)
{
    player=(player%2==0)?2:1;

   /* if(player==1)
    {
        mark='x';

    }
    else{
        mark='o';
    }*/

    char mark=(player==1)?'x':'o';

    printf("Enter player number : %d",player);
   scanf("%d",&input);
if(input<1||input>9)
{
    printf("invalid number\n");
}
b[input]=mark;
    game();

    int result=chacking();
    if(result==1)
    {
        printf("player %d is winner" ,player);
        return;

    }

        else if (result==0)
    {
        printf("draw");
        return;

    }



    player++;
}






}


void game()
{
    printf("===========  TIC - TAC - TOE  ==================\n");

    printf("\n\n\n");
    printf("           |             |               \n");
    printf("     %c     |     %c       |     %c          \n",b[1],b[2],b[3]);
     printf("-----------|-------------|---------------\n");
     printf("           |             |               \n");
    printf("     %c     |     %c       |     %c          \n",b[4],b[5],b[6]);
     printf("-----------|-------------|---------------\n");
     printf("           |             |               \n");
    printf("     %c     |     %c       |     %c          \n",b[7],b[8],b[9]);


}




int chacking()
{
    if(b[1]==b[2] && b[2]==b[3]){
        return 1;
    }
    if(b[1]==b[4] && b[4]==b[7]){
        return 1;
    }
    if(b[7]==b[8] && b[8]==b[9]){
        return 1;
    }
    if(b[3]==b[6] && b[6]==b[9]){
        return 1;
    }
    if(b[1]==b[5] && b[5]==b[9]){
        return 1;
    }
    if(b[3]==b[5] && b[5]==b[7]){
        return 1;
    }
    if(b[2]==b[5] && b[5]==b[8]){
        return 1;
    }
    if(b[4]==b[5] && b[5]==b[6]){
        return 1;
    }
     int counter=0;
    for(int i=1;i<=9;i++)
    {
      if(b[i]=='x'||b[i]=='o')
      {
          counter++;
      }
    }

    if(counter==9)
    {
        return 0;
    }
    return -1;
}




