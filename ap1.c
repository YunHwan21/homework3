#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [김윤환] [2019038018] -----]\n");
int list[5]; //원소가 5개인 배열 선언
int *plist[5] = {NULL,}; //주소를 저장하는 포인터배열 선언, NULL값으로 초기화
plist[0] = (int *)malloc(sizeof(int)); //포인터배열의 plist[0]의 주소를 heap 영역에 동적할당.
list[0] = 1; //list[0] 즉 첫번째 원소를 1로 초기화
list[1] = 100; // 2번째 원소를 100으로 초기화
*plist[0] = 200; //plist[0]이 가르키는 주소의 값을 200으로 초기화
printf("list[0] = %d\n", list[0]); //1출력 
printf("&list[0] = %p\n", &list[0]); //list[0]의 주소 출력
printf("list = %p\n", list); //list의 첫번째 원소의 주소 출력
printf("&list = %p\n", &list); //list의 주소 출력
printf("----------------------------------------\n\n");
printf("list[1] = %d\n", list[1]); //100출력
printf("&list[1] = %p\n", &list[1]); //list의 1번째 원소의 주소 출력
printf("*(list+1) = %d\n", *(list + 1)); // list + 1 이 가르키는 곳의 값을 출력 100 출력
printf("list+1 = %p\n", list+1); //list[0]에서 4byte 만큼 이동한 주소 출력. 즉, list[1]주소

printf("----------------------------------------\n\n");
printf("*plist[0] = %d\n", *plist[0]); //plist[0]의 값이 가르키는 곳의 값을 출력, 200출력
printf("&plist[0] = %p\n", &plist[0]); //heap 영역에 할당된 plist[0]의 주소 출력.
printf("&plist = %p\n", &plist); //plist의 첫번재 원소의 주소 출력.
printf("plist = %p\n", plist); //plist의 주소 출력.
printf("plist[0] = %p\n", plist[0]); //plist[0]의 주소를 동적할당을 해줬기 때문에 heap영역의 주소 출력.
printf("plist[1] = %p\n", plist[1]); //*plist[5] = {NULL} 값으로 처음에 초기화 해줬기 때문에 동적할당을 한 plist[0]을 제외하고 모두 NULL값인 0 출력
printf("plist[2] = %p\n", plist[2]); //이하동일
printf("plist[3] = %p\n", plist[3]);
printf("plist[4] = %p\n", plist[4]);
free(plist[0]); //동적할당 해제.
}