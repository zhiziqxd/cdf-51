#include "kernel.h"
using namespace std;
extern int ans;
char* str_digit(int x){
	char* str;
	while(x>0){
		str+=char(x%10+48);
		x/=10;
	}
	return str;
}
void draw(int b){
	for(int i=1;i<=100;i++){
		for(int j=1;j<=100;j++){
			out+=ppt[x].t[b][i][j];
	  }
	  out+="/n";
	}
	return;
}
void ppt_start(int x){
	char* in_;
	int b=1;
	while(true){
		draw();
		in_=in();
		if(in_=="end"){
			return;
		}
		else if(in_=="+"){
			if(b+1<=100){
				b++;
			}
		}
		else if(in_=="-"){
			if(b-1>=1){
				b--;
			}
		}
		else{
			cout<<"notfound!";
		}
	}
}
void system(const char* str){
	if(str=="file_list"){
		for(int i=1;i<=ans;i++){
			if(txt[i].name){
				out=str_digit(i)+'.'+txt[i].name+"/n";
			}
			else{
				out=str_digit(i)+'.'+txt[i].name+"/n";
			}
		}
	}
	else if(str=="start"){
		char* in_=in();
		for(int i=1;i<=ans;i++){
			if(in_==txt[i].name){
				out="";//Çå¿Õ
				out+=txt[i].name+"/n------------------------"+txt[i].text;
			}
			else if(in_==ppt[i].name){
				ppt_start(i);
			}
		}
	}
	else if(str=="sort"){
		str=in();
		for(int i=1;i<=ans;i++){
			if(str==txt[i].name){
				for(int i1=1;i<=length(txt[i].text);i++){
					for(int j=i+1;j<=length(txt[i].text);j++){
						if(txt[i].text[i1]>txt[i].text[j]){
							swap(txt[i].text[i1],txt[i].text[j]);
						}
					}
				}
			}
		}
	}
	else if(str=="CPY"){
		str=in();
		char* a,b;
		for(int i=1;str[i];i++){
			if(str[i]!=' '){
				a+=str[i];
			}
			else{
				for(int j=i+1;str[i];j++){
					b+=str[i];
				}
				break;
			}
		}
		for(int i=1;i<=ans;i++){
			if(txt[i].name==a){
				char* ctrlc=txt[i].text
			}
			if(txt[i].name==b){
				txt[i].text=ctrlc;
				break;
			}
		}
	}
	else if(str=="sleep"){
		str=in();
		sleep(digit(str));
	}
	else{
		out="not found";
	}
}
