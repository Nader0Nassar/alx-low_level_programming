#include "main.h"
#include <stdlib.h>

int number_of_Words(char *s);
/**
 * **strtow - This function can be used to split string
 *            into two words
 * @str: splitted string
 * Return: pointer or Null
 */
char **strtow(char *str)
{
	int index1 = 0, index2 = 0, length = 0, number_of_words, n = 0, S, E;
	char **array, *trans;

	while (*(str + length))
		length++;
	number_of_words = number_of_Words(str);
	if (number_of_words == 0)
		return (NULL);
	array = (char **) malloc(sizeof(char *) * (number_of_words + 1));
	if (array == NULL)
		return (NULL);
	while (index1 <= length)
	{
		if (str[index1] == ' ' || str[index1] == '\0')
		{
			if (n)
			{
				E = index1;
				trans = (char *) malloc(sizeof(char) * (n + 1));
				if (trans == NULL)
					return (NULL);
				while (S < E)
					*trans++ = str[S++];
				*trans = '\0';
				array[index2] = trans - n;
				index2++;
				n = 0;
			}
		}
		else if (n++ == 0)
			S = index1;
		index1++;
	}
	array[index2] = NULL;
	return (array);
}
/**
 * number_of_Words - This function counts words
 * @s: string
 * Return: # of words
 */
int number_of_Words(char *s)
{
	int st = 0, index = 0, words = 0;

	while (s[index] != '\0')
	{
		if (s[index] == ' ')
			st = 0;
		else if (st == 0)
		{
			st = 1;
			words++;
		}
		index++;
	}
	return (words);
}
