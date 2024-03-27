#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);
float input[MAX_SIZE], answer;
int i; //각 함수 헤더 선언 및 전역변수 input[100], answer, i 선언
void main(void)
{
    printf("[----- [김윤환] [2019038018] -----]\n");
for(i=0; i < MAX_SIZE; i++) //i가 0부터 99까지 루프
input[i] = i; //0~99까지의 input[i]에 i값으로 초기화
/* for checking call by reference */
printf("--------------------------------------\n");
printf(" sum1(input, MAX_SIZE) \n"); 
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input의 주소 출력
answer = sum1(input, MAX_SIZE); // sum1 함수의 return value를 answer에 저장
printf("The sum is: %f\n\n", answer); //answer 출력 (0~99까지의 합산값)
printf("--------------------------------------\n");
printf(" sum2(input, MAX_SIZE) \n"); 
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input의 주소 출력
answer = sum2(input, MAX_SIZE); //sum2 함수의 return value를 answer에 저장
printf("The sum is: %f\n\n", answer); //answer 출력 (0~99까지의 합산값)
printf("--------------------------------------\n");
printf(" sum3(MAX_SIZE, input) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input의 주소 출력
answer = sum3(MAX_SIZE, input); //sum3 함수의 return value를 answer에 저장
printf("The sum is: %f\n\n", answer);//answer 출력 (0~99까지의 합산값)
}

float sum1(float list[], int n) { //list의 주소와 n을 매개변수로 입력받음.
printf("list\t= %p\n", list); //list의 첫번째 원소의 주소 출력
printf("&list\t= %p\n\n", &list); //list의 주소 출력
int i;
float tempsum = 0;
for(i = 0;i < n;i++)
tempsum += list[i];
return tempsum; //0~99까지 루프를 도는동안 tempsum에 1~99의 값을 합산 후 tempsum return
}
float sum2(float *list, int n) { //포인터형 매개변수의 형태로 list의 주소를 전달, n을 매개변수로 입력받음.
printf("list\t= %p\n", list); //list의 첫번째 원소의 주소 출력
printf("&list\t= %p\n\n", &list); //list의 주소 출력
int i;
float tempsum = 0;
for(i = 0;i < n;i++)
tempsum += *(list +i);
return tempsum; //0~99까지 루프를 도는 동안 list + i 가 가르키는 주소의 값을 tempsum에 합산 후 tempsum return (ex) i = 5 일떄 list + 5 = &list[5])
}
/* stack variable reuse test */
float sum3(int n, float *list) { //n의 값과, 포인터형 매개변수의 형태로 list의 주소를 전달
printf("list\t= %p\n", list); //list의 첫번째 원소의 주소 출력
printf("&list\t= %p\n\n", &list); //list의 주소 출력
int i;
float tempsum = 0;
for(i = 0;i < n;i++)
tempsum += *(list +i);
return tempsum //0~99까지 루프를 도는 동안 list + i 가 가르키는 주소의 값을 tempsum에 합산 후 tempsum return
;
}