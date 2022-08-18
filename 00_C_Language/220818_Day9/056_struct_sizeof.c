#include <stdio.h>
#include <stddef.h>

struct PacketHeader
{
	char flags;
	int seq;
};

int main_056()
{
	struct PacketHeader header;
	printf("%d\n", offsetof(struct PacketHeader, flags));
	printf("%d\n", offsetof(struct PacketHeader, seq));
	

	return 0;
}
