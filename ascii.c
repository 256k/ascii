/*

ascii
=====

command line program to print out the entire ascii table if no argument given
or print out the corresponding ascii values of each character typed in the argument string

by 256k

*/

#include <stdio.h>

int main(int argc, char **argv)
{
        if (!argv[1])
        {
                for (int i = 0; i < 128; i++) 
                {
                        printf("%d \t %x \t %c\n", i,i,i);
                }        
        } else 
        { 
                int i = 0;
                do {
                printf("%d \t %x \t %c\n", argv[1][i], argv[1][i],argv[1][i]); 

                i++;
                } while(argv[1][i]);
        }                   	

	return 0;
}
