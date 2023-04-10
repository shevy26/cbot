#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
void main()
{
   char input[200],name[20];
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C://TURBOC3//BGI");
   setcolor(2);
   settextstyle(10,HORIZ_DIR,1);
   outtextxy(300,50,"C BOT");  //designing heading
   delay(1000);
   settextstyle(0,HORIZ_DIR,1);
   setcolor(WHITE);
   outtextxy(1,110,"NOTE: Press 4 for exit");
   delay(500);
   outtextxy(1,125,"Since I'm case sensitve! Deal with me in lowercase for better response");
   delay(1000);
   printf("\n\n\n\n\n\n\n\n");
   cprintf("\n");
   printf("Hi,I'm C bot\n");
   printf("What's your name ?\n");
   gets(name);
   printf("That's great name %s!\n",name);
    while(1)
     {
      gets(input);
      if(strcmp(input,"hi")==0)
      {
       delay(2000);
       printf("Hi,Nice to meet you !\n");
      }
      else if(strcmp(input,"4")==0)
      {
       exit(0);
      }
      else if(strcmp(input,"hello")==0)
      {
       delay(2000);
       printf("Hey! Good to see you!\n");
      }
      else if(strcmp(input,"how are you?")==0)
      {
       delay(2000);
       printf("Hey! Thankyou so much for asking. Well I'm great and What about you?\n");
      }
      else if(strcmp(input,"great")==0)
      {
       delay(2000);
       printf("Good to listen you\n");
      }
      else if(strcmp(input,"nice")==0)
      {
       delay(2000);
       printf("Great\n");
      }
      else if(strcmp(input,"well")==0)
      {
       delay(2000);
       printf("Great\n");
      }
      else if(strcmp(input,"i am good")==0)
      {
       delay(2000);
       printf("That's Great\n");
      }
      else if(strcmp(input,"i am well")==0)
      {
       delay(2000);
       printf("That's Great\n");
      }
      else if(strcmp(input,"who build you?")==0)
      {
       delay(2000);
       printf("Hi! My builder name is Shevy \n");
      }
      else if(strcmp(input,"you are made up of which language?")==0)
      {
       delay(2000);
       printf("I'm made up of C language\n");
      }
      else if(strcmp(input,"what is your age?")==0)
      {
       delay(2000);
       printf("Infinite! Until you delete it!\n");
      }
      else if(strcmp(input,"what's your age?")==0)
      {
       delay(2000);
       printf("Infinite! Until you delete it!\n");
      }
      else if(strcmp(input,name)==0)
      {
       delay(2000);
       printf("That's Great %s \n",name);
      }
      else if(strcmp(input,"thanks")==0)
      {
       delay(2000);
       printf("No Need %s\n",name);
      }
      else if(strcmp(input,"thankyou")==0)
      {
       delay(2000);
       printf("No Need %s\n",name);
      }
      else if(strcmp(input,"shevy")==0)
      {
       delay(2000);
       printf("Hi! Builder. How can I help you ?\n");
      }
      else
      {
       delay(2000);
       printf("Sorry! I am unable to understand.\n");
      }
     }
   getch();
   closegraph();
}
