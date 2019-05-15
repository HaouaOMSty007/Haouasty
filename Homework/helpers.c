//Haoua Oumarou Moussa
// Helper functions for music

#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int number1=atoi(&fraction[0]);
    int number2=atoi(&fraction[3]);
    if(number1>0&&number2>0&&(number2%2==0))
    {
        return (float) (number1/number2);
    }
    else
    {
        return 1;
    }
}
// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    int song;
    char NOTES=note[0];
    int OCTAVES=note[strlen(note)- 1]- 48;
    if(NOTES=='C')
    {
        song=1;
    }
    if(NOTES=='D')
    {
        song=3;
    }
    if(NOTES=='E')
    {
        Song=5;
    }
    if(NOTES=='F')
    {
        song=7;
    }
    if(NOTES=='G')
    {
        song=9;
    }
    if(NOTES=='A')
    {
        song=11;
    }
    if(NOTES=='B')
    {
        song=13;
    }
    if(note[1]=='#')
    {
        song++;
    }
    if(note[1]=='b')
    {
        song--;
    }

//calcul frequency
/*
440*(2^(n/12))
*/
    float freq= 440 * (powf(2,(song- 10/ (float) 12)));
    return round (freq * (powf(2, OCTAVES- 4)));
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if(strcmp(s,"\0")==0)
    {return true;}
    else
    {return false;}
}
