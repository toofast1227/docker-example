#include <stdio.h>

#define BUFFER_SIZE 4096

void putf(const char* name) {
    char buffer[BUFFER_SIZE] = "";
    FILE* file = fopen(name, "r");
    int n = 0;
    do {
        n = fread(buffer, 1, BUFFER_SIZE, file);
        fwrite(buffer, 1, n, stdout);
        fflush(stdout);
    } while (n == BUFFER_SIZE);
    fclose(file);
}

int main(int argc, char** argv) {
    if (argc > 1) {
        int i = 1;
        for (; i < argc; i++) {
            putf(argv[i]);
        }
    } else {
        putf("/doc/cat/README.md");
    }
    return 0;
}
