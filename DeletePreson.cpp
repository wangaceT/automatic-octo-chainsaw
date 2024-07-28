#include "hppSave.h"

//删除联系人
void deleteperson(struct addressbooks* abs){
    cout << "请输入您想删除的联系人:";
    string name;
    cin >> name;
    int ret = islist(abs,name);
    if(ret == -1){
        cout << "您没有这个叫" << name << "的联系人" << endl;
    }else{
        for(int i = 0; i < abs->person_Size; i++){
            abs->personarray[i] = abs->personarray[i+1];
        }
        abs->person_Size--;
    }
    system("pause");
    system("cls");
}