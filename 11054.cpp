#include <iostream>
using namespace std;
int up[1001]={0,};
int down[1001]={0,};
int dp[1001] = {0,};
int arr[1001] = {0,};
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
		
	up[1]=1;
	for(int i=2;i<=n;i++){
		up[i]=1;
		for(int j=1;j<i;j++){
			if(arr[i]>arr[j]){
				up[i] = max(up[j]+1,up[i]);
			}
		}
	}
	
	down[n]=1;
	for(int i=n-1;i>=1;i--){
		down[i]=1;
		for(int j=i+1;j<=n;j++){
			if(arr[i]>arr[j]){
				down[i] = max(down[j]+1,down[i]);
			}
		}
	}
	
	int max_dp=0;
	for(int i=1;i<=n;i++){
		dp[i]=up[i]+down[i]-1;
		if(max_dp<dp[i]) max_dp=dp[i];
	}
	cout<<max_dp;
}
