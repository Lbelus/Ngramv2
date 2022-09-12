#include "my_cat.h"

void read_on(int fd, int write_fd) {
    int file_input = 0;
    char file_buffer[SIZE]; 
    while((file_input = read(fd,file_buffer,SIZE))){
        write(write_fd, file_buffer, file_input);
    }

    close(fd);
}