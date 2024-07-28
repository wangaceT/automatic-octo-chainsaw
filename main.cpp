#include "iostream"
#include "string"
#include "hppSave.h"

using namespace std;

//主函数
int main(){
    addressbooks abs;
    abs.person_Size = 0;
    while(true){
        showmenu();
        int select;
        cout << "请输入你的选择:";
        cin >> select;
        switch (select) {
            case 1:
                //添加联系人
                addperson(&abs);
                break;
            case 2:
                //显示联系人
                showperson(&abs);
                break;
            case 3:
                //删除联系人
                deleteperson(&abs);
                break;
            case 4:
                //查找联系人
                findperson(&abs);
                break;
            case 5:
                //修改联系人
                modifpreson(&abs);
                break;
            case 6:
                //清空联系人
                cleanperson(&abs);
                break;
            case 0:
                //退出通讯录
                cout << "欢迎下次使用！" << endl;
                cin.ignore();
                return 0;
                break;
            default:
                break;
        }
    }
    system("pause");
    return 0;
}