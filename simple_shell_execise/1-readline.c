#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 * @ac: Args size
 * @av: Array of string with null terminated
 * Return: 0 on success else 1
 */
int main(int argc, char *argv[])
{
	size_t buffer_size;
    char *buffer;

    buffer_size = 30;
    buffer = malloc(buffer_size);
    if (buffer == NULL)
    {
        perror("Error: Failed to allocate memory");
        exit(1);
    }
    printf("$ ");
    getline(&buffer, &buffer_size, stdin);
    printf("%s", buffer);
    free(buffer);
	return (0);
}
