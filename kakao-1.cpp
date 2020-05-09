#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int dist1=0; int dist2=0;
    int l1=3; int l2=0;
    int r1=3; int r2=2;
    int phone[4][3] ={1,2,3,4,5,6,7,8,9,-1,0,-1};
    int row=-1,col=-1,sign=-1;
    for (vector<int>::iterator ptr=numbers.begin();ptr!=numbers.end();++ptr){
    	int temp = *ptr;
    	sign=-1;
    	for(int i=0;i<4;i++){
    		for(int j=0;j<3;j++){
    			if(temp==phone[i][j]){
    				row=i; col=j;
    				sign=1;
    				break;
				}
			}
			if(sign!=-1) break;
		}
		cout<<"row : "<<row<<" col : "<<col<<'\n';
		if(col==0){
			answer.append("L");
			l1=row;l2=col;
		}
		else if(col==2){
			answer.append("R"); r1=row;r2=col;
		}
		else{
			dist1 = abs(row-l1) + abs(col-l2); //L
			dist2 = abs(row-r1) + abs(col-r2); //R
			if(dist1>dist2) {
				answer.append("R"); r1=row;r2=col;
			}
			else if (dist1<dist2) {
				answer.append("L"); l1=row;l2=col;
			}
			else {
				if(hand == "right") {
						answer.append("R"); r1=row;r2=col;
				}
				else {
					answer.append("L"); l1=row;l2=col;
				}
			}
		}
	}
	
    return answer;
}
int main(){
	vector<int> numbers;
	for(int i=0;i<8;i++){
		int t;
		cin>>t;
		numbers.push_back(t);
	}
	cout<<solution(numbers,"right");

}
