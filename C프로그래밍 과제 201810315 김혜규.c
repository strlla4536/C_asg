//C ���α׷��� ���� 
//�Ǳ����б� ���а� 201810315 ������
//�Է� ������ : �̸� �й� �������� �������� �������� 

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

	printf("�Է��ϰ����ϴ� �л� ���� �Է��Ͻÿ�.");
	scanf("%d", &Sizeofnum);

	std = (Student *)malloc(sizeof(Student)*Sizeofnum);

	while (Sizeofnum>0)
	{
		Sizeofnum -= 1;
		//printf("�����͸� �Է��մϴ�.\n");
		printf("�л��� �̸��� �Է��Ͻÿ�.\n");
		scanf("%s", std[p].name);
		printf("�й��� �Է��Ͻÿ�.\n");
		scanf("%d", &std[p].num);
		printf("���������� �Է��Ͻÿ�.\n");
		scanf("%d", &std[p].kor);
		printf("���������� �Է��Ͻÿ�.\n");
		scanf("%d", &std[p].math);
		printf("���������� �Է��Ͻÿ�.\n");
		scanf("%d", &std[p].sci);
		std[p].mean = ((float) std[p].kor + (float) std[p].math + (float) std[p].sci) / 3;
		p += 1;

	}

	printf("\n������: ������\t(201810315)\n");
	printf("�̸�\t�й�\t����\t����\t����\t���\n");
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
	printf("���\t\t%.1f\t%.1f\t%.1f\t%.1f\t", kor_m, math_m, sci_m, mean_m);
	free(std);
	return 0;
}