//
// Created by tanghuijuan on 2023/2/17.
//
#include <iostream> // 编译预处理
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