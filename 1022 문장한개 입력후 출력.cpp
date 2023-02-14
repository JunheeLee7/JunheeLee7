#include <iostream>

using namespace std;

int main() 
{
	char data[2000];	// 데이터의 data 배열이 2000 이므로 data에 2000개 까지 저장.
	cin.getline(data , 2000, '\n');	// cin으로 data를 입력을 한다. 이때 , data는 2000자까지 받을수있다.
	cout << data;
}
