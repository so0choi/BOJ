#include <iostream>
using namespace std;
int arr[1001]={0,};
int dp[1001] = {0,};
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i] = 1;
		for(int j=1;j<i;j++){
			if(arr[i]<arr[j]){
				dp[i] = max(dp[j]+1,dp[i]);
			}
		}
	}
	int max=0;
	for(int i=1;i<=n;i++){
		if(max<dp[i])
			max=dp[i];
	}
	cout<<max;
}
