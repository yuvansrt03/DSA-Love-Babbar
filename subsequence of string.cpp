#include<bits/stdc++.h>
using namespace std;

string print(string s , int i){
	int j = 0;
	string sub;
	while(i>0){
		if(i & 1){
			sub.push_back(s[j]);
		}
		j++
		i = i >> 1;
	}
	
	return sub;
}

vector<string> createsubsets(string& s){
	
	vector <string> res;
	for(int i = 1 ; i <= ((1 << s.size()) - 1) ; i++){
		res.push_back(print(s,i));
	}
	return res;
}


