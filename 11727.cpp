#include <iostream>
using namespace std;
int memo[100000]={0,};
int find(int n){
	memo[1] = 1; memo[2] = 3;
	if(n==1) return 1;
	if(n==2) return 3;
	for(int i=3;i<=n;i++){
		memo[i] = (memo[i-2]*2+memo[i-1])%10007;
	}
	return memo[n];
}
int main(){
	int n;
	cin>>n;
	cout<<find(n);
}
