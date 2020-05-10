#include <iostream>
using namespace std;
int memo[101][11]={0,};
//i 자리의 j로 끝나는 수  
long long find_floor(int num){
	for(int i=1;i<=9;i++)
		memo[1][i]=1;
		
	for(int i=2;i<=num;i++){
		//0으로 끝나는 층은 뒤에 1 밖에 못 온다 
		memo[i][0] = memo[i-1][1];
		for(int j=1;j<=8;j++){
			memo[i][j] =( memo[i-1][j-1]+memo[i-1][j+1])%1000000000;
		}
		//9로 끝나는 층은 뒤에 8 밖에 못 온다 
		memo[i][9] = memo[i-1][8];
	}
	long long sum=0;
	for(int i=0;i<=9;i++){
		sum += memo[num][i];
		sum%=1000000000;
	}
	return sum;
}
int main(){
	int num;
	cin>>num;
	cout<<find_floor(num);
}
