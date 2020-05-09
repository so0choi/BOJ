#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Tokenize(string str, vector<string>& tokens){
	string delimiters="+-*";
    int start = 0;
    int end = str.find_first_of(delimiters);
    while(start!=string::npos||end!=string::npos){
    	tokens.push_back(str.substr(start,end));
//    	tokens.push_back(str.substr(end,1));
    	start = end+1;
    	end = str.find_first_of(delimiters,start);
	}
}
long long solution(string expression) {
    long long answer = 0;
    
	  vector <string> tokens;
	  Tokenize(expression,tokens);
	  for(auto a:tokens){
	  	cout<<a<<'\n';
	  }
    
    
    return answer;
}
int main(){
	string str;
	cin>>str;
	solution(str);
}
