#include<iostream>
using namespace std;
int main()
{
	int x, y, count = 0, temp;
	cin >> x >> y;
	int date[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 0; i<x - 1; i++) {
		count += date[i];
	}
	count += y;
	temp = count % 7;
	if (temp == 1) cout << "MON";
	else if (temp == 2) cout << "TUE";
	else if (temp == 3) cout << "WED";
	else if (temp == 4) cout << "THU";
	else if (temp == 5) cout << "FRI";
	else if (temp == 6) cout << "SAT";
	else cout << "SUN";
	return 0;
}
