#include "hppSave.h"

//1.添加联系人
void addperson(addressbooks* abs){
    if(abs->person_Size == MAX){
        cout << "您的联系人数量已满，无法添加" << endl;
        return;
    }else{
        //姓名
        string name;
        cout << "请输入姓名:";
        cin >> name;
        abs->personarray[abs->person_Size].name = name;
        //性别
        cout << "请输入性别:" << "1---男" << " " << "2---女" << endl;
        int sex;
        while(true){
            cout << "请输入：";
            cin >> sex;
            if(sex == 1 || sex == 2){
                abs->personarray[abs->person_Size].sex = sex;
                break;
            }
            cout << "输入有误，请重新输入！" << endl;
        }
        //年龄
        int age;
        while(true){
            cout << "请输入年龄:";
            cin >> age;
            abs->personarray[abs->person_Size].age = age;
            if(age < 0 || age > 130){
                cout << "输入有误，请重新输入！" << endl;
            }else{
                break;
            }
        }
        //电话
        cout << "请输入联系电话:";
        string phone;
        cin >> phone;
        abs->personarray[abs->person_Size].phone = phone;
        //住址
        cout <<"请输入家庭住址:";
        string address;
        cin >> address;
        abs->personarray[abs->person_Size].addr = address;
        abs->person_Size++;
        cout << "添加联系人成功!" << endl;
    }
    system("pause");
    system("cls");
}