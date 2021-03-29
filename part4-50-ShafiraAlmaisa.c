#include <stdio.h>

int main() {

int straw, i, x, y;

  printf("ayo minum boba!\n");
  printf("Seberapa panjang sedotan yang anda inginkan? ");
  scanf("%d", &straw);

  printf("\t ___\n");
  for (i = 0; i <= straw; i++) {
      printf(" \t|   |\n ");

  }

  printf("------------------\n");

  for (y = 0; y <= 7; y++) {
    printf("|  \t\t  |\n");
  }

  for (size_t x = 0; x < 2; x++) {
    printf("| O O O O O O O O |\n");
    printf("|O O O O O O O O O|\n");
  }

  printf("------------------\n");

  printf("\nEnjoy your drink! <3\nthanks for buying~");
  return 0;
}
