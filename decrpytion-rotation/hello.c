#include <stdio.h>
#include <stdlib.h>
void zeros(int*alphnos);
int main(){
    int i=0;
    int encrypt=-26;
    char message[]="DAHHK";
    int N= ((sizeof(message)/ sizeof(message[0])));
    while(encrypt<26)
    {
    for(i=0;i<N-1;i++){
    message[i]=message[i]-65;
    if((message[i]-encrypt)<0){
    message[i]= ((message[i] - encrypt)+26)% 26;
    message[i]= message[i]+65;
    }
   else 
    message[i]= ((message[i] - encrypt))% 26;
    message[i]= message[i]+65;
    }
    encrypt++;
    printf("%s\n", message);
}

    return 0;
}
