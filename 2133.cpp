#include <iostream>
using namespace std;
int dp[31]={0,};
int arr[31]={0,};
int main(){
	
	int n;
	cin>>n;
	dp[1]=0;
	dp[2]=3;
	if(n%2==1){
		cout<<0; return 0;
	}
	
	for(int i=4;i<=n;i+=2){
		dp[i] = dp[i-2]*dp[2] +2;
		for(int j=4;i-j>0;j+=2){
			dp[i]+=dp[i-j]*2;
		}
	}
	cout<<dp[n];
}
