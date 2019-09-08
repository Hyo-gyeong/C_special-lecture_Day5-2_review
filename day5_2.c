#include <stdio.h>
int main(void)
{
	char input[20];
	int i, midsum = 0, sum = 0;

	printf("Enter a number: ");
	scanf("%s", &input);

	for (i = 0; input[i] != '\0'; i++) {
		if (input[i] >= '0' && input[i] <= '9')//숫자일때
			midsum = midsum * 10 + input[i] - 48;//input이 문자로 받기때문에 ascii코드를 참고해서 48을 뺴줘야 함.
		else if (input[i] < '0' || input[i] > '9'){ //문자일때
			sum += midsum;
			midsum = 0;
		}
	}
	sum += midsum; //이렇게 해줘야 마지막에 숫자가 나올때 빼먹지 않고 더해줄 수 있음.
	printf("%d", sum);
}