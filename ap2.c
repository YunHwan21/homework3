#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [����ȯ] [2019038018] -----]\n");
int list[5]; //����� 5�� �迭 ����
int *plist[5]; //����� 5�� ������ �迭 ����
list[0] = 10; //�迭�� ù��° ���Ҹ� 10���� �ʱ�ȭ
list[1] = 11; ////�迭�� �ι�° ���Ҹ� 11���� �ʱ�ȭ
plist[0] = (int*)malloc(sizeof(int)); //������ �迭�� ù���� ������ �ּҸ� �����Ҵ�. heap ������
printf("list[0] \t= %d\n", list[0]); //10 ���
printf("list \t\t= %p\n", list); //����Ʈ�� ù���� ������ �ּ� ���
printf("&list[0] \t= %p\n", &list[0]); //����Ʈ�� ù���� ������ �ּ� ���
printf("list + 0 \t= %p\n", list+0); //����Ʈ�� ù���� ������ �ּ� ���
printf("list + 1 \t= %p\n", list+1);//����Ʈ�� �ι��� ������ �ּ� ���
printf("list + 2 \t= %p\n", list+2);//����Ʈ�� ������ ������ �ּ� ���
printf("list + 3 \t= %p\n", list+3);//����Ʈ�� �׹��� ������ �ּ� ���
printf("list + 4 \t= %p\n", list+4);//����Ʈ�� �ټ����� ������ �ּ� ���  (�� 4byte�� �ǳʶڴ�. ��? int type�̴ϱ�.)
printf("&list[4] \t= %p\n", &list[4]);//����Ʈ�� �ټ���° ������ �ּ� ���.
free(plist[0]); //�� �����Ҵ������� �𸣰����� �ϴ� ����. memory leak ����
}