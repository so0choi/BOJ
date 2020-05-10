#include<iostream>
#include <algorithm>
using namespace std;
int dp[2][1000000]={0,};
int scores[2][100000]={0,};

int main(){
	int count,n;
	cin>>count;
	
	for(int i=0; i<count; i++){
		cin>>n;
		for(int j=0;j<2;j++)
			for(int k=0;k<n;k++)
				cin>>scores[j][k];

		dp[0][0] = scores[0][0];
		dp[1][0] = scores[1][0];
		dp[0][1] = dp[1][0] + scores[0][1];
		dp[1][1] = dp[0][0] + scores[1][1];
		for(int i=2;i<n;i++){
			dp[0][i] = scores[0][i] + max(dp[1][i-1],dp[1][i-2]);
			dp[1][i] = scores[1][i] + max(dp[0][i-1],dp[0][i-2]);
		}
		
		cout<<max(dp[0][n-1],dp[1][n-1])<<'\n';
	}
}
