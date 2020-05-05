#include <iostream>
using namespace std;
int main(){
	int c;
	cin>>c;
	
	int a,b;
	string str;
	for(int i=0;i<c;i++){
		cin>>str;
		a = str.front()-'0';
		b = str.back()-'0';
		cout<<a+b<<'\n';
	}
}
