#include <unistd.h>

void hello_me()
{
	write(1, "hello word!!!", 13);
}
