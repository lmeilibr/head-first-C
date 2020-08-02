//
// Created by Leandro Meili on 02/08/20.
//
#include <stdio.h>

void fortune_cookie(char msg[]){
    printf("Message reads: %s\n", msg);
}

int main(){
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
}