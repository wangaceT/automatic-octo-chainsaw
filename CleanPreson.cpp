#include "hppSave.h"

//清空联系人
void cleanperson(struct addressbooks* abs){
    abs->person_Size = 0;
    cout << "通讯录已清空！" << endl;
    system("pause");
    system("cls");
}