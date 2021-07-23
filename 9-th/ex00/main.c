#include <stdio.h>
#include <unistd.h>

int main( void ) {
    char *argv[]={ NULL };
    execv( "./d", argv );
    return ( 0 );
}
