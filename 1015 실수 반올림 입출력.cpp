#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	float x;
	cin >> x;

	cout <<fixed << setprecision(2) << x << endl;
  // 소수점 아래 둘째자리가 되도록 반올림
  // 올림 : celi(2.3) = 3
  // 내림 : floor(2.3) = 2
  // 반올림 : round(2.3) = 2
}
