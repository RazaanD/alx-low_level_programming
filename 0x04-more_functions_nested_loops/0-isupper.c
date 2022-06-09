#include "main.h"

/**
 * _isupper - Check if the character is Uppercase
 * @c: The character to check
 *
 * Return: if is upper return 1.
 * On false 0
 */

int _isupper(int c)
{
<<<<<<< HEAD
	if (c == 'A')
    		return (1);
    	else if(c == 'a')
 		return (0);
=======
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
>>>>>>> b6f8ce62f2b17d57233ec3e8e960495c28ab1fe8
}
