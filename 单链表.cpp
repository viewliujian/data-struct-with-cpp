<第二代描述>
****关于单链表****
1.单链表结点描述
typedef struct node
{
  ElemType data;
  struct node *next;  
}LinkListNode;

2.单链表的初始化
/*=================================
函数功能：单链表运算————初始化
函数输入：无
函数输出：单链表头指针
==================================*/
LinkListNode *initialize_Lklist(void)
{
  LinkListNode *head;
  head = (LinkListNode*)malloc(sizeof(LinkListNode));
  if(head = NULL)
    exit(1);
  head->next = NULL;
  return head;
}

3.建立单链表
  1）尾插法建立单链表：不断在单链表的尾部插入结点；
  /*=================================
  函数功能：单链表操作————尾插法建立单链表
  函数输入：结点值数组，结点个数
  函数输出：单链表的头指针
  ==================================*/
  LinkListNode *Create_Rear_List(ElemType a[], int n)
  {
    LinkList *head, *p, *q;  //p当前结点，q前驱结点
    
    head = (LinkListNode*)malloc(sizeof(ListLinkNode));
    q = head;
    
    for(int i = 0; i < n; i++)
    {
      p = (LinkListNode*)malloc(sizeof(LinkListNode));
      p->data = a[i];
      q->next = p;
      q = p;
    }
    p->next = NULL;
    return head;
  }
  1）头插法建立单链表方法1：不断在单链表的头部插入结点；
  /*=================================
  函数功能：单链表操作————头插法建立单链表方法1
  函数输入：结点值数组，结点个数
  函数输出：单链表的头指针
  ==================================*/
  LinkListNode *Create_Front1_LkList(ElemType a[], int n)
  {
    LinkList *head, *p, *q;
    
    head = (LinkListNode*)malloc(sizeof(LinkListNode));
    head->next = NULL;
    q = head->next;
    
    for(i = n - 1; i >= 0; i--)
    {
      p = (LinkListNode*)malloc(sizeof(LinkListNode));
      p->data = a[i];
      p->next = q;
      
      head->next = p;
      q = head->next;
    }
    return head;
  }


















