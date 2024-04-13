#include "kernel.h"
using namespace std;
extern int ans;
void txt_add(){
	ans++;
	out="输入此文件名字:";
	txt[ans].name=in();
	for(int i=1;i<=ans-1;i++){//查找重复
		if(txt[i].name==txt[ans].name){
      out="出现重复名称!";
      ans--;
      return;
		}
	}
	out="输入此文件内容:";
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
	out="未寻找到";
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
