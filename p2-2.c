#include <stdio.h>
void print_one(int *ptr, int rows); //������ ������ ������ ������ �Ű������� �ϴ� �Լ� ��� ����
int main()
{
    printf("[----- [����ȯ] [2019038018] -----]\n");
int one[] = {0, 1, 2, 3, 4}; //one[5] = {0, 1, 2, 3, 4, 5}�� ���� �� �ʱ�ȭ.
printf("one = %p\n", one); //one[0]�� �ּ� ���
printf("&one = %p\n", &one); //one�� �ּ� ���
printf("&one[0] = %p\n", &one[0]); //one�� ù���� ������ �ּ� ���
printf("\n");
printf("------------------------------------\n");
printf(" print_one(&one[0], 5) \n");
printf("------------------------------------\n");
print_one(&one[0], 5);  //one[0]�� �ּҿ� �� ��� ~ one[4]�� �ּҿ� �� ���. one[4] = 4
printf("------------------------------------\n");
printf(" print_one(one, 5) \n");
printf("------------------------------------\n");
print_one(one, 5); //one�� �ּҿ� one[0]������ �� ��� ~ one[4]�� �ּҿ� �� ���. one[4] = 4
return 0;
}
void print_one(int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++) //0���� �Ű����� �Է�(rows) -1 ���� ����
printf("%p \t %5d\n", ptr + i, *(ptr + i)); // ptr�� �ּҿ��� 4 * i�� ���� �ּ� ���, ptr�� �ּҿ��� 4 * i�� ���� �ּҰ� ����Ű�� ���� ���� ���
printf("\n");
}