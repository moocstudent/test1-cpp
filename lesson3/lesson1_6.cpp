//
// Created by tanghuijuan on 2023/2/17.
//
#include <iostream> // 编译预处理
#include <cmath>

using namespace std; //名字空间

/**
 * 计算两个数的和
 * @return
 */
int calculate(){
    cout <<4+3<<endl;
    return 0;
}

/**
 * 监听键盘2个数字输入，得出结果
 */
int calculate1(){
    int a,b,c;  //说明用分别a，b，c表示整数
    cout<<"请输入两个数字，以空格或回车隔开。"<<endl;
    cin>>a>>b;  //输入a，b的值
    c=a+b;      //计算a，b的和
    cout<<c<<endl; //显示结果c的值
    return 0;
}

/**
题目内容：

输入一个三角形的两个直角边的长度，求其斜边的长度：计算公式是

   c=sqrt(a*a+b*b)

其中, a,b是两个直角边的长度，c是斜边，sqrt表示开平方。

输入格式:

两个double型实数，用空格隔开。

 输出格式：

一个实数

 输入样例：

1 2

 输出样例：

2.23607
 * @return
 */
int calculate2(){ //通过
    double a,b;
    cin>>a>>b;  //输入a，b的值
    double c=sqrt(a*a+b*b);
    cout<<c<<endl; //显示结果c的值
    return 0;
}