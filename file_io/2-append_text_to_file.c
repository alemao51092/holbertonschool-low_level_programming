#include "main.h"
/**
 * append_text_to_file - main function
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file = open(filename, O_WRONLY | O_APPEND);
	int i = 0;
	int w;

	if (!filename)
		return (-1);

	if (!text_content)
		return (-1);
	
	while (text_content[i])
		i++;

	w = write(file, text_content, i);
	
	if (w == -1)
		return (-1);

	close(file);
	return (1);


}
