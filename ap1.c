#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [����ȯ] [2019038018] -----]\n");
int list[5]; //���Ұ� 5���� �迭 ����
int *plist[5] = {NULL,}; //�ּҸ� �����ϴ� �����͹迭 ����, NULL������ �ʱ�ȭ
plist[0] = (int *)malloc(sizeof(int)); //�����͹迭�� plist[0]�� �ּҸ� heap ������ �����Ҵ�.
list[0] = 1; //list[0] �� ù��° ���Ҹ� 1�� �ʱ�ȭ
list[1] = 100; // 2��° ���Ҹ� 100���� �ʱ�ȭ
*plist[0] = 200; //plist[0]�� ����Ű�� �ּ��� ���� 200���� �ʱ�ȭ
printf("list[0] = %d\n", list[0]); //1��� 
printf("&list[0] = %p\n", &list[0]); //list[0]�� �ּ� ���
printf("list = %p\n", list); //list�� ù��° ������ �ּ� ���
printf("&list = %p\n", &list); //list�� �ּ� ���
printf("----------------------------------------\n\n");
printf("list[1] = %d\n", list[1]); //100���
printf("&list[1] = %p\n", &list[1]); //list�� 1��° ������ �ּ� ���
printf("*(list+1) = %d\n", *(list + 1)); // list + 1 �� ����Ű�� ���� ���� ��� 100 ���
printf("list+1 = %p\n", list+1); //list[0]���� 4byte ��ŭ �̵��� �ּ� ���. ��, list[1]�ּ�

printf("----------------------------------------\n\n");
printf("*plist[0] = %d\n", *plist[0]); //plist[0]�� ���� ����Ű�� ���� ���� ���, 200���
printf("&plist[0] = %p\n", &plist[0]); //heap ������ �Ҵ�� plist[0]�� �ּ� ���.
printf("&plist = %p\n", &plist); //plist�� ù���� ������ �ּ� ���.
printf("plist = %p\n", plist); //plist�� �ּ� ���.
printf("plist[0] = %p\n", plist[0]); //plist[0]�� �ּҸ� �����Ҵ��� ����� ������ heap������ �ּ� ���.
printf("plist[1] = %p\n", plist[1]); //*plist[5] = {NULL} ������ ó���� �ʱ�ȭ ����� ������ �����Ҵ��� �� plist[0]�� �����ϰ� ��� NULL���� 0 ���
printf("plist[2] = %p\n", plist[2]); //���ϵ���
printf("plist[3] = %p\n", plist[3]);
printf("plist[4] = %p\n", plist[4]);
free(plist[0]); //�����Ҵ� ����.
}