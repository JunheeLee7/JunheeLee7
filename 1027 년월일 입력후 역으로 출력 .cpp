#include <iostream>

using namespace std;

int main() 
{
	int y, m, d;
	scanf_s("%d.%d.%d", &y, &m, &d);
	printf("%.2d-%.2d-%.4d", d, m, y);
}
