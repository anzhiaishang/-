#include <Morse.h>

void setup() {
  Serial.begin(9600);//设置通信波特率
}

void loop() {
  String str = "";  //定义未转义字符串
  String morse = "";  //定义转义后字符串
  int i, t , temp = 0;
  int n = 0;  //对传入字符个数计数
  while (Serial.available() > 0) {
    temp = 1;  //判断是否有数据传入
    str += char(Serial.read());  //将传入的数据储存在字符串中
    delay(2);  //延迟保证传入正常
    n++;
  }

  if (temp) {
    //查询Morse电码表并进行转换
    for (i = 0; i < n; i++)
    {
      Morse.transfor(str[i]);
      }
      delay(2);
  }
  
}
