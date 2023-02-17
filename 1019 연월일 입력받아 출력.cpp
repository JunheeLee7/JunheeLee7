#include <iostream>

using namespace std;

int main() 
{
    int y;
    int m;
    int d;
    scanf_s("%d.%d.%d", &y, &m, &d);    // 함수 y , m , d에 값을 입력받아 할당받는다.  %d.%d.%d로 x.y.z형식으로 입력.
    // 값을 받을때 .이아닌 다른 , 등을 입력값에 넣을 경우 쓰레기 값이 생성.
    // scanf("%d.%d.%d", &y, &m, &d);
    // 코드업에서 컴파일 할경우 _s가 오류가 뜨므로 거기에 입력시에만 _s를 빼고 입력. 하지만 내컴퓨터에 경우 _s를 해줘서 safe file이라고 지정해줘야 돌아감.
    printf("%.4d.%.2d.%.2d", y , m, d);
}
