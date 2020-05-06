#include <iostream>
using namespace std;
//DP(Dynamic Programming) 
//10^6������ ���ڸ� �׽�Ʈ �Ѵ� 
int memo[1000001]={0,};

int find(int num){
	//down-top  
	for(int i=2;i<=num;i++){
		//1�� ���� ���� ��츦 ���� ���� 
		memo[i] = memo[i-1]+1;
		//2�� 3���� ������ ������ �� ���Ͽ� ���� �� ���� 
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
