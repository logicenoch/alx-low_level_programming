#include "main.h"

int main(int argc, char **argv){
        char *s1 = "Hello";
        char *s2 = "Men";

        char *final = string_nconcat(s1, s2, 2);
        printf("%s", final);
}