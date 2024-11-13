#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

void newCMD(char *);

void newCMD(char * str){
    printf("Enter a command for your next action: \n");
    fgets(str, MAX, stdin);
}

int main(void){
    char command[MAX];
    char stop[] = "stop";
    do{
        newCMD(command);
    }while(strncmp(command, stop, 4));



    return 0;
}