****Pair****
1.class pair 可将两个value视为一个单元。
2.pair提供了“直接访问对应数据成员”的能力。
#include<utility>
namespace std{
  template <typename T1, typename T2>
  struct pair{
    //member
    T1 first;
    T2 second;
    ....
  };
}
