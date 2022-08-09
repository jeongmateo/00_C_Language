#include <stdio.h>

int main_convert_decimal()
{
	/*int decimal = 13;
	int binary[20] = { 0, };
	int position = 0;
	int share = decimal;
	int remainder = 0;
	int binartSize = sizeof(binary) / sizeof(int) -1;
	while (share != 1)
	{
		remainder = share % 2;
		share /= 2;
		
		if (share != 1)
		{
			binary[binartSize -position] = remainder;
			position++;
		}
		else 
		{
			binary[binartSize - position] = remainder;
			position++;
			binary[binartSize - position] = share;
			break;
		}
		
		
	}

	for (int j = 0; j < sizeof(binary) / sizeof(int); j++)
	{
		printf("%d", binary[j]);
	}*/

	int decimal = 13;
	int binary[20] = { 0, };
	int position = 0;

	while (1)
	{
		binary[position] = decimal % 2;
		decimal /= 2;
		position++;

		if (decimal == 0)
		{
			break;
		}
	}

	for (int j = position-1; j >=0; j--)
	{
		printf("%d", binary[j]);
	}

	return 0;
}