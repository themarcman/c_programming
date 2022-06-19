/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// PASSWORD GENERATOR V2  ///////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

#define c0 *(tab_input)
#define c1 *(tab_input+1)
#define c2 *(tab_input+2)
#define c3 *(tab_input+3)

void afficher_tab(char *pt_tab,int long_tab);
void createur(char *mot_de_passe, char *characters,int l);

int main(void)
{
  srand(time(NULL));
  char input = 0;
  int m=0;
  int l=0;
  // Définition pour le tableau de choix menu
  char tab_input[4]="0000";
  // Définition des tableaux de charactères pour le mot de passe
  char special[] = "!&/()=~{}+*[]^'-_,.;:#@", uppercase[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",lowercase[27]="abcdefghijklmnopqrstuvwxyz",numbers[10]="0123456789";
  char specialnum[] = "!&/()=~{}+*[]^'-_,.;:#@0123456789";
  char special_lower[] = "!&/()=~{}+*[]^'-_,.;:#@abcdefghijklmnopqrstuvwxyz";
  char special_upper[] = "!&/()=~{}+*[]^'-_,.;:#@ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char lower_num[] = "abcdefghijklmnopqrstuvwxyz0123456789";
  char upper_num[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  char lower_num_special[] = "abcdefghijklmnopqrstuvwxyz0123456789!&/()=~{}+*[]^'-_,.;:#@";
  char upper_num_special[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!&/()=~{}+*[]^'-_,.;:#@";
  char upper_lower[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char upper_lower_special[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!&/()=~{}+*[]^'-_,.;:#@";
  char upper_lower_num[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  char all[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!&/()=~{}+*[]^'-_,.;:#@";

system("cls");

printf("      :::::::::     :::      ::::::::   ::::::::  :::       :::  ::::::::  :::::::::  :::::::::      \n");
printf("     :+:    :+:  :+: :+:   :+:    :+: :+:    :+: :+:       :+: :+:    :+: :+:    :+: :+:    :+:      \n");
printf("    +:+    +:+ +:+   +:+  +:+        +:+        +:+       +:+ +:+    +:+ +:+    +:+ +:+    +:+       \n");
printf("   +#++:++#+ +#++:++#++: +#++:++#++ +#++:++#++ +#+  +:+  +#+ +#+    +:+ +#++:++#:  +#+    +:+        \n");
printf("  +#+       +#+     +#+        +#+        +#+ +#+ +#+#+ +#+ +#+    +#+ +#+    +#+ +#+    +#+         \n");
printf(" #+#       #+#     #+# #+#    #+# #+#    #+#  #+#+# #+#+#  #+#    #+# #+#    #+# #+#    #+#          \n");
printf("###       ###     ###  ########   ########    ###   ###    ########  ###    ### #########\n\n");
printf("      ::::::::  :::::::::: ::::    ::: :::::::::: :::::::::      ::: ::::::::::: ::::::::  ::::::::: \n");
printf("    :+:    :+: :+:        :+:+:   :+: :+:        :+:    :+:   :+: :+:   :+:    :+:    :+: :+:    :+: \n");
printf("   +:+        +:+        :+:+:+  +:+ +:+        +:+    +:+  +:+   +:+  +:+    +:+    +:+ +:+    +:+  \n");
printf("  :#:        +#++:++#   +#+ +:+ +#+ +#++:++#   +#++:++#:  +#++:++#++: +#+    +#+    +:+ +#++:++#:    \n");
printf(" +#+   +#+# +#+        +#+  +#+#+# +#+        +#+    +#+ +#+     +#+ +#+    +#+    +#+ +#+    +#+    \n");
printf("#+#    #+# #+#        #+#   #+#+# #+#        #+#    #+# #+#     #+# #+#    #+#    #+# #+#    #+#     \n");
printf("########  ########## ###    #### ########## ###    ### ###     ### ###     ########  ###    ###      \n\n\n\n");

printf("Press any key to continue...");


getch();


system("cls");


  printf("Combien de caractères tu veux dans ton mot de passe?\n\n");
  printf("Rentre un chiffre :\n");
  scanf("%d",&l);

  char mot_de_passe[l];

  while(input!=13) // si on appui par sur la touch entrer
  {
    system("cls");

    printf("Choisis quel type de caractère pour ton mot de passe:\n\n");


    if (*(tab_input+input-49)=='1') *(tab_input+(int)input-49)='0'; // si valeur du tableau vaut le char 1 il la change au char 0
    else if (*(tab_input+input-49)=='0') *(tab_input+(int)input-49)='1'; // si valeur du tableau vaut le char 0 il la change au char 1
    // afficher_tab(tab_input,sizeof(tab_input));

    if ((c0=='0')&&(c1=='0')&&(c2=='0')&&(c3=='0'))
    {
      printf("1.Avec majuscules\n");
      printf("2.Avec minuscules\n");
      printf("3.Avec des chiffres\n");
      printf("4.Avec des caractères spéciaux\n");
      m=0;
    }

    if ((c0=='0')&&(c1=='0')&&(c2=='0')&&(c3=='1'))
    {
      printf("1.Avec majuscules\n");
      printf("2.Avec minuscules\n");
      printf("3.Avec des chiffres\n");
      printf("\033[0;31m"); // changes color to red
      printf("4.Avec des caractères spéciaux\n");
      printf("\033[0m");  //  resets the color to default
      m=1;
    }

    if ((c0=='0')&&(c1=='0')&&(c2=='1')&&(c3=='0'))
    {
      printf("1.Avec majuscules\n");
      printf("2.Avec minuscules\n");
      printf("\033[0;31m"); // changes color to red
      printf("3.Avec des chiffres\n");
      printf("\033[0m");  //  resets the color to default
      printf("4.Avec des caractères spéciaux\n");
      m=2;
    }

    if ((c0=='0')&&(c1=='0')&&(c2=='1')&&(c3=='1'))
    {
      printf("1.Avec majuscules\n");
      printf("2.Avec minuscules\n");
      printf("\033[0;31m"); // changes color to red
      printf("3.Avec des chiffres\n");
      printf("4.Avec des caractères spéciaux\n");
      printf("\033[0m");  //  resets the color to default
      m=3;
    }

    if ((c0=='0')&&(c1=='1')&&(c2=='0')&&(c3=='0'))
    {
      printf("1.Avec majuscules\n");
      printf("\033[0;31m"); // changes color to red
      printf("2.Avec minuscules\n");
      printf("\033[0m");  //  resets the color to default
      printf("3.Avec des chiffres\n");
      printf("4.Avec des caractères spéciaux\n");
      m=4;
    }

    if ((c0=='0')&&(c1=='1')&&(c2=='0')&&(c3=='1'))
    {
      printf("1.Avec majuscules\n");
      printf("\033[0;31m"); // changes color to red
      printf("2.Avec minuscules\n");
      printf("\033[0m");  //  resets the color to default
      printf("3.Avec des chiffres\n");
      printf("\033[0;31m"); // changes color to red
      printf("4.Avec des caractères spéciaux\n");
      printf("\033[0m");  //  resets the color to default
      m=5;
    }

    if ((c0=='0')&&(c1=='1')&&(c2=='1')&&(c3=='0'))
    {
      printf("1.Avec majuscules\n");
      printf("\033[0;31m"); // changes color to red
      printf("2.Avec minuscules\n");
      printf("3.Avec des chiffres\n");
      printf("\033[0m");  //  resets the color to default
      printf("4.Avec des caractères spéciaux\n");
      m=6;
    }

    if ((c0=='0')&&(c1=='1')&&(c2=='1')&&(c3=='1'))
    {
      printf("1.Avec majuscules\n");
      printf("\033[0;31m"); // changes color to red
      printf("2.Avec minuscules\n");
      printf("3.Avec des chiffres\n");
      printf("4.Avec des caractères spéciaux\n");
      printf("\033[0m");  //  resets the color to default
      m=7;
    }

    if ((c0=='1')&&(c1=='0')&&(c2=='0')&&(c3=='0'))
    {
      printf("\033[0;31m"); // changes color to red
      printf("1.Avec majuscules\n");
      printf("\033[0m");  //  resets the color to default
      printf("2.Avec minuscules\n");
      printf("3.Avec des chiffres\n");
      printf("4.Avec des caractères spéciaux\n");
      m=8;
    }

    if ((c0=='1')&&(c1=='0')&&(c2=='0')&&(c3=='1'))
    {
      printf("\033[0;31m"); // changes color to red
      printf("1.Avec majuscules\n");
      printf("\033[0m");  //  resets the color to default
      printf("2.Avec minuscules\n");
      printf("3.Avec des chiffres\n");
      printf("\033[0;31m"); // changes color to red
      printf("4.Avec des caractères spéciaux\n");
      printf("\033[0m");  //  resets the color to default
      m=9;
    }

    if ((c0=='1')&&(c1=='0')&&(c2=='1')&&(c3=='0'))
    {
      printf("\033[0;31m"); // changes color to red
      printf("1.Avec majuscules\n");
      printf("\033[0m");  //  resets the color to default
      printf("2.Avec minuscules\n");
      printf("\033[0;31m"); // changes color to red
      printf("3.Avec des chiffres\n");
      printf("\033[0m");  //  resets the color to default
      printf("4.Avec des caractères spéciaux\n");
      m=10;
    }

    if ((c0=='1')&&(c1=='0')&&(c2=='1')&&(c3=='1'))
    {
      printf("\033[0;31m"); // changes color to red
      printf("1.Avec majuscules\n");
      printf("\033[0m");  //  resets the color to default
      printf("2.Avec minuscules\n");
      printf("\033[0;31m"); // changes color to red
      printf("3.Avec des chiffres\n");
      printf("4.Avec des caractères spéciaux\n");
      printf("\033[0m");  //  resets the color to default
      m=11;
    }

    if ((c0=='1')&&(c1=='1')&&(c2=='0')&&(c3=='0'))
    {
      printf("\033[0;31m"); // changes color to red
      printf("1.Avec majuscules\n");
      printf("2.Avec minuscules\n");
      printf("\033[0m");  //  resets the color to default
      printf("3.Avec des chiffres\n");
      printf("4.Avec des caractères spéciaux\n");
      m=12;
    }

    if ((c0=='1')&&(c1=='1')&&(c2=='0')&&(c3=='1'))
    {
      printf("\033[0;31m"); // changes color to red
      printf("1.Avec majuscules\n");
      printf("2.Avec minuscules\n");
      printf("\033[0m");  //  resets the color to default
      printf("3.Avec des chiffres\n");
      printf("\033[0;31m"); // changes color to red
      printf("4.Avec des caractères spéciaux\n");
      printf("\033[0m");  //  resets the color to default
      m=13;
    }

    if ((c0=='1')&&(c1=='1')&&(c2=='1')&&(c3=='0'))
    {
      printf("\033[0;31m"); // changes color to red
      printf("1.Avec majuscules\n");
      printf("2.Avec minuscules\n");
      printf("3.Avec des chiffres\n");
      printf("\033[0m");  //  resets the color to default
      printf("4.Avec des caractères spéciaux\n");
      m=14;
    }
    if ((c0=='1')&&(c1=='1')&&(c2=='1')&&(c3=='1'))
    {
      printf("\033[0;31m"); // changes color to red
      printf("1.Avec majuscules\n");
      printf("2.Avec minuscules\n");
      printf("3.Avec des chiffres\n");
      printf("4.Avec des caractères spéciaux\n");
      printf("\033[0m");  //  resets the color to default
      m=15;
    }
    printf("\n\nUtilise les touches sur ton clavier de 1 à 4 pour selectionner les paramètres\n");

    input = getch();

    system("cls");
    if(input==27)
    {
      m=0;
      break;
    }
  }

  switch (m)
  {
    case 1:
      createur(mot_de_passe,special,l);
      break;
    case 2:
      createur(mot_de_passe,numbers,l);
      break;
    case 3:
      createur(mot_de_passe,specialnum,l);
      break;
    case 4:
      createur(mot_de_passe,lowercase,l);
      break;
    case 5:
      createur(mot_de_passe,special_lower,l);
      break;
    case 6:
      createur(mot_de_passe,lower_num,l);
      break;
    case 7:
      createur(mot_de_passe,lower_num_special,l);
      break;
    case 8:
      createur(mot_de_passe,uppercase,l);
      break;
    case 9:
      createur(mot_de_passe,special_upper,l);
      break;
    case 10:
      createur(mot_de_passe,upper_num,l);
      break;
    case 11:
      createur(mot_de_passe,upper_num_special,l);
      break;
    case 12:
      createur(mot_de_passe,upper_lower,l);
      break;
    case 13:
      createur(mot_de_passe,upper_lower_special,l);
      break;
    case 14:
      createur(mot_de_passe,upper_lower_num,l);
      break;
    case 15:
      createur(mot_de_passe,all,l);
      break;
    default:
    break;
  }
  return 0;
}


void afficher_tab(char *pt_tab,int long_tab)
{
  int i;
  for (i=0;i<long_tab;i++) printf("%c",*(pt_tab+i));
  printf("\n");
}

void createur(char *mot_de_passe, char *characters,int l)
{
  int i;
  printf("Your generated password is:\n\n");
  for (i=0;i<l;i++)
  {
    *(mot_de_passe+i) = characters[rand()%strlen(characters)-1];
    printf("%c",*(mot_de_passe+i));
  }
  printf("\n\nThank you, have a nice day! :)\n\n");
}
