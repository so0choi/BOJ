#include <iostream>
using namespace std;
long long dp[100001]={0,};
int arr[100001] = {0,};
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	dp[1] = arr[1];
	for(int i=2;i<=n;i++){
		dp[i]=arr[i];
		dp[i] = max(dp[i-1]+arr[i],dp[i]);
	}
	int max_dp=dp[1];
	for(int i=2;i<=n;i++){
		if(max_dp<dp[i])
			max_dp=dp[i];
	}
	cout<<max_dp;
}
