#include <stdio.h>
#include <string.h>

int main() {
   // printf() displays the string inside quotation

   char sentence[100];
   char reverse[100];

   printf("Input the sentence to reverse: ");
   scanf("%[^\n]", &sentence);

   int counter = 0;
   for(int i = strlen(sentence)-1; i >=0; i--){
      reverse[counter++] = sentence[i];
   }

   printf("\n%s\n", reverse);
   
   
   return 0;
}
