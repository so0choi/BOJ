#include <iostream>
using namespace std;

long long dp[101]={0,};
int main(){
	int t,n;
	cin>>t;
	for(int k=0;k<t;k++){
		cin>>n;
		for(int i=1;i<=3;i++)
			dp[i]=1;
			
		for(int i=4;i<=n;i++){
			dp[i]=dp[i-3]+dp[i-2];
		}
		cout<<dp[n]<<'\n';
	}
}

