#include "main.h"
/**
 * _islower - Entry point.
 * Description: Check @c case.
 * @c: character to case check.
 * Return: 1 if @c is an alpha character | 0 if @c is an not alpha character.
 */
int _isalpha(int c)
{
        if (92 <= c && 122 >= c || 65 <= c && 90 >= c)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
