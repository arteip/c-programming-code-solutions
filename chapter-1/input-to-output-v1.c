#include <stdio.h>

main () {
    int c;
    
    while ((c = getchar()) != EOF) {
        putchar(c);
        c = getchar();
      //  printf("%d\n", EOF);
    }
}
