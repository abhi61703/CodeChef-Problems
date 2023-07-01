#include <stdio.h>


int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--){
	    int expense,salary;
	    scanf("%d%d",&expense,&salary);
	    int salary_x=1;
	    while ( salary!=0 )  {  
            salary_x=salary_x*2;
            salary--;
        }  
        int rem=0;
	    for(int i=expense;i>0;i--){
	        rem=salary_x/2;
	        salary_x-=rem;
	    }
	    printf("%d\n",salary_x);
	}
    
	return 0;
}

