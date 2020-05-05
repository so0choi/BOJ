#include <iostream>
using namespace std;

int main(){
	int count;
	int a,b;
	cin>>count;
	int *temp = new int[count]; 
	for (int i=0; i<count; i++){
		cin>>a>>b;
		temp[i]=a+b;
	}
	for (int i=0;i<count;i++)
		cout<<temp[i]<<"\n";
	return 0;
}
