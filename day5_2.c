#include <stdio.h>
int main(void)
{
	char input[20];
	int i, midsum = 0, sum = 0;

	printf("Enter a number: ");
	scanf("%s", &input);

	for (i = 0; input[i] != '\0'; i++) {
		if (input[i] >= '0' && input[i] <= '9')//�����϶�
			midsum = midsum * 10 + input[i] - 48;//input�� ���ڷ� �ޱ⶧���� ascii�ڵ带 �����ؼ� 48�� ����� ��.
		else if (input[i] < '0' || input[i] > '9'){ //�����϶�
			sum += midsum;
			midsum = 0;
		}
	}
	sum += midsum; //�̷��� ����� �������� ���ڰ� ���ö� ������ �ʰ� ������ �� ����.
	printf("%d", sum);
}