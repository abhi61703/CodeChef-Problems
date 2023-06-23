#include <stdio.h>

int main(void) {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int freq[26] = {0};
	    int n;
	    scanf("%d",&n);
	    char str[n];
	    scanf("%s",str);
	    for(int i=0;i<n;i++){
	        freq[str[i]-'a']++;
	    }
	    int flag=1;
	    for(int i=0;i<26;i++){
	        if(freq[i]%2!=0){
	            printf("NO\n");
	            flag=0;
	            break;
	        }
	    }
	    if(flag==1)
	        printf("YES\n");
	}
	return 0;
}

