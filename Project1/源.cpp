#include<iostream>
using namespace std;
void p(int n)
{
	if (n != 0)
		p(n - 1);
	cout << n << endl;
}
int main() {
	for (int i = 0; i < 10000; i++)
	{
		cout << i << endl;
	}
	//p(10000);
 	return 0;
}