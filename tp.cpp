#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a;
	a.push_back(1);
	a.push_back(5);
	a.push_back(3);
	a.push_back(9);
	a.push_back(12);
	int max = 6;
	for(auto i:a){
		if(a>max){
			max = a;
		}
	}
	return max;
}
