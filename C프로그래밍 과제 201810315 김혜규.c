//C 프로그래밍 과제 
//건국대학교 수학과 201810315 김혜규
//입력 데이터 : 이름 학번 국어점수 수학점수 과학점수 

#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct _Student {
	char name[30];
	int  kor, math, sci;
	int num;
	float mean;
}Student;

Student *ptr;
int main(void)
{
	int Sizeofnum;
	float kor_t, math_t, sci_t, mean_t;
	float kor_m, math_m, sci_m, mean_m;
	int p = 0;
	int i;
	Student *std;

	kor_t = 0;
	math_t = 0;
	sci_t = 0;
	mean_t = 0;

	printf("입력하고자하는 학생 수를 입력하시오.");
	scanf("%d", &Sizeofnum);

	std = (Student *)malloc(sizeof(Student)*Sizeofnum);

	while (Sizeofnum>0)
	{
		Sizeofnum -= 1;
		//printf("데이터를 입력합니다.\n");
		printf("학생의 이름을 입력하시오.\n");
		scanf("%s", std[p].name);
		printf("학번을 입력하시오.\n");
		scanf("%d", &std[p].num);
		printf("국어점수를 입력하시오.\n");
		scanf("%d", &std[p].kor);
		printf("수학점수를 입력하시오.\n");
		scanf("%d", &std[p].math);
		printf("과학점수를 입력하시오.\n");
		scanf("%d", &std[p].sci);
		std[p].mean = ((float) std[p].kor + (float) std[p].math + (float) std[p].sci) / 3;
		p += 1;

	}

	printf("\n제출자: 김혜규\t(201810315)\n");
	printf("이름\t학번\t국어\t수학\t과학\t평균\n");
	for (i = 0; i<p; i++) {
		kor_t += (float)std[i].kor;
		math_t += (float)std[i].math;
		sci_t += (float)std[i].sci;
		mean_t += std[i].mean;
		printf("%s\t%d\t%d\t%d\t%d\t%.1f\t\n",
			std[i].name, std[i].num, std[i].kor, std[i].math, std[i].sci, std[i].mean);
	}
	kor_m = kor_t / (float) p;
	math_m = math_t / (float)p;
	sci_m = sci_t / (float)p;
	mean_m = mean_t / (float)p;
	printf("평균\t\t%.1f\t%.1f\t%.1f\t%.1f\t", kor_m, math_m, sci_m, mean_m);
	free(std);
	return 0;
}