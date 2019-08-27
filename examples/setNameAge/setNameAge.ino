#include <DFRobot_DY.h>

void setup(void){
  Serial.begin(115200);  //初始化串口
  delay(100);
  DFRobot_DY dy;         //建立对象
  dy.setName("zhangsan");dy.setAge(18);//进行赋值
  Serial.print("name=");Serial.println(dy.getName()); //打印和取值
  Serial.print("age=");Serial.println(dy.getAge());
}

void loop(void){
  
}
