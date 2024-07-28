#include "hppSave.h"

//修改联系人
void modifpreson(struct addressbooks* abs){
    cout << "请输入您要修改的联系人:";
    string name;
    cin >> name;
    int ret = islist(abs,name);
    if(ret == -1){
        cout << "您没有这个叫" << name << "的联系人" << endl;
    }else{
        //姓名修改
        cout << "请输入修改后的姓名:";
        string name1;
        cin >> name1;
        abs->personarray[ret].name = name1;
        //性别修改
        while(true){
            cout << "请输入修改后的性别:";
            int sex;
            cin >> sex;
            if(sex == 1 || sex == 2){
                abs->personarray[ret].sex = sex;
                break;
            }
            cout << "输入有误，请重新输入！" << endl;
        }
        //年龄修改
        cout << "请输入修改后的年龄:";
        int age;
        cin >> age;
        abs->personarray[ret].age = age;
        //电话修改
        cout << "请输入修改后的电话:";
        string phone;
        cin >> phone;
        abs->personarray[ret].phone = phone;
        //地址修改
        cout << "请输入修改后的地址:";
        string addr;
        cin >> addr;
        abs->personarray[ret].addr = addr;
    }
    system("pause");
    system("cls");
}