#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int bang;
	int niang;
	char gan[]="I $am 5a$ go68od#@$ st-ude[nt].";
	char *ni;
	
	bang=strlen(gan);
	ni=gan;
	for(niang=0;niang<bang;niang++){
		if(*(ni+niang)<122&&*(ni+niang)>=96){
			printf("%c", *(ni+niang));
		}
		else if(*(ni+niang)<91&&*(ni+niang)>64){
			printf("%c", *(ni+niang));
		}
		else if(*(ni+niang)==32){
			printf("%c", *(ni+niang));
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
} 
