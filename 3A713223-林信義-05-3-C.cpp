#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int base,Dec,len;
	int mul=1;
	char Src[100];
	int tmp=0;
	
    base=16; 
	printf("�п�J�n�ഫ���Q���i��Ʀr:");
	scanf("%s",&Src);
	 
	strrev(Src);
	len=strlen(Src)-1;
    
	for(;len>=0;len--){
		if(Src[len]>='0' && Src[len]<='9'){
			tmp=Src[len]-'0';
			if(tmp>=base){
				break;
			}
			mul=pow(base,len);
	    	Dec=Dec+mul*tmp;
		}
	    else if(Src[len]>='a' && Src[len]<='z'){
			tmp=Src[len]-'a'+10;
			if(tmp>=base){
				break;
			}
			mul=pow(base,len);
	    	Dec=Dec+mul*tmp;
		}
	}
	
	char s2[20];
	char s8[20];
	
	itoa(Dec,s2,2);
	itoa(Dec,s8,8);
	
	printf("�ഫ�᪺�G�i�%s\n",s2);
	printf("�ഫ�᪺�K�i�%s\n",s8);
	printf("�ഫ�᪺�Q�i�%d\n",Dec);

	system("PAUSE");
	return 0;
}
