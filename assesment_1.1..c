#include <stdio.h>

int main(void)
{
    int count;
    int b;
    int encrypt=13;
    //int message[]="type message in here";// message area
    //alphnos=alphabet numbers
    int alphnos[26];// creating an array with 0-25 slots
    //this for loop creates an array with numbers 0-25
   
    for (count=0;count<26;count++)
    {
        alphnos[count]='A' +count;// 'A' is an ascii +count moves that per loop thus assigning a capital letter starting at 0
        printf("%c",alphnos[count]); //%c means print the letter associated with at ascii
        b=alphnos[count]+encrypt;
        if(b>90){
        b=65+(count-(26-encrypt));
        }
        printf("%c\n", b);
    }
    
    return 0;
}//y=((x+k)%26) // y is the new letter and x is the non encyrpted letter