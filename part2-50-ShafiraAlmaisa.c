#include <stdio.h>

int main() {
int a, b;

  printf("masukkan angka:");
  scanf("%d", &a);

  b = a;

//contoh untuk prefix dan postfix

  printf("3 angka yang berdekatan!\n");
  printf("%d\t%d\t%d", --a, b++, b);

// contoh untuk konstanta

  const char TANDA = '#';
  printf(" \n%c\n", TANDA);

// contoh untuk casting

  int c;

  printf("tampilkan bentuk desimal dari angka : ");
  scanf("%d", &c);

  printf("%.2f", (float) c);
  return 0;
}
