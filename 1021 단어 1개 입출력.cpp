#include <iostream>

using namespace std;

int main() 
{
	string data;
	cin >> data;
	cout << data;
  	// scanf 와 cin의 차이
	  // scanf 의 경우 입력받을 데이터의 형식을 %s와같이 %뒤의 변수타입을 보고 판단하여 변수를 입력.
	  // cin의 경우 iostream헤더 파일의 입력 스트림을 나타내는 객체로 정의하여 자동으로 뒤에 오는변수의 타입을 보고 판단하여 입력하게된다.
	  // 즉 , 속도면에서 scanf가 뒤의 변수를 통채로 인식해버리면서 cin보다 속도가 빠르다.
}

