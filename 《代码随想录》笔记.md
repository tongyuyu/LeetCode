[TOC]

# 《代码随想录》刷题笔记

## 1. 数组

## 2. 链表

## 3. 哈希表

1. 如何获取字符串长度?

```c
int len = sizeof(s) / sizeof(string);	//?
```
**错误**


+ ```c
  sizeof(string) = 32; //所以上述代码求长度不行，结果始终为1
  sizeof(x);//求变量所占的字节
  ```
```
  
+ ```c
  //求字符串长度可用:
  int len1 = s.size();
  int len2 = s.length();
  
```

>  size() 与 length() 方法底层实现原理完全相同，引入 size() 的原因是为了与其他**容器的接口**保持一致，**一般情况下基本都是用size()** 。

2. 如何获取字符串指定下标的元素？

```c
string[i]	//?
```

**正确**

3. C++的string类型？

```c
#incude<string>
```

# 4. 字符串

4. 如何添加vector字符串（指定类型）元素？ 

```c
// 方法1
vector<int> my_vector;	// 创建vector对象，元素为int
my_vector.push_back(10);// 添加元素


vector<char> my_vector;	// 创建vector对象，元素为char
s.push_back('h');
s.push_back('e');
s.push_back('l');
s.push_back('l');
s.push_back('o');
s.push_back(97);	// 97为a

// 方法2
vector<char> s{'h', 'e', 'l' ,'l', 'o'};
```

5. 单引号（'）和双引号（"）的区别？

```c
#include<string>
char my_char = 'a';			//单引号表示字符常量
string my_string = "hello";	//双引号表示字符串常量
```





