#if 0
#include <stdio.h>
int main(int argc, char *argv[]) {
    printf("argc: %d\n", argc);
    
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    return 0;
}
#endif

#include <stdio.h>
int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        printf("Hello %s\n", argv[i]);
    }
    return 0;
}
