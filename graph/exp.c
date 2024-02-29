#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>

int main() {
    struct winsize w;

    // File descriptor for standard output (STDOUT_FILENO)
    int fd = STDOUT_FILENO;

    // Get the terminal window size using ioctl
    if (ioctl(fd, TIOCGWINSZ, &w) == -1) {
        perror("ioctl");
        exit(EXIT_FAILURE);
    }

    // Display the terminal window size
    printf("Terminal window size: %d rows x %d columns\n", w.ws_row, w.ws_col);

    return 0;
}
