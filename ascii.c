/*

ascii
=====

command line program to print out the entire ascii table if no argument given
or print out the corresponding ascii values of each character typed in the argument string

by 256k

*/

#include <stdio.h>

char *SPECIAL_CHARS[] = {
"NUL", 
"SOH", 
"STX", 
"ETX", 
"EOT", 
"ENQ", 
"ACK", 
"BEL", 
"BS ", 
"TAB", 
"LF ", 
"VT ", 
"FF ", 
"CR ", 
"SO ", 
"SI ", 
"DLE", 
"DC1", 
"DC2", 
"DC3", 
"DC4", 
"NAK", 
"SYN", 
"ETB", 
"CAN", 
"EM ", 
"SUB", 
"ESC", 
"FS ", 
"GS ", 
"RS ", 
"US ",
"SPC"
}; 

int main(int argc, char **argv)
{
        if (!argv[1])
        {
                for (int i = 0; i < 128; i++) 
                {
                        if (i < 33 ) {
                                printf("%d \t %x \t %s\n", i,i,SPECIAL_CHARS[i]);
                        } else if (i == 127) {
                        printf("%d \t %x \t %s\n", i,i,"DEL");
                        } else {
                        printf("%d \t %x \t %c\n", i,i,i);
                        }
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
