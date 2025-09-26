#include <stdio.h>
#include <string.h>

int main(){
	int i,error=0,len;
	char str[100];
	
	printf("Enter a word: ");
	scanf("%s",str);
	
	len = strlen(str);
	
	for(i=0;i<len/2;i++){
		if(str[i]!=str[len-1-i]){
			error=1;
			break;
		}
	}
	if(error==1){
		printf("%s is not a Palindrome",str);
	}
	else{
		printf("%s is a palindrome",str);
	}
	return 0;
}

