#include <stdio.h>
#include <stddef.h>

#pragma pack(push, 1)	// 1바이트 크기로 정렬
struct PacketHeader
{
	char flags;	//1byte
	int seq;	//4byte
};
#pragma pack(pop)

int main_57()
{
	struct PacketHeader header;

	printf("%d\n", sizeof(header.flags));
	printf("%d\n", sizeof(header.seq));
	printf("%d\n", sizeof(header));
	printf("%d\n", offsetof(struct PacketHeader, flags));
	printf("%d\n", offsetof(struct PacketHeader, seq));
	return 0;
}