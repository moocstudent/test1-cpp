//
// Created by tanghuijuan on 2023/2/17.
//
#include <iostream> // 编译预处理
using namespace std; //名字空间

int card(){
    cout <<"###############################################"<<endl;
    cout <<"Zhang"<<endl;
    cout<<endl;
    cout<<"Happy birthday to you!"<<endl;
    cout<<endl;
    cout<<"        sincerely yours  Wang"<<endl;
    cout <<"###############################################"<<endl;
    return 0;
}

/**
 * 输入时，输入两个名字，每个名字回车隔开，也可以空格（或多个空格）隔开
 * @return
 */
int card1(){
    char name1[50],name2[50]; //声明语句，name1，name2字符数组
    cout<<"请输入收件人和送件人！按回车或者空格隔开。"<<endl;
    cin>>name1>>name2; //输入字符串 先声明后使用 cin类似Java Scanner表示读取输入数据
    cout <<"###############################################"<<endl;
    cout <<name1<<endl;
    cout<<endl;
    cout<<"Happy birthday to you!"<<endl;
    cout<<endl;
    cout<<"        sincerely yours  "<<name2<<endl;
    cout <<"###############################################"<<endl;
    return 0;
}

/**
 * 解决输入中字符串一个单元中有空格的问题，cin.getline为按行读取
 * @return
 */
int card2(){
    char name1[50],name2[50]; //声明语句，name1，name2字符数组
    cout<<"请输入收件人和送件人！按回车隔开。"<<endl;
    cin.getline(name1,50); // cin.getline以回车为输入的分隔符
    cin.getline(name2,50);
    cout <<"###############################################"<<endl;
    cout <<name1<<endl;
    cout<<endl;
    cout<<"Happy birthday to you!"<<endl;
    cout<<endl;
    cout<<"        sincerely yours  "<<name2<<endl;
    cout <<"###############################################"<<endl;
    return 0;
}