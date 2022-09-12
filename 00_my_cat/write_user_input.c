#include "my_cat.h"

void write_user_input(int fd) {
    int User_input=0;
    char User_buffer[SIZE];
    User_input = read(1, User_buffer, SIZE);
    write(fd, User_buffer, User_input); 
    close(fd);
}


//mobile mouse<br> moneypot, taste,eeee,  tyst, tete <asdasd>monitor,mousepad, monitor mobilehome, destination, test, jkopishere