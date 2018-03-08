//输出不符， 
#include <stdio.h>//标准输入输出 
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
	if(n%2==0||n<1||n>=9)
		return;
	for(int i=1;i<=n;++i)
	{
		int j=0;
		for(;j<=ceil(n/2)-i;++j)
			printf("%c",' ');
		for(;j>ceil(n/2)-i&&j<ceil(n/2)+i;++j)
			printf("%d",i);
		for(;j<=n;++j)
			printf("%c",' ');
		printf("\n");//输出换行 
//			printf(" ");
//		printf(i);
	}
}
	
