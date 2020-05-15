/*!
 * @file DFRobot_PERSON.h
 * @brief 定义DFRobot_PERSON 类的基础结构，基础方法的实现
 * 
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @licence     The MIT License (MIT)
 * @author [Arya](techsupport@dfrobot.com)
 * @version  V1.0
 * @eGDAte  2019-07-28
 * @get from https://www.dfrobot.com
 * @url xxxxxx
 */
 #include "DFRobot_PERSON.h"
 #include "string.h"

//构造函数的重写
DFRobot_PERSON::DFRobot_PERSON(){
    Serial.print("Hello World");
}
//虚构函数的重写
DFRobot_PERSON::~DFRobot_PERSON(){
    Serial.print("Hello World, I'm back")
}
//设置姓名的函数
int DFRobot_PERSON::setname(const char*name){
    if(strlen(name)<20){
        _name=name;
        return 0;
    }
    return -1;
}
//设置年龄的函数(输入整数类型)
int DFRobot_PERSON::setAge(uint8_t age){
    if((age>18)||(age<100)){
        _age=age;
        return 0;
    }
    return -1;
}
//设置年龄的函数(输入字符串类型)
int DFRobot_PERSON::setAge(String age){
    int tem=age.toInt();
    if((tem>18)||(tem<100)){
        _age=tem;
        return 1;
    }
    return 0;
}
//得到姓名的函数
String DFRobot_PERSON::getname(){
    return _name;
}
uint8_t DFRobot_PERSON::getage(){
    return _age;
}
