#include "main.h"
/**
 *rev_string - revesed string
 *@s: String input
*/
void rev_string(char *s)
{
	int A = s[0];
	int B = 0;
	int C;

	while (s[B] != '\0')
	B++;
	for (C = 0; C < B; C++)
	{
		B--;
		A = s[C];
		s[C] = s[B];
		s[B] = A;
	}
}
