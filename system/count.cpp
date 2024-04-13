#include "kernel.h"
using namespace std;
int pow(int a,int b){
	int ans=1;
	for(int i=1;i<=b;i++){
		ans*=a;
	}
	return ans;
}
int digit(char* x){
	int cnt=0;
	int ans=0;
	for(int i=1;x[i];i++){
		cnt++;
	}
	while(cnt--){
		ans+=int(x[i]-48)*pow(10,cnt);
	}
	return ans;
}
int count(){
	int a,b;
	char x;
	a=digit(in());
	x=in();
	b=digit(in());
	if(x=='+'){
		return a+b;
	}
	else if(x=='-'){
		return a-b;
	}
	else if(x=='*'){
		return a*b;
	}
	else if(x=='/'){
		return a/b;
	}
	else if(x=='^'){
		return pow(a,b);
	}
	else{
		return 0;
	}
}
