#include "hppSave.h"

//判断联系人是否存在
int islist(struct addressbooks* abs, string name){
    for(int i = 0; i < abs->person_Size; i++){
        if(abs->personarray[i].name == name){
            return i;
        }else{
            return -1;
        }
    }
}