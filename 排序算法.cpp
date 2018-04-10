一、 按照复杂度来分类

1. 简单的排序算法：复杂度是O(n^2)
2. 先进的排序算法：复杂度是O(nlogn)
3. 基数排序：复杂度是：O(d*n)

二、 Sorting Algorithm
1. 直接插入排序/insertion sort
=================================
函数功能：直接插入排序
函数输入：数组首地址*a, 数组长度n
函数输出：无
=================================
void InsertSort(int *a, n)
{
  int i;
  int j;
  
  int temp; //作为哨兵，占用一个额外空间
  for(i = 1; i < n; ++i)
  {
    if(a[i] < a[i-1])
    {
      temp = a[i];//哨兵
      for(j = i - 1; temp < a[j] && j >=0; --j)
      {
        a[j+1] = a[j]
      }
    
    }
  
  }


}
