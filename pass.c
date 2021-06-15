#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
    if(argc == 1){ //if there are no command line arguments
        printf("Usage: ./pass [adress, password] num");
        return 1;
    }
        if(strcmp(argv[1], "address") == 0){
            int* x = malloc(sizeof(int));
            int* y = malloc(sizeof(int));
            printf("%p%p\n", x, y);
            free(x);
            free(y);
            return 0;
    }
    else if(strcmp(argv[1], "password") == 0){
        if(argc == 3){
            int key = atoi(argv[2]);
            char* address = "0xc242a00xc242c0";//address goes here from other function
            int n = strlen(address);
            printf("Password: ");
                for(int i = 0; i < n; i++){
                    char currentChar = address[i];
                    int x = i * i * i;
                    char newChar = (currentChar + key + x) % 126;
                        if(newChar < 33){
                            newChar += 33;
                        }
                        if(newChar == 34 || newChar == 39){
                            newChar += 1;
                        }

                printf("%c", newChar);
                }
        }
    }
    else{
        printf("Usage: ./pass [adress, password] num");
    }
    printf("\n");
}
