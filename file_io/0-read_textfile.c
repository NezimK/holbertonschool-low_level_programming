#include "main.h"

/**
 * read_textfile - read a file text
 * @filename:  name of file text
 * @letters: number of letters read 
 * Reurn: number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters) 
{
    FILE *file;
    char *buffer;
    ssize_t bytesRead, bytesWritten;

    if (filename == NULL) {
        return 0;
    }

    file = fopen(filename, "r");

    if (file == NULL) {
        return 0;
    }

    buffer = (char *)malloc((letters + 1) * sizeof(char));
    if (buffer == NULL) {
        fclose(file);
        return 0;
    }

    bytesRead = fread(buffer, sizeof(char), letters, file);

    fclose(file);

    if ((size_t)bytesRead != letters) {
        free(buffer);
        return 0;
    }

    bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

    free(buffer);

    if (bytesWritten != bytesRead) {
        return 0;
    }

    return bytesRead;
}
