#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [김윤환] [2019038018] -----]\n");
int list[5]; //사이즈가 5인 배열 생성
int *plist[5]; //사이즈가 5인 포인터 배열 생성
list[0] = 10; //배열의 첫번째 원소를 10으로 초기화
list[1] = 11; ////배열의 두번째 원소를 11으로 초기화
plist[0] = (int*)malloc(sizeof(int)); //포인터 배열의 첫번쨰 원소의 주소를 동적할당. heap 영역에
printf("list[0] \t= %d\n", list[0]); //10 출력
printf("list \t\t= %p\n", list); //리스트의 첫번쨰 원소의 주소 출력
printf("&list[0] \t= %p\n", &list[0]); //리스트의 첫번쨰 원소의 주소 출력
printf("list + 0 \t= %p\n", list+0); //리스트의 첫번쨰 원소의 주소 출력
printf("list + 1 \t= %p\n", list+1);//리스트의 두번쨰 원소의 주소 출력
printf("list + 2 \t= %p\n", list+2);//리스트의 세번쨰 원소의 주소 출력
printf("list + 3 \t= %p\n", list+3);//리스트의 네번쨰 원소의 주소 출력
printf("list + 4 \t= %p\n", list+4);//리스트의 다섯번쨰 원소의 주소 출력  (각 4byte씩 건너뛴다. 왜? int type이니까.)
printf("&list[4] \t= %p\n", &list[4]);//리스트의 다섯번째 원소의 주소 출력.
free(plist[0]); //왜 동적할당한지는 모르겠지만 일단 해제. memory leak 방지
}