#include "iostream"
#include "string"
#define MAX 1000

using namespace std;

//联系人结构体
struct person{
    string name;
    string phone;
    string addr;
    int sex;
    int age;
};

//通讯录结构体
struct addressbooks{
    struct person personarray[MAX];
    int person_Size;
};

//函数调用
void showmenu();
void addperson(struct addressbooks* abs);
void showperson(struct addressbooks* abs);
int islist(struct addressbooks* abs, string name);
void deleteperson(struct addressbooks* abs);
void findperson(struct addressbooks* abs);
void modifpreson(struct addressbooks* abs);
void cleanperson(struct addressbooks* abs);