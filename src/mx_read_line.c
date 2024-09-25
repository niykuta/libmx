#include "../inc/libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    if (!lineptr || buf_size <= 0 || fd < 0) {
        return -2; 
    }

    char buf[buf_size];
    char *result = mx_strnew(0);
    ssize_t bytes_read;
    size_t  bytes_amount = 0;
    
    while ((bytes_read = read(fd, buf, buf_size)) > 0) {
        ssize_t i = 0;
        while (i < bytes_read) {
            if (buf[i] == delim) {
                *lineptr = result;
                return bytes_amount;
            }

            char current_char[2] = {buf[i], '\0'};
            char *new_result = mx_strjoin(result, current_char);
            if (result != NULL) {
                free(result);
            }
            result = new_result;
            ++bytes_amount;
            i++;
        }
    }

    if (bytes_read == 0 && bytes_amount > 0) {
        *lineptr = result;
        return bytes_amount;
    }

    free(result);
    return -1;
}

