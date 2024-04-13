#ifndef CIRCLE_H
#define  CIRCLE_H
#include <reg51.h>
using namespace std;
sbit out=0x00;//输出
sbit in=0x01;//输入
out=0;
in=1;
struct text_file{
	char* name;
	char* text;
}txt[999];//内存少
struct ppt_file{
	char* name;
	char t[100][100][100];//x,y,页
	int z;//页数
}ppt[999];
bool shift=false;
char input(){
	char ch;
	ch=in;
	if(ch>='a'&&ch<='z'){
		ch=char(ch-32);
	}
	else{
		ch=number_ch(ch);
	}
	return ch;
}
char* in(){
	char ch;
	char* f;
	while(true){
		ch=in;
		if(ch!='/n'){
			if(shift==true){
				if(ch>='a'&&ch<='z'){
					out+=char(ch-32);
					f+=char(ch-32);
				}
				else{
					out+=number_ch(ch);
					f+=number_ch(ch);
				}
			}
			else{
				out+=ch;
				f+=ch;
			}
		}
		else{
			break;
		}
	}
	return f;
}
void sleep(int x){
	while(x--){
		for(int i=1;i<=120;i++)
	}
	return;
}
void number_ch(char ch){
	if(ch=='1'){
		return '!';
	}
	else if(ch=='2'){
		return '@';
	}
	else if(ch=='3'){
		return '#';
	}
	else if(ch=='4'){
		return '$';
	}
	else if(ch=='5'){
		return '%'';
	}
	else if(ch=='6'){
		return '^';
	}
	else if(ch=='7'){
		return '&';
	}
	else if(ch=='8'){
		return '*';
	}
	else if(ch=='9'){
		return '(';
	}
	else if(ch=='0'){
		return ')';
	}
	else if(ch=='['){
		return '{';
	}
	else if(ch==']'){
		return '}';
	}
	else if(ch==';'){
		return ':';
	}
	else if(ch=='/'){
		return '?';
	}
	else if(ch=='.'){
		return '>';
	}
	else if(ch==','){
		return '<';
	}
	return '?';
}
int length(char* str){
	int ans=0;
	for(int i=0;str[i];i++){
		ans++;
	}
	return ans;
}
#endif
