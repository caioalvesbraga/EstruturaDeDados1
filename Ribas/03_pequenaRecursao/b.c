#include <stdio.h>
#include <string.h>
int countTheXs(char*string){
    int counter=0;
    if(*string=='x'){
        counter++;
        return counter+ countTheXs(string+1);
    }
    else{
        if(*string=='\0'){
            return 0;
        }
        return countTheXs(string+1);
    }
}

int printTheXs(int numberOfXs){
    if(numberOfXs > 0){
        printf("%c",'x');
        return printTheXs(numberOfXs -1);
    }
    if(numberOfXs == 0){
        return 0;
    }
}

void printWithoutTheXs(char*string){
    if(*string!='x' && *string!='\0'){
        printf("%c",string[0]);
        if(*string+1!='\0'){
            printWithoutTheXs(string+1);
        }
    }
    if(*string=='x'){
        if(*string+1!='\0'){
            printWithoutTheXs(string+1);
        }
    }
    else{
        return;
    }

}

int main(){
    char phrase[110];
    scanf("%s",phrase);
    int amountOfXs = countTheXs(phrase);
    printWithoutTheXs(phrase);
    printTheXs(amountOfXs);
    printf("\n");
}
