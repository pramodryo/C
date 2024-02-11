/*

NOTE: dont confuse here dprintf is not a standard C function. However, 
it is a POSIX function that prints formatted output to a file descriptor.

*/

#define _POSIX_C_SOURCE 200809L  // Required to use dprintf

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    // Open a file descriptor
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    // Using dprintf to print to a file descriptor
    dprintf(fd, "This is an example of dprintf\n");
    
    // Close the file descriptor
    close(fd);
    
    return 0;
}

