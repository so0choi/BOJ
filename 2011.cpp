#include<iostream>
#include<string.h>
using namespace std;
long long dp[5001]={0,};

int main(){
	string num;
	cin>>num;

	if(num[0]-0<=0){
		cout<<0;
		return 0;
	}
	dp[1] = 1;
	for(int i=2;i<=num.length();i++){
		int temp = (num[i-1]-0)*10 + (num[i]-0);
		if(temp>=10&&temp<27){
			dp[i] = dp[i-1];
		}
		else{
			dp[i] = dp[i-1]+1;
		}
		dp[i]%=1000000;
		cout<<dp[i]<<'\n';
	}
	cout<<dp[num.length()];
}
