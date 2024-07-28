#include "hppSave.h"

//显示联系人
void showperson(struct addressbooks* abs){
    if(abs->person_Size == 0){
        cout << "您还没有联系人呢！" << endl;
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