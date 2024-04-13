#include "kernel.h"
using namespace std;
extern int ans;
char* flag;
void ppt_add(){
	ans++;
	out="ppt名字";
	ppt[ans].name=in();
	while(flag!="end"){
		flag=in();
		if(flag=="x&y"){
			int x,y;
			char ch;
			flag=in();//使用else if不会导致其它结果
			x=digit(flag);
			flag=in();
			y=digit(flag);
			ch=input();
			ppt[ans].t[ppt[ans].z][x][y]=ch;
		}
		else if(flag=="to"){
			int go=digit(in());
			ppt[ans].z=go;
		}
		else{
			break;
		}
	}
	return;
}
void ppt_del(int x){
	if(x==ans){
		ppt[ans].z=0;
		ppt[ams].name="";
		for(int i=1;i<=99;i++){
			for(int j=1;j<=99;j++){
				for(int k=1;k<=99;k++){
					ppt[ans].t[i][j][k]=' ';
				}
			}
		}
	}
	else{
		for(int i=x;i<ans;i++){
			ppt[i].name=ppt[ans].name;
			for(int i1=1;i1<=99;i1++){
				for(int j=1;j<=99;j++){
					for(int k=1;k<=z;k++){
						if(ppt[i+1]){//判断下一个文件是否可能是txt文件
							ppt[i].t[i1][j][k]=ppt[i+1].t[i1][j][k];
						}
					}
				}
			}
		}
	}
}
void ppt_change(){
	out="ppt名字";
	char* find;
	int h=-1;
	find=in();
	for(int i=1;i<=ans;i++){
		if(find==ppt[i].name){
			h=i;
			break;
		}
	}
	if(h==-1){
		out="找不到需要编辑的文件!";
		sleep(1);
		return;
	}
	while(flag!="end"){
		flag=in();
		if(flag=="x&y"){
			int x,y;
			char ch;
			flag=in();//使用else if不会导致其它结果
			x=digit(flag);
			flag=in();
			y=digit(flag);
			ch=input();
			ppt[ans].t[ppt[h].z][x][y]=ch;
		}
		else if(flag=="to"){
			int go=digit(in());
			ppt[h].z=go;
		}
		else{
			break;
		}
	}
	return;
}
