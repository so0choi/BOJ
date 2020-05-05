#include <iostream>
using namespace std;

int main(){
	int count;
	int a,b;
	cin>>count;
	int **temp = new int*[count];
	for (int i=0;i<count;i++){
		temp[i]=new int[3];
	}
	for (int i=0; i<count; i++){
		cin>>a>>b;
		temp[i][0]=a;
		temp[i][1]=b;
		temp[i][2]=a+b;
	}
	for (int i=0;i<count;i++)
		cout<<"Case #"<<i+1<<": "<<temp[i][0]<<" + "<<temp[i][1]<<" = "<<temp[i][2]<<"\n";
	return 0;
}
