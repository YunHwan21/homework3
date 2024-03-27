#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);
float input[MAX_SIZE], answer;
int i; //�� �Լ� ��� ���� �� �������� input[100], answer, i ����
void main(void)
{
    printf("[----- [����ȯ] [2019038018] -----]\n");
for(i=0; i < MAX_SIZE; i++) //i�� 0���� 99���� ����
input[i] = i; //0~99������ input[i]�� i������ �ʱ�ȭ
/* for checking call by reference */
printf("--------------------------------------\n");
printf(" sum1(input, MAX_SIZE) \n"); 
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input�� �ּ� ���
answer = sum1(input, MAX_SIZE); // sum1 �Լ��� return value�� answer�� ����
printf("The sum is: %f\n\n", answer); //answer ��� (0~99������ �ջ갪)
printf("--------------------------------------\n");
printf(" sum2(input, MAX_SIZE) \n"); 
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input�� �ּ� ���
answer = sum2(input, MAX_SIZE); //sum2 �Լ��� return value�� answer�� ����
printf("The sum is: %f\n\n", answer); //answer ��� (0~99������ �ջ갪)
printf("--------------------------------------\n");
printf(" sum3(MAX_SIZE, input) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input�� �ּ� ���
answer = sum3(MAX_SIZE, input); //sum3 �Լ��� return value�� answer�� ����
printf("The sum is: %f\n\n", answer);//answer ��� (0~99������ �ջ갪)
}

float sum1(float list[], int n) { //list�� �ּҿ� n�� �Ű������� �Է¹���.
printf("list\t= %p\n", list); //list�� ù��° ������ �ּ� ���
printf("&list\t= %p\n\n", &list); //list�� �ּ� ���
int i;
float tempsum = 0;
for(i = 0;i < n;i++)
tempsum += list[i];
return tempsum; //0~99���� ������ ���µ��� tempsum�� 1~99�� ���� �ջ� �� tempsum return
}
float sum2(float *list, int n) { //�������� �Ű������� ���·� list�� �ּҸ� ����, n�� �Ű������� �Է¹���.
printf("list\t= %p\n", list); //list�� ù��° ������ �ּ� ���
printf("&list\t= %p\n\n", &list); //list�� �ּ� ���
int i;
float tempsum = 0;
for(i = 0;i < n;i++)
tempsum += *(list +i);
return tempsum; //0~99���� ������ ���� ���� list + i �� ����Ű�� �ּ��� ���� tempsum�� �ջ� �� tempsum return (ex) i = 5 �ϋ� list + 5 = &list[5])
}
/* stack variable reuse test */
float sum3(int n, float *list) { //n�� ����, �������� �Ű������� ���·� list�� �ּҸ� ����
printf("list\t= %p\n", list); //list�� ù��° ������ �ּ� ���
printf("&list\t= %p\n\n", &list); //list�� �ּ� ���
int i;
float tempsum = 0;
for(i = 0;i < n;i++)
tempsum += *(list +i);
return tempsum //0~99���� ������ ���� ���� list + i �� ����Ű�� �ּ��� ���� tempsum�� �ջ� �� tempsum return
;
}