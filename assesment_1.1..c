#include <stdio.h>

int main(void)
{
    int count;
    int n=0;
    int b;
    int encrypt=2;
    //alphnos=alphabet numbers
    int alphnos[26];
    char message[]="HELLO";//enter message here
   //this for loop creates an array with numbers 0-25
        for (count=0;count<26;count++)
        {
        // 'A' is an ascii +count moves that per loop thus assigning a capital letter starting at 0 
        alphnos[count]='A' +count;
        // finds new letter
        b=alphnos[count]+encrypt;
            if(b>90)
            {
            b=65+(count-(26-encrypt));// works for overflow
            } 
        }
        for(n=0; n<5;n++){
        message[n]=b+message;
        printf("%c\n", message);
        }

        return 0;
}

//y=((x+k)%26) // y is the new letter and x is the non encyrpted letter