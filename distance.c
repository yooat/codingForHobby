#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	
	struct point p1, p2;
	int xDiff, yDiff;
	double distance;
	
	printf("input the position of num 1: ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input the position of num 2: ");
	scanf("%d %d", &p2.x, &p2.y);
	
	xDiff = p2.x - p1.x;
	yDiff = p2.y - p2.y;
	
	
	distance = sqrt(xDiff * xDiff + yDiff * yDiff);
	printf("distance : %f", distance);
	
	
	return 0;
		
}
