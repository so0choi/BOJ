#include<iostream>
#include <math.h>
using namespace std;
int dp[100001]={0,};
int arr[100001]={0,};
int main(){
	int n,j;
	cin>>n; 
	//�ּ� ������ 1�θ� ������ ������ dp �ʱ�ȭ 
	for(int i=1;i<=n;i++)
		dp[i]=i;
	
	for(int i=4;i<=n;i++){	
		for(int j=sqrt(i);j>0;j--){	
			if(j*j==i){
				dp[i]=1; break;
			}
			dp[i] = min(dp[i],dp[i-j*j]+1);
		}
	}
	cout<<dp[n];
}
