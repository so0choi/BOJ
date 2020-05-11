#include <iostream>
using namespace std;
int dp[100001]={0,};
long long grape[100001]={0,};
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>grape[i];
	}
	dp[1] = grape[1];
	dp[2] = grape[1]+grape[2];
	for(int i=3;i<=n;i++){
		dp[i] = max(dp[i-2]+grape[i],dp[i-3]+grape[i-1]+grape[i]);
		dp[i] = max(dp[i],dp[i-1]);
	
	}
	cout<<dp[n];
}
