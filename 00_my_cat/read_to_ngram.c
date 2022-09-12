#include "my_cat.h"

int read_to_ngram(int fd) {
    int file_input = 0;
    char file_buffer[SIZE];
    while((file_input = read(fd,file_buffer,SIZE))){
    } 
    
    pid_t pid=fork();
    if (pid==0) { /* child process */
         char *argv[]={"my_ngram",file_buffer,NULL};
        execv("/home/soyouc/Documents/Projects/string_parser/my_ngram",argv);
        exit(127); /* only if execv fails */
    }
    else { /* pid!=0; parent process */
    waitpid(pid,0,0); /* wait for child to exit */
    }
   
    close(fd);
    return 0;
}