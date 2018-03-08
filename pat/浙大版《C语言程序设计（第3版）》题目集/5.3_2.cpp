#include <stdio.h>
#include<math.h>
void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}
void pyramid(int n)
{
	if(n<=1||n>9)
		return;
	int N=2*n-1;
	for(int i=1;i<=n;++i)
	{
		int j=1;
		for(;j<=ceil(N/2)-i;++j)
			printf("%c",' ');
		for(;j>ceil(N/2)-i&&j<ceil(N/2)+i;++j)
			if((j%2+i%2)%2==0)
				printf("%d",i); 
			else
				printf("%c",' ');//这个else加不加很重要 
		for(;j<=N;++j)
			printf("%c",' ') ;
		printf("\n");
	}
}
			
