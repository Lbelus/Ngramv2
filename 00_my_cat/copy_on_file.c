#include "my_cat.h"

void copy_on_file(int fd, int write_fd) {
    int size_block= 0;
    int size_fd = 0;
    int initial_size = 0;
    char file_RDON_buffer[SIZE];

    while((size_block = read(fd, file_RDON_buffer, SIZE))){
        size_fd = size_fd +size_block;   
    };

    char file_RnW_buffer[size_fd];

    while((initial_size = read(write_fd,file_RnW_buffer,size_fd))){
        write(write_fd, file_RnW_buffer, size_fd);
    }

    close(fd);
    close(write_fd);
}