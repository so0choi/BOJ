#include <iostream>
#include <vector>
using namespace std;
int dp[1001] = {0,};
int arr[1001]={0,};
int main(){
	int n,max,sign;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=1;
		for(int j=1;j<i;j++){
			if(arr[j]<arr[i])
				dp[i] = std::max(dp[i],dp[j]+1);
		}
	}
	max = -1;
	for(int i=1;i<=n;i++){
		if(max<dp[i]){
			max = dp[i];
		}
	}
	cout<<max;
}
