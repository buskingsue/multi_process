#include <stdio.h>

int main(void){
	int a;
	printf("홀수 짝수 판별기\n");
	printf("숫자를 입력해 주세요: ");
	scanf("%d",&a);

	if(a % 2 == 0){
		printf("%d 은(는) 짝수입니다\n", a);

	}else{
		printf("%d 은(는) 홀수입니다\n", a);
	}

	return 0;
}
