#include <iostream>
#include <cstring>
#include <cctype>

char* invertir(char *frase,int);
using namespace std;

int main(){
	char *frase=new char[50],*fraseinv;
	cout<<"Dame el texto a invertir"<<endl;
	fflush(stdin);
	cin.getline(frase,50);
	cout<<endl;
	fraseinv=invertir(frase,strlen(frase));
	for(int i=0;fraseinv[i]!='\0';i++){
		cout<<fraseinv[i];
	}
	
	return 0;
}

char* invertir(char *frase,int n){
	char *fraseinv=new char[n];
	int i,j=0;
	char c;
	for(i=n;i>=0;i--){
		c=frase[i];
		if(isdigit(c)){
			fraseinv[j++]=c;
		}
		if(isupper(c)){
			fraseinv[j++]=tolower(c);
		}
		if(islower(c)){
			fraseinv[j++]=toupper(c);
		}
		if(isblank(c)){
			fraseinv[j++]=c;
		}
	}
	fraseinv[j]='\0';
	return fraseinv;
}
