#include <iostream>
using namespace std;
int score[2][100001];
int dp[2][100001];
int main(){
	int count,num;
	cin>>count;
	for(int i=0;i<count;i++){
		cin>>num;
		
		for(int j=0;j<num;j++)
			cin>>score[0][j];
		for(int j=0;j<num;j++)
			cin>>score[1][j];
			
		dp[0][0] = score[0][0];
		dp[1][0] = score[1][0];
		dp[0][1] = dp[1][0] + score[0][1];
		dp[1][1] = dp[0][0] + score[1][1];
		
		for(int j=2;j<num;j++){
			dp[0][j] = score[0][j]+max(dp[1][j-1],dp[1][j-2]);
			dp[1][j] = score[1][j]+max(dp[0][j-1],dp[0][j-2]);
		}
		cout<<max(dp[0][num-1],dp[1][num-1])<<'\n';
	}
}
