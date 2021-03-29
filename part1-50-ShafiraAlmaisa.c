#include <stdio.h>

int main() {

char nama[30];
int umur;

  printf("Haloo\n");
  printf("O\nL\n");
  printf("Apa Kabar?\n");

  puts("Tell me your name: ");
  fgets(nama, sizeof(nama),stdin);

  printf("\nsalute, %s", nama);
  puts("Au Revoir");

  return 0;
}
