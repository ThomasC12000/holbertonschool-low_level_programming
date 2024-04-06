#include "main.h"

/**
  * read_textfile - ...
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: ...
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, rtn;
	char *text;

	text = malloc(letters);

	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

    file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	let = read(file, text, letters);
	rtn = write(STDOUT_FILENO, text, let);
	close(file);

	return(rtn);
}
