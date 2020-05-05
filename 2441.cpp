#include <iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cin >> n;
    for(i=n;i>0;i--){
        for(j=0;j<n-i;j++)
            cout<<" ";
        for(k=0;k<i;k++)
            cout<<"*";
        cout<<endl;
    }
	return 0;
}
