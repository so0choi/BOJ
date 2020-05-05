#include <iostream>
using namespace std;
int main() {
	char str[100] = { 0 };
	cin >> str;
	for (int i = 0; str[i] != '\0'; i++) {
		for (int j = 0; j < 10; j++) {
			if (str[i] == '\0')
				break;
			cout << str[i];
			i++;
		}
		i--;
		cout << endl;
	}
	return 0;
}
