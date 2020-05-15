# DFRobot_Sensor

在标题文字前面加几个“#”和一个空格可以设置是几级标题。

如果用“!”加上图片名称“[xxxx]”还有图片路径“(xxxx/xxxx/xx.xx)”就可以贴图片了，贴一般格式的图片可以很方便.。

![正反面](D:\Tutor\Arduino Library\DFRobot_PERSON-master\N-\SEN0245svg1.png)



如果是需要做一个链接，内部链接或者说本文内跳转的链接，可以用"[xxxxx]"连接名，后面跟着"[#xxxx]"标题名,另外，内部链接通常用来做目录的，要好看一些的目录可以在最前面加"*"，"+","-",或者"1."

## 目录

1. [Summary](#Summary)
2. [Installation](#installation) 

+ [Methods](#Methods)
+ [Compatibility](#Compatibility)
  - [Com1](#Com1)

- [History](#History)
- [Credits](#Credits)

### Summary

这

可

以

测

试

页

内

快

速

跳

转

### Installation

这

可

以

测

试

页

内

快

速

跳

转

### Methods

添加代码的话只要在代码开始和结束的地方加三个撇，也就是单引号

```c++
 /**
    * @brief 构造函数
    * @param 可以对其进行重写
    */
    DFRobot_ZT();
    /**
    * @brief 析构函数
    * @param 在程序销毁是执行
    */
    ~DFRobot_ZT();
    /**
    * @brief 赋值姓名函数
    * @return 返回0表示初始化成功，返回-1表示失败
    */
    int setName(const char * name);
    /**
    * @brief 赋值年龄函数
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
```

### Compatibility

如果是添加表格，用制表符就可以了”|“

| MCU           | Work Well        | Work Wrong                     | Untested | Remark |
| ------------- | ---------------- | ------------------------------ | -------- | ------ |
| Arduinio      | ✔                | :crossed_swords:               |          |        |
| Mege2560      | ✔                | ":"加上emoij代号可以插入表情包 |          |        |
| Leonardo      | ✔                |                                |          |        |
| mPython/esp32 | ✔                |                                |          |        |
| micro:bit     | ✔                |                                |          |        |
| :baby:        | :small_airplane: |                                |          |        |

### History

+ data 2020年5月14日
+ version V1.0

### Credits

Written by HalsonShen(huizhong.shen@dfrobot.com),2020,(Welcome to our [website](https://mc.dfrobot.com.cn/))