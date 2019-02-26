//Haoua Oumarou Moussa
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, int argv[])
{
    if (argc == 2)
    {
        string h;
        int o=atoi(argv[1]);
        h=get_string("plaintext: ");

        printf("cyphertext: ");
        for(int i=0; i<strlen(h); i++)
        if(isalpha(h[i]))
        {
            if(islower(h[i]))
            {
                printf("%c",(((h[i]-97)+k)%26)+97);
            }
            if(isupper(h[i]))
            {
                printf("%c",(((h[i]-65)+k)%26)+65);
            }
        }
        else
        {
            printf("%c", h[i]);
        }
        printf("\n");
    }
    return 0;
}
