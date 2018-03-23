****顺序表****
1.定义：将线性表中的元素依次放在一个连续的存储空间（数组）中，这样的线性表叫顺序表。
2.存储特点
  1）逻辑上相邻，对应的物理地址相邻。
  2）任意元素均可随机存取。
  
3.结点设计
typedef int ElemType;
#define LIST_SIZE 1024
typedef struct 
{
  ElemType data[LIST_SIZE];
  int last; //指向最后结点的位置
}SequenList;
SequenList *LPtr;

4.运算/操作
  1）初始化
  2）求长度
  3）取元素
  4）定位
  5）插入
  6）删除
  7）遍历
  
5.操作的程序实现
  1）插入
  /*===============================================
  函数功能：顺序表运算————元素的插入
  函数输入：顺序表地址，插入值，插入地址
  函数输出：完成标志———— 0：异常， 1：正常
  时间复杂度：O(n)
  ================================================*/
  int Insert_SqList(SeqList *LPtr, ElemType x, int k)
  {
    if(LPtr->last >= LIST_SIZE - 1)
      return FALSE;
    else if(k < 0 || k > LPtr->last + 1)
      return FALSE;
    else
    {
      for(int j = LPtr->last; j >= k; j--)
      {
        LPtr->data[j + 1] = LPtr->data[j];
      }
      LPtr->data[k] = x;
      Lptr->last = LPtr->last + 1;
    }
    return TRUE;
  }
  
  2）删除
  /*===============================================
  函数功能：顺序表运算————元素的删除
  函数输入：顺序表地址，删除位置
  函数输出：完成标志———— 0：异常， 1：正常
  时间复杂度：O(n)
  ================================================*/
  int Delete_SqList(SeqList *Lptr, int k)
  {
    if((k >= 0 && k <= LPtr->last) && LPtr->last != 0)
    {
      for(int j = k; j <= LPtr->last; j++)
      {
        LPtr->data[j] = Lptr->data[j + 1];
      }
      LPtr->last--;
      return TRUE;
     else
      return FALSE;
    }
  }
  
  3）查找
  /*===============================================
  函数功能：顺序表运算————查找给定的值
  函数输入：顺序表地址，要查找的结点
  函数输出：完成标志 0：下标值， -1：异常
  时间复杂度：O(n)
  ================================================*/
  int Locate_SqList(SeqList *LPtr, ElemType key)
  {
    for(int i = 0; i <= LPtr->last; i++)
    {
      if(LPtr->data[i] == key)
        return i;
    }
    return -1;
  }
  
  4）取值
  /*===============================================
  函数功能：顺序表运算————取给定下标的元素值
  函数输入：顺序表地址，下标位置
  函数输出：正常：1，异常：0
  时间复杂度：O(1)
  ================================================*/
  int Get_SqList(SeqList *LPtr, int i, ElemType *e)
  {
    if(i < 0 || i > Lptr->last) 
      return FALSE;
    if(LPtr->last <=0)
      return FALSE;
    *e = LPtr->data[i];
    return TRUE;
  }
 
 5)优点
 方法简单，容易用数组实现；
 存储空间使用紧凑；
 可以按元素序号随机访问。
 6）缺点
 插入/删除平均需要移动一半的元素，若顺序表过大，则效率低；
 表容量难以扩充，所以需要准确的知道需要多大的空间；
 预存空间较小，导致溢出；预存空间较大，导致浪费。
 ****顺序表****
