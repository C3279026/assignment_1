#include <stdio.h>

int main(void)
{
    int count;
    int k;
    //int letters[] = {a, b, c, d, e, f, g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
    //alphnos=alphabet numbers
    int alphnos[26];// creating an array with 0-25 slots
    //this for loop creates an array with numbers 0-25
   


//y=((x+k)%26) // y is the new letter and x is the non encyrpted letter



    for (count=0;count<26;count++)
    {
        alphnos[count]='A' +count;// 'A' is an ascii +count moves that per loop thus assigning a capital letter
        printf("%c\n",alphnos[count]); //%c means print the letter associated with at ascii

    }
    return 0;
}