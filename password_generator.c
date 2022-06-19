/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// PASSWORD GENERATOR ///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

void afficher_tab(char *tab,int taille);


int main(void)
{
  srand(time(NULL));
  int c = 0,i;
  char characters[]="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM!&/()=~{}+*[]^'-_,.;:#@";
  // char uppercase[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",lowercase[27]="abcdefghijklmnopqrstuvwxyz",numbers[10]={48,49,50,51,52,53,54,55,56,57},special[]="!\"#$\%'()*+,-./:;<=>?@[\\]^_{|}~";
  // char choix='0';
  system("clear");
  //printf("\033[0;31m"); //changes color to red using ANSI
  // printf("Choisir type de mot de passe:\n\n1.Avec majuscules\n2.Avec minuscules\n3.Avec chiffres\n4.Avec charactères spéciaux\n");
  printf("Combien de charactères?\n\n");
  printf("Entrez un nombre:\n");
  scanf("%d",&c);
  system ("clear");
  printf("Ton mot de passe:\n\n\n");
  char mot_de_passe[c];
  for (i=0;i<c;i++)
  {
    *(mot_de_passe+i) = characters[rand()%sizeof(characters)-1];
    printf("%c",*(mot_de_passe+i));
  }
  printf("\n\n\n");



  //
  // while((choix=='0')||(choix!=13))
  // {
  //   system("stty raw");
  //   choix = getchar();
  //   system("stty cooked");
  //
  //   system("clear");
  //   if (choix=='1')   // single quotes because only one character, we use " for strings so "1" would be [1,\0]
  //   {
  //     printf("\n\n\n%d\n\n\n",*tab_choix);
  //     *(tab_choix)= ~(*(tab_choix)); // toggles value of table
  //     printf("\n\n\n%d\n\n\n",*tab_choix);
  //     // printf("Choisir type de mot de passe:\n\n");
  //     // printf("\033[0;31m"); // changes color to red
  //     // printf("1.Avec majuscules\n");
  //     // printf("\033[0m");  //  resets the color to default
  //     // printf("2.Avec minuscules\n3.Avec chiffres\n4.Avec charactères spéciaux\n");
  //   }
  //   if (choix=='2')
  //   {
  //     printf("\n\n\n%d\n\n\n",*(tab_choix+1));
  //     *(tab_choix+1)= ~(*(tab_choix)); // toggles value of table
  //     printf("\n\n\n%d\n\n\n",*(tab_choix+1));
  //     // printf("Choisir type de mot de passe:\n\n1.Avec majuscules\n");
  //     // printf("\033[0;31m"); // changes color to red
  //     // printf("2.Avec minuscules\n");
  //     // printf("\033[0m");  //  resets the color to default
  //     // printf("3.Avec chiffres\n4.Avec charactères spéciaux\n");
  //   }
  //   if (choix=='3')
  //   {
  //     printf("\n\n\n%d\n\n\n",*(tab_choix+2));
  //     *(tab_choix+2)= ~(*(tab_choix)); // toggles value of table
  //     printf("\n\n\n%d\n\n\n",*(tab_choix+2));
  //     // printf("Choisir type de mot de passe:\n\n1.Avec majuscules\n2.Avec minuscules\n");
  //     // printf("\033[0;31m"); // changes color to red
  //     // printf("3.Avec chiffres\n");
  //     // printf("\033[0m");  //  resets the color to default
  //     // printf("4.Avec charactères spéciaux\n");
  //   }
  //   if (choix=='4')
  //   {
  //     *(tab_choix+3)= ~(*(tab_choix)); // toggles value of table
  //     // printf("Choisir type de mot de passe:\n\n1.Avec majuscules\n2.Avec minuscules\n3.Avec chiffres\n");
  //     // printf("\033[0;31m"); // changes color to red
  //     // printf("4.Avec charactères spéciaux\n");
  //     // printf("\033[0m");  //  resets the color to default
  //   }
  //   printf("Choisir type de mot de passe:\n\n");
  //
  // }


  return 0;
}

void afficher_tab(char *tab,int taille)
{
  int i;
  for (i=0;i<taille;i++) printf("%c",*(tab+i));
  printf("\n");
}
