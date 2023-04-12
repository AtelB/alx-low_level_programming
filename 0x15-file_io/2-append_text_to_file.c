#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file
 * @text_content: added text content
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	int len;
	int w;

	if (!filename)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);

	if (o == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		w = write(o, text_content, len);

		if (w == -1)
			return (-1);
	}

	close(o);

	return (1);
}
