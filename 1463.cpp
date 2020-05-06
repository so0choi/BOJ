#include <iostream>
using namespace std;
//DP(Dynamic Programming) 
//10^6까지의 숫자를 테스트 한다 
int memo[1000001]={0,};

int find(int num){
	//down-top  
	for(int i=2;i<=num;i++){
		//1을 뺐을 때의 경우를 먼저 저장 
		memo[i] = memo[i-1]+1;
		//2와 3으로 나누어 떨어질 때 비교하여 작은 것 선택 
		if(i%2==0) 
			if(memo[i] > memo[i/2]) 
				memo[i]=memo[i/2]+1;
		if(i%3==0)
			if(memo[i]>memo[i/3])
				 memo[i] = memo[i/3]+1;
	}
	return memo[num];
}
int main(){
	int num;
	cin>>num;
	cout<<find(num);
	
}
