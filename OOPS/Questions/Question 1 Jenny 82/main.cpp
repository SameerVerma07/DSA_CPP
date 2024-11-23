#include"module.h"
int main()
{
    Instructor * obj = new Instructor();
    // obj.name="koni chiwa";
    obj->name="oni chan";
    obj->exp=12;

    obj->Display();
    return 0;
}