#include "main.h"

int main(int argc, char **argv){
        int *final = array_range(10, 34);
        for (int i = 0; i < 26; i++)
                printf("%d ", final[i]);
}