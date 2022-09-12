#ifndef __HEADERFILE_H_
#define __HEADERFILE_H_


#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h> /* for fork */
#include <sys/types.h> /* for pid_t */
#include <sys/wait.h> /* for wait */

#define SIZE 512 // cat max buffer size


void read_on(int fd, int write_fd);
int read_to_ngram(int fd);
void write_user_input(int fd);
void copy_on_file(int fd, int write_fd);
void copy_to_previous_file(int fd, int write_fd, int write_last_fd);
int my_cat_main(int argc, char** argv);

#endif