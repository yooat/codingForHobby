#include <stdio.h>

int main(void)
{
	int score[5][2];
	int total[2] = {0,}; // 1차원 배열 모든 인덱스에 0을 대입
	int i;
	
	// 개인 점수 배열 
	for(i = 0; i < 5; i++)
	{
		printf("%d번 학생의 수학, 영어 점수: ", i+1);
		scanf("%d %d", &score[i][0], &score[i][1]);

	// 총 점수 배열
		total[0] += score[i][0];
		total[1] += score[i][1];
	} 
	
	printf("영어점수 평균: %d점, 수학 점수 평균: %d점", total[0]/i, total[1]/i);	
	
	return 0;
}


