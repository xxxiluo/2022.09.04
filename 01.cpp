#include<stdio.h>
#include"SORT.h"

int main()
{
	int a[10]={1,8,9,3,2,5,44,6,7,25};
	//sort_bub(a,10);
	//sort_insert(a,10);
	//quick_sort(a,0,10);
	shell_sort(a,10);
	for(int i=0;i<10;i++) printf("%d ",a[i]);
	printf("\n");
}