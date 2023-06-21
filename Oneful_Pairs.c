#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
    scanf("%d%d%d\n",&a,&b,&c);
    if(a+b+(a*b)==111){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
	return 0;
}

