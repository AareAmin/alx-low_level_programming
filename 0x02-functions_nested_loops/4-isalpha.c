#include "main.h"

/**
 * _isalpha - tests whether a character is from the English alphabet.
 *@c : character to be checked
 * Return: 1 if character is an English character
 * 0 if it is not an English character
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
