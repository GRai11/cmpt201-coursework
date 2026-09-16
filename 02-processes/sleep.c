#include <stdio.h>
#include <unistd.h>

int main() {
  printf("Hello World!\n");
  for (int i = 0; i < 10; i++) {
    printf("Still going\n");
    fflush(stdout);
    sleep(2);
  }
  printf("done");
}
