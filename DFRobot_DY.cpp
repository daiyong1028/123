#include <DFRobot_DY.h>
#include <string.h>
//构造函数的重写
DFRobot_DY::DFRobot_DY(){
Serial.println("hello DFRobot!!!");
}

//虚构函数的重写
DFRobot_DY::~DFRobot_DY(){
Serial.println("byebye DFRobot!!!");
}

//设置姓名的函数
int DFRobot_DY::setName(const char * name){
if(strlen(name)<20){
	_name = name;
	return 0;
}
	return -1;
}

//设置年龄的函数(输入整数类型)
int DFRobot_DY::setAge(uint8_t age){
if((age>18) || (age<100)){
	_age = age;
	return 0;
}
	return -1;
}

//设置年龄的函数(输入字符串类型)
int DFRobot_DY::setAge(String age){
	int tem = age.toInt();//toInt是把字符串类型转换成整数类型的函数
if((tem>18) || (tem<100)){
	_age = tem;
	return 1;
}
	return 0;
}

//得到姓名函数
String DFRobot_DY::getName(){
	return _name;
}

//得到年龄函数
uint8_t DFRobot_DY::getAge()
{
	return _age;
}