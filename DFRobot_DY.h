#ifndef __DFROBOT_DY_H__
#define __DFROBOT_DY_H__

#if ARDUINO >= 100
#include "Arduino.h" //注意使用uint8_t的时候必须导入这个Arduino.h头文件
#else
#include "WProgram.h"
#endif

class DFRobot_DY
{
	public:
	char name[20];
	/**
	* @brief 构造函数
	* @param 可以对其进行重写
	*/
	DFRobot_DY();
	/**
	* @brief 析构函数
	* @param 在程序销毁是执行
	*/
	~DFRobot_DY();
	/**
	* @brief 赋值姓名函数
	* @return 返回0表示初始化成功，返回-1表示失败
	*/
	int setName(const char * name);
	/**
	* @brief 赋值姓名函数
	* @param 返回0表示初始化成功，返回-1表示失败
	*/
	int setAge(uint8_t age);
/**
* @brief 赋值年龄函数
* @param 字符串类型的赋值
*/
	int setAge(String age);
/**
* @brief 取值函数
* @param 取到你赋值姓名的函数
*/
	String getName(void);
/**
* @brief 取值函数
* @param 取到你赋值年龄的函数
*/
	uint8_t getAge(void);
	private: 
//私有化定义的变量
	String _name;
	uint8_t _age;
};
#endif