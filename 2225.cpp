#include <iostream>
#define MOD 1000000000
using namespace std;
long long dp[201][201]={0,};
int main(){
	int N,K;
	cin>>N>>K;
	//dp[k][n] : k�� ���� ���ؼ� n�� ������ ����� �� 
	
	//dp[1][i] : 1�� ���� ���ؼ� i �� ������ ���� i �ϳ� �� 
	for(int i=1;i<=N;i++)
		dp[i][1] = 1;
	for(int i=1;i<=K;i++)
		dp[1][i] = i;
	for(int i=2;i<=N;i++){
		for(int j=2;j<=K;j++){
			dp[i][j] = dp[i][j-1] + dp[i-1][j];
			dp[i][j] %= MOD;
		}
	}
	
	cout<<dp[N][K];
	
}
