#include<stdio.h>

/*
	Date: 2021.11.03
	author: Hyeon Jeong Lee
	remark: "Hello World to the screen output"
*/
//
int main(void) // 시작점, entry
{int result;

	//printf("이현정\n");
	//printf("부산광역시 남구 대연동\n");
	//printf("010-9456-0441\n");

	//변수출력
	/*int value;
	int num = 5;
	value = 100;
	printf(" % d % d)\n", value, num);*/

	//char형 출력
	/*int value = 100;
	char ch = 'C';
	printf("출력결과 : 정수 %d, 문자 %c\n", value, ch);*/

	//3-1
	/*int age = 23;
	char grade = 'A';
	printf("이름 : 이현정\n");
	printf("나이 : %d세\n",age);
	printf("성적 : %c\n", grade);*/

	//정수형 예제
	/*int width = 10;
	int height = 20;
	printf("사각형의 넓이는 %d다. \n", width*height);*/

	//실수형 예제
	/*double area;
	double radius = 5;
	
	area = radius * 3.14;
	printf("원의 넓이는 %f 이다.\n", area);*/

	//문자형 예제
	/*char ch1 = 'A';
	printf("%d, %c\n", ch1, ch1);*/

	//서식문자열
	/*int input = 0;
	scanf_s("%d", &input);
	printf("출력 : %d\n", input * 5);*/

	/*int input1 = 199;
	int input2 = 0;
	int total = 0;
	printf("두 개의 정수를 입력하세요.: ");
	scanf_s("%d%d", &input1, &input2);
	total = input1 + input2;
	printf("두 수의 합은 %d 이다.\n",total);*/

	//3-3
	/*int input1 = 0;
	int input2 = 0;
	printf("두 개의 정수를 입력하세요 :");
	scanf_s("%d%d", &input1, &input2);
	printf("input1 :%d\n", input1);
	printf("input2 :%d\n", input2);*/

	//3-4 평가문제
	/*
	char input = 0;
	scanf_s("%c", &input);
	printf("출력 결과 : %d\n", input);*/

	//산술연산자
	/*int a = 5;
	int b = 3;
	printf("두 수의 합은 %d 입니다.\n", a + b);
	printf("두 수의 차는 %d 입니다.\n", a - b);
	printf("두 수의 곱은 %d 입니다.\n", a * b);
	printf("두 수의 나누기는 %d 입니다.\n", a / b);
	printf("두 수의 나머지는 %d 입니다.\n", a % b);*/

	//대입연산자
	//int a = 5;
	//int b = 3;
	//a += b; //a=a+b
	//printf("a+=b의 결과는 %d 입니다,\n", a);
	//a -= b; //a=a-b
	//printf("a-=b의 결과는 %d 입니다,\n", a);
	//a *= b; //a=a*b
	//printf("a*=b의 결과는 %d 입니다,\n", a);
	//a /= b; //a=a/b
	//printf("a/=b의 결과는 %d 입니다,\n", a);
	//a %= b; //a=a%b
	//printf("a%=b의 결과는 %d 입니다,\n", a);

	//증감연산자
	/*int a;
	int b;

	a = 5;
	printf("++a의 처리 결과 : %d\n", ++a);

	a = 5;
	printf("a++의 처리 결과 : %d\n", a++);
	printf("a를 다시 출력 : %d\n", a);

	b = 10;
	printf("--b의 처리 결과 : %d\n", --b);
	
	b = 10;
	printf("b--의 처리 결과 : %d\n",b--);
	printf("b를 다시 출력 : %d\n", b);*/



	//관계연산자
	/*int a = 10;
	int b = 11;
	int c = 12;
	int d = 10;

	printf("a == b의 결과는 : %d\n", a == b);
	printf("a < b의 결과는 : %d\n", a < b);
	printf("a >= c 결과는 : %d\n", a >= c);
	printf("a == d의 결과는 : %d\n", a == d);*/

	//논리연산자
	/*int a = 10;
	int b = 11;
	int c = 12;
	int d = 10;

	printf("!(a == 10)의 결과는 : %d\n", !(a == 10));
	printf("(a < b) && (a > c) 의 결과는 : %d\n", (a < b) && (a > c));
	printf("(a > c) || (a == d) 의 결과는 : %d\n", (a >= c) || (a == d));*/

	//4-1 평가문제
	
	/*int a;
	int b;

	scanf_s("%d%d", &a, &b);
	printf("두 수의 합 : %d\n", a + b);
	printf("두 수의 차 : %d\n", a - b);
	printf("두 수의 곱 : %d\n", a* b);
	printf("두 수의 나누기 : %d\n", a / b);*/

	//4-2 평가문제
	/*int a =0;
	int b =0;
	int c =0;

	scanf_s("%d%d%d", &a, &b, &c);
	printf("세 수의 곱 : %d\n", a* b* c);*/
	
	/*int a = 0;
	int b = 0;
	int c = 0;

	scanf_s("%d%d%d", &a, &b, &c);
	printf("%d\n", a* b + c);*/
	
	//4-3 평가문제
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//

	//scanf_s("%d%d%d", &a, &b, &c);
	//result = a + b + c;
	//printf("세 정수의 합: %d\n", result);
	//printf("세 정수의 평균: %d\n", result/3);
	



	return 0;
}