#include <stdio.h>

void clean_stdin() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
    // here getchar() keeps consuming until either \n or EOF, loop body does
    // nothing
  };
}

int main() {
  char string_1[50], string_2[50];
  printf("Enter one word: ");
  scanf("%s", string_1); 
  clean_stdin();

  printf("%s \n", string_1);

  printf("Enter a sentence: ");
  fgets(string_2, sizeof(string_2), stdin);

  printf("%s \n", string_2);

  return 0;
}

