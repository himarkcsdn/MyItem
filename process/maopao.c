#include<stdio.h>

typedef int(*Compare)(int a, int b)


int Greater(int a, int b)
{
    return a>b?1:0 ;
}


int Less(int a, int b)
{
    return a<b? 1:0;
}

void Swap(int *a , int *b)
{
    int tmp=*a;
    a*=*b;
    *b=tmp;
}


//从前往后冒泡
//[0,bound]  未排区间
//(bound, size)  已排区间
void bubblesort(int arr[], uint64_t size, Compare cmp)
{
    if(arr[]==NULL||size<=1)
    {
        return ;
    }
    int bound=size-1;
    for(;bound>0;bound--)
    {
        int cur=0;
        for(;cur<bound;cur++)
        {
            if(cmp(arr[cur],arr[cur+1])==1)
            {
                Swap(&arr[cur],&arr[cur+1]);
            }
        }
    }
    return ;
}

//从后往前冒泡
//[0,bound]   已排区域
//[bound,size]   未排区域


void  Bubblesort(int arr[], uint64_t size , Compare cmp)
{
    if(arr[]==NULL||size<=1)
    {
        return ;
    }
    int bound=0;
    for(;bound<size-1;bound++)
    {
        int cur=size-1;
        for(;cur>bound;cur--)
        {
            if(cmp(arr[cur],arr[cur+1])==1)
            {
                Swap(arr[cur],arr[cur+1]);
            }
        }
    }
    return ;
}



