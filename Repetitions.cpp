#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	string str;
	ll seq=1;
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(str[i]==str[i+1])
			seq++;
		else
			seq=1;
	}
	cout<<seq;
	return 0;
}
