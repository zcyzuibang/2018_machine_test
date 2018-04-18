#include<iostream>
#include<string>
using namespace std;
string num(string a){
	string b=a;
	int count=a.size();
	for(int i=0;i<count;i++){
		if(b[i]>='0'&&b[i]<='9'/*||b[i]==' '||b[i]=='\t'*/){
			--count;
			for(int j=i;j<count;j++)b[j]=b[j+1];
			--i;
			
		}
	}
	string c=b.substr(0,count) ;
	return c;
}
int main(){
	string a;
	int leng;
	getline(cin,a);
	cin>>leng;
	string b,c;
	b=num(a);
	int x,y;
	x=a[leng-1];
	for(int i=leng-1;i>=0;i--){
		x=b[i];
		if(x<0)y++;
		else break;
	}
	if(y%2==0)c=b.substr(0,leng);
	else c=	b.substr(0,leng+1);
	
	cout<<c;
	return 0;
	
}
