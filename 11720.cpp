#include <iostream>
using namespace std;
int main() {
	int n, sum = 0;
	char num[100] = {0};
	cin >> n;
	cin >> num;
	for (int i = 0; i<n; i++) {
		sum += num[i]-'0';
	}
	cout << sum;
	return 0;
}
