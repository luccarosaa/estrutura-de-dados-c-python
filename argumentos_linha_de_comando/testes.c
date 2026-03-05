#include <stdio.h>

int main(int argc, char *argv[argc+1]) {
    printf("Numero de argumentos: %d\n", argc);
    
    for(int i=0; i < argc; ++i) {
        printf("argv[%d]=%s\n", i, argv[i]);
    }
    
        return 0;
}