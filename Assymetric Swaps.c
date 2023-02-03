#include <stdio.h>
int compareInt(const void *pa,const void *pb)
{
    const int *p1=pa;
    const int *p2=pb;
    return *p1-*p2;
}
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int n;
	    scanf("%ld",&n);
	    long int c=2*n;
	    long int a[c];
	    for(long int i=0;i<c;i++)
	    scanf("%ld",&a[i]);
	    long int b=sizeof(a)/sizeof(long int);
	    qsort(a,b,sizeof(long int),compareInt);
	   // for(int i=0;i<c;i++)
	   // printf("%ld ",a[i]);
	   // printf("\n");
	    long int min=a[c-1];
	    for(long int i=0;i<=n;i++){
	       long int d=a[n+i-1]-a[i];
	        min=(min>d?d:min);
	    }
	   
	  printf("%ld\n",min);
	}
	
	return 0;
}
