#include <stdio.h>
#include <string.h>

void print(char name[]){
    for (int i=0;name[i]!='\0';i++){           //OR BY i<=strlen(name)
        printf("%c\n",name[i]);
    }
}

int main(){
    char firstName[]="Shradha";
    char lastName[]="Khapra";
    printf("%c\n",firstName[0]);
    printf("%c\n",firstName[6]);
    printf("%c\n",firstName[7]);
    printf("Now By Loop:)\n\n");
    print(firstName);
    print(lastName);
}
