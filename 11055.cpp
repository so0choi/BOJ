#include <iostream>
using namespace std;
int dp[1001]={0,};
int arr[1001]={0,};
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	dp[1] = arr[1];
	for(int i=2;i<=n;i++){
		dp[i] = arr[i];
		for(int j=1;j<i;j++){
			if(arr[i]>arr[j]){
				dp[i] = max(dp[j]+arr[i],dp[i]);
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
