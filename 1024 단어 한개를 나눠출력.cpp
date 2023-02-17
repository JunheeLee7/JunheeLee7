#include <iostream>

using namespace std;

int main() 
{
	char data[30];  // 제출시에 여기서 에러가떳었는데 이때는 배열의 최대갯수를 3개로 해놔서 갯수부족으로 오류가떴다. 그리하여 배열의 데이터를 30으로 늘려줫음.
	cin >> data;
	for (int i = 0; data[i] != 0; i++)
	{
		cout <<"'" << data[i] << "'" <<endl;
	}
}
