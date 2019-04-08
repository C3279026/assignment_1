#include <stdio.h>

int main(void)
{
    int count;
    int a;
    int b;
    int c;
    int encrypt=2;
    //alphnos=alphabet numbers
    int alphnos[26];
    char message[]="HELLO";//enter message here
    int newmessage[6];
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
        
        return 0;
}

//y=((x+k)%26) // y is the new letter and x is the non encyrpted letter