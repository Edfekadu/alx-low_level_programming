#include "main.h"

/**
 *_islower -checks for lower character
 *@c:the charcter to be checked
 *return : 1 fpor lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c>= 97 && c<=122)
	{
		return (1);
	}
	return (0);
}