#include <iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cin >> n;
	for (i = n; i>0; i--) {
		for (j = i - 1; j>0; j--)
			cout << " ";
		for (k = 0;k<=n-i; k++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
