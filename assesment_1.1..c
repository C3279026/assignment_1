#include <stdio.h>
#include <stdlib.h>
void zeros(int*alphnos);
int main(){
    int a;
    int b;
    int i=0;
    int encrypt=1;
    char message[]="Z";
    int N = ((sizeof(message)/ sizeof(message[0])));
    printf("%d\n",N);
    for(i=0;i<N-1;i++){
    //printf("%d\n",message[i]);
    message[i]=message[i]-65;
    //printf("%d\n", message[i]);
    if(message[i]-encrypt<0){
    message[i]= ((message[i] - encrypt)+26)% 26;
    //printf("%d\n", message[i]);
    message[i]= message[i]+65;
     printf("%c,%d\n", message[i], message[i]);
    }
   else 
    message[i]= ((message[i] - encrypt))% 26;
   // printf("%d\n", message[i]);
    message[i]= message[i]+65;
     printf("%c,%d\n", message[i], message[i]);
    }
    return 0;
}
