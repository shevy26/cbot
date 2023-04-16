#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include<time.h>
void main()
{
  char input[200], name[20];
    time_t t;   // not a primitive datatype
    time(&t);
  printf("\n");
  printf("CCCCC   B---B   | OO |   TTTTT \n");
  printf("C       B---|   | -- |     |   \n");
  printf("CCCCC   B---B   | OO |     |   \n");
  printf("\n");
  printf("\nNOTE: Press 4 for exit\n");
  printf("\n Press 3 to shutdown your Pc or laptop\n ");
  printf("Since I'm case sensitive! Deal with me in lowercase for better response\n");
  printf("\n");
  printf("Cbot : Hi,I'm C bot\n");
  printf("Cbot : What's your name ?\n");
  gets(name);
  printf("Cbot : That's great name %s!\n", name);
  while (1)
  {
    gets(input);
    if (strcmp(input, "hi") == 0)
    {

      printf("Cbot : Hi,Nice to meet you !\n");
    }
    else if (strcmp(input, "3") == 0)
    {
      printf("Cbot : Shutting Down.......\n");
    }
    else if (strcmp(input, "what is your name?") == 0)
    {

      printf("Cbot : My name is C bot!\n");
    }
      else if (strcmp(input, "where do you live?") == 0)
    {

      printf("Cbot : I live in your device !\n");
    }
     else if (strcmp(input, "okay") == 0||strcmp(input, "ok") == 0)
    {

      printf("Cbot : Hmmm...\n");
    }
     else if (strcmp(input, "good evening") == 0||strcmp(input, "good afternoon") == 0||strcmp(input, "good morning") == 0||strcmp(input, "good night") == 0)
    {

      printf("Cbot : Hey ! Nice to meet you %s \n",name);
    }
    else if (strcmp(input, "open chrome") == 0 || strcmp(input, "run chrome") == 0 || strcmp(input, "start chrome") == 0)
    {
      printf("Cbot : Opening Chrome...\n");
      system("start chrome");
      printf("Cbot : Done...\n");
    }
    else if (strcmp(input, "open notepad") == 0 || strcmp(input, "run notepad") == 0 || strcmp(input, "start notepad") == 0)
    {
      printf("Cbot : Opening notepad...\n");
      system("start notepad");
      printf("Cbot : Done...\n");
    }
    else if (strcmp(input, "open cmd") == 0 || strcmp(input, "run cmd") == 0 || strcmp(input, "start cmd") == 0)
    {
      printf("Cbot : Opening cmd...\n");
      system("start cmd");
      printf("Cbot : Done...\n");
    }
    else if (strcmp(input, "who create you?") == 0)
    {

      printf("Cbot : My builder name is shevy");
    }
     else if (strcmp(input, "you are intelligent") == 0||strcmp(input, "you are good") == 0||strcmp(input, "you are cute") == 0)
    {

      printf("Cbot : Thanks %s !",name);
    }
     else if (strcmp(input, "you are bad") == 0||strcmp(input, "you are stupid") == 0||strcmp(input, "you are awful") == 0)
    {

      printf("Cbot : How dare you ! %s !",name);
    }
     else if (strcmp(input, "happy birthday") == 0||strcmp(input, "happy birthday cbot") == 0)
    {
      printf("Cbot : I celebrate my birthday whenever I am updated. Thanks %s.\n",name);
    }
     else if (strcmp(input, "welcome") == 0||strcmp(input, "my pleasure") == 0)
    {
      printf("Cbot : So sweet of you !\n");
    }
    else if (strcmp(input, "i am not good") == 0)
    {

      printf("Cbot : I' am sorry to hear that\n");
    }
      else if (strcmp(input, "ya") == 0||strcmp(input, "yeah") == 0)
    {

      printf("Cbot : okay \n");
    }
     else if (strcmp(input, "what's up?") == 0)
    {

      printf("Cbot : Hey! all good you tell?\n");
    }

    else if (strcmp(input, "i am not well") == 0)
    {

      printf("Cbot : I'm sorry to hear that \n");
    }
    else if (strcmp(input, "what's your name?") == 0)
    {

      printf("Cbot : My name is C bot!\n");
    }
    else if (strcmp(input, "4") == 0||strcmp(input,"goodbye")==0||strcmp(input,"bye")==0)
    {
      printf("Cbot : Bye %s ! See you again!\n",name);
      exit(0);
    }
    else if (strcmp(input, "hello") == 0)
    {

      printf("Cbot : Hey! Good to see you!\n");
    }
    else if (strcmp(input, "how are you?") == 0)
    {

      printf("Cbot : Hey! Thankyou so much for asking. Well I'm great and What about you?\n");
    }
    else if (strcmp(input, "great") == 0)
    {

      printf("Cbot : Good to listen you\n");
    }
    else if (strcmp(input, "nice") == 0)
    {

      printf("Cbot : Great\n");
    }
    else if (strcmp(input, "well") == 0)
    {

      printf("Cbot : Great\n");
    }
    else if (strcmp(input, "i am good") == 0)
    {

      printf("Cbot : That's Great\n");
    }
    else if (strcmp(input, "i am well") == 0)
    {

      printf("Cbot : That's Great\n");
    }
    else if (strcmp(input, "who build you?") == 0||strcmp(input, "who is your mother?") == 0||strcmp(input, "who is your father?") == 0)
    {

      printf("Cbot : Hi! My builder name is Shevy \n");
    }
    else if (strcmp(input, "you are made up of which language?") == 0)
    {

      printf("Cbot : I'm made up of C language\n");
    }
    else if (strcmp(input, "you are made up of what language?") == 0)
    {

      printf("Cbot : I'm made up of C language\n");
    }
    else if (strcmp(input, "what is your age?") == 0||strcmp(input, "how old are you?") == 0)
    {
      printf("Cbot : Infinite! Until you delete it!\n");
    }
    else if (strcmp(input, "what's your age?") == 0)
    {
      printf("Cbot : Infinite! Until you delete it!\n");
    }
    else if (strcmp(input, name) == 0)
    {
      printf("Cbot : That's Great %s \n", name);
    }
    else if (strcmp(input, "thanks") == 0)
    {
      printf("Cbot : No Need %s\n", name);
    }
    else if (strcmp(input, "thankyou") == 0)
    {
      printf("Cbot : No Need %s\n", name);
    }
    else if (strcmp(input, "shevy") == 0)
    {
      printf("Cbot : Hi! Builder. How can I help you ?\n");
    }
     else if (strcmp(input, "are you human?") == 0||strcmp(input, "are you real?") == 0)
    {

      printf("Cbot : No, I'm a bot . I exist virtually on your device.\n");
    }
      else if (strcmp(input, "are you a robot?") == 0||strcmp(input, "are you a machine?") == 0)
    {
      printf("Cbot : Ya, I'm a bot .\n");
    }
      else if (strcmp(input, "what day is it today?") == 0||strcmp(input, "what is the time?") == 0||strcmp(input,"what is the day today?")==0||strcmp(input,"time")==0||strcmp(input,"day")==0)
    {

      printf("Cbot : Date & Time: %s \n",ctime(&t));
    }
    else if (strcmp(input, "which languages can you speak?") == 0||strcmp(input, "what languages do you know?") == 0)
    {

      printf("Cbot : Well, I'm under training you can tell my builder to upgrade me .\n");
      printf("Email: shevyarora@outlook.com\n");
    }

    else
    {
      printf("Cbot : Sorry! I am unable to understand.\n");
      printf("Cbot : Well, I'm under training you can tell my builder to upgrade me .\n");
      printf("Email: shevyarora@outlook.com\n");
    }
  }
}
