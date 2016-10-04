#include <stdio.h>
#include <stdlib.h>

void menu(); void length(); void temperature(); void area(); void volume(); void weight(); void time(); void numeral();

int main(void){
    system("clear");
    menu();
    return 0;
}

void menu(){
  char option;
  printf("[+]    UNIT CONVERTER    [+]\n");
  printf("\n(L)ength\n(T)emperature\n(A)rea\n(V)olume\n(W)eight\n(t)ime\n(N)umeral system\n");
  printf("\nSelect an option: ");
  scanf(" %c", &option);
  switch (option) {
    case 'L':length();break;
    case 'T':temperature();break;
    case 'A':area();break;
    case 'V':volume();break;
    case 'W':weight();break;
    case 't':time();break;
    case 'N':numeral();break;
    default:printf("\n[-]    INCORRECT OPTION    [-]\n");break;
  }
}

void length(){
  char FromOption, ToOption, Return;
  float FromValue, ToValue;
  system("clear");
  printf("[+]    UNIT CONVERTER    [+]\n");
  printf("\n\nFROM:\n\n");
  printf("(M)eter\n(K)ilometer\n(C)entimeter\n(m)ilimeter\n(N)anometer\nM(i)le\n(Y)ard\n(F)oot\n(I)nch\n(L)ight Year\n");
  printf("\nUnit: ");
  scanf(" %c", &FromOption);
  printf("\nValue: ");
  scanf("%f", &FromValue);
  //pass every unit to meters
  switch (FromOption) {
    case 'M':FromValue = FromValue;break;
    case 'K':FromValue = FromValue * 1000;break;
    case 'C':FromValue = FromValue / 100;break;
    case 'm':FromValue = FromValue / 1000;break;
    case 'N':FromValue = FromValue / 1000000000;break;
    case 'i':FromValue = FromValue * 1609.35;break;
    case 'Y':FromValue = FromValue * 0.9144;break;
    case 'F':FromValue = FromValue / 3.2808;break;
    case 'I':FromValue = FromValue / 39.37;break;
    case 'L':FromValue = FromValue * 9460660000000000;break;
    default:printf("\n[-]    INCORRECT OPTION    [-]\n");break;
  }
  printf("\n\nTO:\n");
  printf("(M)eter\n(K)ilometer\n(C)entimeter\n(m)ilimeter\n(N)anometer\nM(i)le\n(Y)ard\n(F)oot\n(I)nch\n(L)ight Year\n");
  printf("\nUnit: ");
  scanf(" %c", &ToOption);
  switch (ToOption) {
    case 'M':ToValue = FromValue;break;
    case 'K':ToValue = FromValue / 1000;break;
    case 'C':ToValue = FromValue * 100;break;
    case 'm':ToValue = FromValue * 1000;break;
    case 'N':ToValue = FromValue * 1000000000;break;
    case 'i':ToValue = FromValue / 1609.35;break;
    case 'Y':ToValue = FromValue / 0.9144;break;
    case 'F':ToValue = FromValue * 3.2808;break;
    case 'I':ToValue = FromValue * 39.37;break;
    case 'L':ToValue = FromValue / 9460660000000000;break;
    default:printf("\n[-]    INCORRECT OPTION    [-]\n");break;
  }
  printf("\n[+] RESULT: %.3f [+]\n", ToValue);
  printf("\nReturn to menu? (Y/N)\n");
  scanf(" %c", &Return);
  if (Return == 'Y' || Return == 'y')
    main();
  else
    exit(0);
}
void temperature(){
  char FromOption, ToOption, Return;
  float FromValue, ToValue;
  system("clear");
  printf("[+]    UNIT CONVERTER    [+]\n");
  printf("\n\nFROM:\n");
  printf("(C)elsius\n(K)elvin\n(F)arenheit\n");
  printf("\nUnit: ");
  scanf(" %c", &FromOption);
  printf("\nValue: ");
  scanf("%f", &FromValue);
  // pass every unit to celsius
  switch (FromOption) {
    case 'C':FromValue = FromValue;break;
    case 'K':FromValue = FromValue - 273.15;break;
    case 'F':FromValue = 0.555555556 * (FromValue - 32);break;
    default:printf("\n[-]    INCORRECT OPTION    [-]\n");break;
  }
  printf("\n\nTO:\n");
  printf("(C)elsius\n(K)elvin\n(F)arenheit\n");
  printf("\nUnit: ");
  scanf(" %c", &ToOption);
  switch (ToOption) {
    case 'C':ToValue = FromValue;break;
    case 'K':ToValue = FromValue + 273.15;break;
    case 'F':ToValue = (1.8 * FromValue) + 32;break;
    default:printf("\n[-]    INCORRECT OPTION    [-]\n");break;
  }
  printf("\n[+] RESULT: %.3f [+]\n", ToValue);
  printf("\nReturn to menu? (Y/N)\n");
  scanf(" %c", &Return);
  if (Return == 'Y' || Return == 'y')
    main();
  else
    exit(0);
}
void area(){
  char FromOption, ToOption, Return;
  float FromValue, ToValue;
  system("clear");
  printf("[+]    UNIT CONVERTER    [+]\n");
  printf("\n\nFROM:\n\n");
  printf("Square (M)eter\nSquare (K)ilometer\nSquare (C)entimeter\nSquare (m)ilimeter\n(H)ectare\nSquare M(i)le\nSquare (Y)ard\nSquare (F)oot\nSquare (I)nch\n(A)cre\n");
  printf("\nUnit: ");
  scanf(" %c", &FromOption);
  printf("\nValue: ");
  scanf("%f", &FromValue);
  //pass every unit to square meters
  switch (FromOption) {
    case 'M':FromValue = FromValue;break;
    case 'K':FromValue = FromValue * 1000000;break;
    case 'C':FromValue = FromValue / 10000;break;
    case 'm':FromValue = FromValue / 1000000;break;
    case 'H':FromValue = FromValue * 10000;break;
    case 'i':FromValue = FromValue * 2589990;break;
    case 'Y':FromValue = FromValue / 0.83612736;break;
    case 'F':FromValue = FromValue / 0.09290304;break;
    case 'I':FromValue = FromValue / 0.00064516;break;
    case 'A':FromValue = FromValue * 4046.8564;break;
    default:printf("\n[-]    INCORRECT OPTION    [-]\n");break;
  }
  printf("\n\nTO:\n");
  printf("Square (M)eter\nSquare (K)ilometer\nSquare (C)entimeter\nSquare (m)ilimeter\n(H)ectare\nSquare M(i)le\nSquare (Y)ard\nSquare (F)oot\nSquare (I)nch\n(A)cre\n");
  printf("\nUnit: ");
  scanf(" %c", &ToOption);
  switch (ToOption) {
    case 'M':ToValue = FromValue;break;
    case 'K':ToValue = FromValue / 1000000;break;
    case 'C':ToValue = FromValue * 10000;break;
    case 'm':ToValue = FromValue * 1000000;break;
    case 'H':ToValue = FromValue / 10000;break;
    case 'i':ToValue = FromValue / 2589990;break;
    case 'Y':ToValue = FromValue * 0.83612736;break;
    case 'F':ToValue = FromValue * 0.09290304;break;
    case 'I':ToValue = FromValue * 0.00064516;break;
    case 'A':ToValue = FromValue / 4046.8564;break;
    default:printf("\n[-]    INCORRECT OPTION    [-]\n");break;
  }
  printf("\n[+] RESULT: %.3f [+]\n", ToValue);
  printf("\nReturn to menu? (Y/N)\n");
  scanf(" %c", &Return);
  if (Return == 'Y' || Return == 'y')
    main();
  else
    exit(0);
}
void volume(){
  char FromOption, ToOption, Return;
  float FromValue, ToValue;
  system("clear");
  printf("[+]    UNIT CONVERTER    [+]\n");
  printf("\n\nFROM:\n\n");
  printf("Cubic (M)eter\nCubic (K)ilometer\nCubic (C)entimeter\nCubic (m)ilimeter\n(L)iter\n mili(l)iter\nCubic M(i)le\nCubic (Y)ard\nCubic (F)oot\nCubic (I)nch\nU.S (G)allon\n");
  printf("\nUnit: ");
  scanf(" %c", &FromOption);
  printf("\nValue: ");
  scanf("%f", &FromValue);
  //pass every unit to cubic meters
  switch (FromOption) {
    case 'M':FromValue = FromValue;break;
    case 'K':FromValue = FromValue * 1000;break;
    case 'C':FromValue = FromValue / 100;break;
    case 'm':FromValue = FromValue / 1000;break;
    case 'L':FromValue = FromValue / 1000;break;
    case 'l':FromValue = FromValue / 1000000;break;
    case 'i':FromValue = FromValue * 1609.35;break;
    case 'Y':FromValue = FromValue * 0.9144;break;
    case 'F':FromValue = FromValue / 3.2808;break;
    case 'I':FromValue = FromValue / 39.37;break;
    case 'G':FromValue = FromValue / 264.1721;break;
    default:printf("\n[-]    INCORRECT OPTION    [-]\n");break;
  }
  printf("\n\nTO:\n");
  printf("Cubic (M)eter\nCubic (K)ilometer\nCubic (C)entimeter\nCubic (m)ilimeter\n(L)iter\n mili(l)iter\nCubic M(i)le\nCubic (Y)ard\nCubic (F)oot\nCubic (I)nch\nU.S (G)allon\n");
  printf("\nUnit: ");
  scanf(" %c", &ToOption);
  switch (ToOption) {
    case 'M':ToValue = FromValue;break;
    case 'K':ToValue = FromValue / 1000;break;
    case 'C':ToValue = FromValue * 100;break;
    case 'm':ToValue = FromValue * 1000;break;
    case 'L':ToValue = FromValue * 1000;break;
    case 'l':ToValue = FromValue * 1000;break;
    case 'i':ToValue = FromValue / 1609.35;break;
    case 'Y':ToValue = FromValue / 0.9144;break;
    case 'F':ToValue = FromValue * 3.2808;break;
    case 'I':ToValue = FromValue * 39.37;break;
    case 'G':ToValue = FromValue * 264.1721;break;
    default:printf("\n[-]    INCORRECT OPTION    [-]\n");break;
  }
  printf("\n[+] RESULT: %.3f [+]\n", ToValue);
  printf("\nReturn to menu? (Y/N)\n");
  scanf(" %c", &Return);
  if (Return == 'Y' || Return == 'y')
    main();
  else
    exit(0);
}
void weight(){

}
void time(){

}
void numeral(){

}
