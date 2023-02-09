#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float n;
	cin >> n;

	cout << fixed << setprecision(6) << n << endl;
	// fixed : 소수점을 고정시켜 표현한다.
	// setprecision : 자릿수를 맞추어 출력하기위한 용도
	// 위두개를 같이쓸경우 : 소수점을 원하는 자릿수로 고정시켜 표현가능.
	return 0;
}
