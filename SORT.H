void sort_bub(int a[],int n);//冒泡排序
void sort_insert(int a[],int n);//插入排序
void quick_sort(int *num,int l,int r);//快速排序
void shell_sort(int arr[],int n);//希尔排序

void sort_bub(int a[],int n)
{
	int i,j,t;
	for(i = 0; i<n-1; i++)
		for(j = 0; j<n-i-1; j++)
			if(a[j]>a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
}

void sort_insert(int a[],int n)
{
	int t;
    for (int i = 1; i<n; i++)
	{
		for (int j = i-1; j>=0; j--)
		{
			if(a[j]>a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
			else break;
		}
	}
}

void quick_sort(int *num,int l,int r)//*num为数组，l为起始位置，r为元素个数
{
	if(l+1>=r){
		return ;
	}
	int first=l,last=r-1,key=num[first];
	while(first<last){
		while(first<last&&num[last]>=key){
			--last;
		}
		num[first]=num[last];
		while(first<last&&num[first]<key){
			++first;
		}
		num[last]=num[first];
	}
	num[first]=key;
	quick_sort(num,l,first);
	quick_sort(num,first+1,r);
}

void shell_sort(int arr[],int n)
{
    register int i, j, tmp;
    int step;

    for(step = n/2; step > 0;step /= 2)
    {
        for(i = step; i < n; i++)
        {
            tmp = arr[i];
            j = i - step;
            for(;j >= 0 && tmp < arr[j];)
            {
                arr[j + step] = arr[j];
                j -= step;
            }
            arr[j + step] = tmp;
        }
    }
}