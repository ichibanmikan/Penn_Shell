#include "Penn_Shell.h"

int main(){
    while(true){
        char* str=NULL;
        size_t sz=32;        
        size_t num=getline(&str, &sz, stdin);
        if(num==-1){
            printf("error shell cmd read\n");
            break;
        }
        num--;

    }
    return 0;
}