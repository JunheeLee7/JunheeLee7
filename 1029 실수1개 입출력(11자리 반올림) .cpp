#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	double x;
	cin >> x;
	cout << fixed << setprecision(11) << x << endl;
  // 자리수 설정을 위해 iomanip 라이브러리를 추가후 fixed와 setprecision을 이용해서 소수점 아래 11자리 반올림을 실행.
}
