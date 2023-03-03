#include <iostream>
 
using namespace std;
 
class Hello
{
   public:
      double length;   // 长度
      double breadth;  // 宽度
      double height;   // 高度
      // 成员函数声明
    public:
        void print1(void);
};
// 成员函数定义
void Hello::print1(void)
{
    cout<< "This is an example to show how to use class in c++"<<endl;
}
 
