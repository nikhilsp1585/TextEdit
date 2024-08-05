#include <unistd.h>

int main(){
    char c;
    while(read(STDERR_FILENO,&c,20) == 1 && c!='q');
}