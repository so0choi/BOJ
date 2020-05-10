#include <iostream>
using namespace std;
int memo[101][11]={0,};
//i �ڸ��� j�� ������ ��  
long long find_floor(int num){
	for(int i=1;i<=9;i++)
		memo[1][i]=1;
		
	for(int i=2;i<=num;i++){
		//0���� ������ ���� �ڿ� 1 �ۿ� �� �´� 
		memo[i][0] = memo[i-1][1];
		for(int j=1;j<=8;j++){
			memo[i][j] =( memo[i-1][j-1]+memo[i-1][j+1])%1000000000;
		}
		//9�� ������ ���� �ڿ� 8 �ۿ� �� �´� 
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
