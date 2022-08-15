#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


struct Point2D 
{
	int x;
	int y;
};
double CalcDist(struct Point2D* p1, struct Point2D* p2);
int main_054()
{
	struct Point2D P1;
	struct Point2D P2;

	printf("X,Y ��ǥ�� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &P1.x, &P1.y);
	printf("�ι� °X,Y ��ǥ�� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &P2.x, &P2.y);


	printf("ù ��° �Է���ǥ ���� (%d,%d)\n", P1.x, P1.y);
	printf("�� ��° �Է���ǥ ���� (%d,%d)\n", P2.x, P2.y);

	

	printf("�� �� ������ �Ÿ��� %f", CalcDist(&P1, &P2));

	


	return 0;
}
double CalcDist(struct Point2D* p1 , struct Point2D* p2)
{
	int Xsquare;
	int Ysquare;
	Xsquare = pow((p1->x - p2->x), 2);
	Ysquare = pow((p1->y - p2->y), 2);
	return pow((Xsquare + Ysquare), 0.5);
}

