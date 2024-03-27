#include <stdio.h>
void print_one(int *ptr, int rows); //포인터 변수와 정수형 변수를 매개변수로 하는 함수 헤더 선언
int main()
{
    printf("[----- [김윤환] [2019038018] -----]\n");
int one[] = {0, 1, 2, 3, 4}; //one[5] = {0, 1, 2, 3, 4, 5}로 선언 및 초기화.
printf("one = %p\n", one); //one[0]의 주소 출력
printf("&one = %p\n", &one); //one의 주소 출력
printf("&one[0] = %p\n", &one[0]); //one의 첫번쨰 원소의 주소 출력
printf("\n");
printf("------------------------------------\n");
printf(" print_one(&one[0], 5) \n");
printf("------------------------------------\n");
print_one(&one[0], 5);  //one[0]의 주소와 값 출력 ~ one[4]의 주소와 값 출력. one[4] = 4
printf("------------------------------------\n");
printf(" print_one(one, 5) \n");
printf("------------------------------------\n");
print_one(one, 5); //one의 주소와 one[0]부터의 값 출력 ~ one[4]의 주소와 값 출력. one[4] = 4
return 0;
}
void print_one(int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++) //0부터 매개변수 입력(rows) -1 까지 루프
printf("%p \t %5d\n", ptr + i, *(ptr + i)); // ptr의 주소에서 4 * i를 더한 주소 출력, ptr의 주소에서 4 * i를 더한 주소가 가르키는 곳의 값을 출력
printf("\n");
}