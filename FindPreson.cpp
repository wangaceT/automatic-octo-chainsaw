#include "hppSave.h"

//查找联系人
void findperson(struct addressbooks* abs){
    cout << "请输入您要查找的联系人:";
    string name;
    cin >> name;
    int ret = islist(abs,name);
    if(ret == -1){
        cout << "您没有这个叫" << name << "的联系人" << endl;
    }else{
        for(int i = 0; i < abs->person_Size; i++){
            cout << "姓名:" << abs->personarray[i].name << endl;
            cout << "性别:" << (abs->personarray[i].sex == 1 ? "男" : "女") << endl;
            cout << "年龄:" << abs->personarray[i].age << endl;
            cout << "电话:" << abs->personarray[i].phone << endl;
            cout << "住址:" << abs->personarray[i].addr << endl;
        }
    }
    system("pause");
    system("cls");
}