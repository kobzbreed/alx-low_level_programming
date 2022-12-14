#include "main.h"
/**
 * _strlen - function that returns the legth of a string
 *
 * @s: value
 *
 * Return: value
 */
int _strlen(char *s)
{
	char n = 'a';
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
	}
	return (i - 1);
}
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 if success and -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int oRet = 0, wRet = 0;

	if (filename == NULL)
		return (-1);

	/*first open the file*/
	oRet = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content != NULL)
		/* and finally writte it  in stdout*/
		wRet = write(oRet, text_content, _strlen(text_content));

	if (wRet == -1 || oRet == -1)
		return (-1);

	close(oRet);

	return (1);
}
