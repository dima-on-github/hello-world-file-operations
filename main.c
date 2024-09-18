#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    fd = open("i_was_there.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    close(fd);
    return 0;
}