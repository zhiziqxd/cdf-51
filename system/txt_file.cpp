#include "kernel.h"
using namespace std;
extern int ans;
void txt_add(){
	ans++;
	out="������ļ�����:";
	txt[ans].name=in();
	for(int i=1;i<=ans-1;i++){//�����ظ�
		if(txt[i].name==txt[ans].name){
      out="�����ظ�����!";
      ans--;
      return;
		}
	}
	out="������ļ�����:";
	txt[ans].text=in();
	return;
}
void txt_del(int x){
	if(x==ans){
		ans--;
		return;
	}
	else{
		for(int i=x;i<=ans;i++){
			if(txt[i+1].name){
				txt[i].name=txt[i+1].name;
		  	txt[i].name=txt[i+1].text;
			}
		}
		return;
	}
}
void txt_find(char* str){
	for(int i=1;i<=ans;i++){
		if(txt[i].name==str){
			out=txt[i].name+"->"+txt[i].text;
			return;
		}
	}
	out="δѰ�ҵ�";
	return;
}
void txt_change(char* str,char* new_name,char* new_text){
	for(int i=1;i<=ans;i++){
		if(str==txt[i].name){
			txt[i].name=new_name;
			txt[i].text=new_text;
		}
	}
	return;
}
