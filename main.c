#include "ft_fillit.h"

int		main()
{
    char	*str[26];
    int 	n;

    str[2] = "\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0A";
    str[1] = "\1\1\1\1\0\0\0\0\0\0\0\0\0\0\0\0B";
    str[3] = "\1\1\1\0\0\0\1\0\0\0\0\0\0\0\0\0C";
    str[4] = "\0\1\1\0\1\1\0\0\0\0\0\0\0\0\0\0D";
    str[5] = "\1\1\0\0\1\1\0\0\0\0\0\0\0\0\0\0E";
    str[6] = "\1\1\0\0\0\1\1\0\0\0\0\0\0\0\0\0F";
    str[7] = "\1\1\0\0\0\1\0\0\0\1\0\0\0\0\0\0G";
    str[8] = "\1\1\1\0\0\1\0\0\0\0\0\0\0\0\0\0H";
    


//    str[1] = "\1\1\0\0\0\1\0\0\0\1\0\0\0\0\0\0A";
//    str[4] = "\1\1\0\0\0\1\1\0\0\0\0\0\0\0\0\0D";
//    str[3] = "\1\0\0\0\1\1\1\0\0\0\0\0\0\0\0\0C";
//    str[2] = "\1\1\1\1\0\0\0\0\0\0\0\0\0\0\0\0B";
//    str[5] = "\1\1\0\0\0\1\1\0\0\0\0\0\0\0\0\0E";
//    str[6] = "\1\1\0\0\0\1\0\0\0\1\0\0\0\0\0\0G";
//    str[7] = "\0\1\1\0\1\1\0\0\0\0\0\0\0\0\0\0D";
//    str[8] = "\1\1\1\0\0\1\0\0\0\0\0\0\0\0\0\0H";

    // str[1] = "\1\0\0\0\1\0\0\0\1\1\0\0\0\0\0\0A";
    // str[2] = "\0\1\0\0\0\1\0\0\1\1\0\0\0\0\0\0B";
    // str[3] = "\1\1\0\0\0\1\1\0\0\0\0\0\0\0\0\0C";
    // str[4] = "\0\1\1\0\1\1\0\0\0\0\0\0\0\0\0\0D";
    // str[2] = "\1\1\0\0\1\1\0\0\0\0\0\0\0\0\0\0E";
    // str[6] = "\1\1\0\0\0\1\1\0\0\0\0\0\0\0\0\0F";
    // str[7] = "\1\1\0\0\0\1\0\0\0\1\0\0\0\0\0\0G";
    // str[8] = "\1\1\1\0\0\1\0\0\0\0\0\0\0\0\0\0H";
    n = 8;
    ft_fillit(str, n);
    return 0;
}