#include <stdio.h>

int main() {

int age, jwb;

  printf("Welcome to Zem Shop!\n");
  printf("How old are you? ");
  scanf("%d", &age);

  if (age >= 18) {
    printf("is it your first purchase(Y/N)? ");
    scanf(" %c", &jwb);

      if (jwb == 'Y' || jwb == 'y') {
        printf("Congrats! You get 10% bonus\nLet's check the price list!\n");
      } else {
        printf("Let's start shopping!\n");
      }

      printf("Zem has been sent! thanks for buying.");

  } else {
    printf("sorry, you have to get permission from your parents first\nthanks for visiting!");
  }

  return 0;
}
