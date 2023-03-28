#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
	write(1, "Hello world", 8);
}
