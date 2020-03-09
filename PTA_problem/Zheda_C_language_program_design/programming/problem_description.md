# Problem Description
## [2-1] Programming in C is fun! 
### Description
本题要求编写程序，输出一个短句 `Programming in C is fun!`。

### Input Format
None

### Output Format
在一行中输出短句 `Programming in C is fun!`。

## [2-3] 输出倒三角图案
### Description
本题要求编写程序，输出指定的由“*”组成的倒三角图案。

### Input Format
None

### Output Format
按照下列格式输出由“*”组成的倒三角图案。
```
* * * *
 * * *
  * *
   *
```

### Solving
建立一个二维数组, 数组的行用来储存每一行的字符串. 可以发现, 若第一行有 $n$ 个星号, 则其对应的位置序列为:
$$
0, 2, 4, \dots, 2(n-1)
$$

对于第二行, 序列为:
$$
1, 3, 5, \dots, 2(n-1) - 1
$$

可知, 一共有 $n$ 行, 及列的最大序数为 $n-1$, 且对于 $0 \leq i \leq n-1$, 星号所在的字符序列为:
$$
i, i+2, i+4, \dots, 2(n-1) - i
$$

### Program Design
**Input :** 倒三角的顶层星号数目  
**Output :** 倒三角字符

### Notation
1. 字符串中间部分不能出现 `\0` 字符, 否则会认为该字符串已经结束. 正是由于忽略了这一点, 在一开始写程序的时候没有把字符串中间的 `\0` 全部用字符代替, 才出现了除第一行外, 其余几行只显示一个字符的 bug.
1. 如果字符没有初始化, 似乎内存区域里面会保留之前的数据, 怀疑这是当 $n$ 较大时出现乱码的原因. 实际上当我用 `\0` 把每一个数组中的字符都手动初始化后, 再也没出现过乱码, 这表明我的猜想是正确的. 也就是说: 在没有显式地初始化变量的时候, 编译器似乎并不会自动进行初始化操作, 则可能导致地址中仍然存储有之前的数据, 从而出现乱码.
1. 似乎网站上对于程序的运行时间有要求, 这样的话只能用最 trivial 的方式:
    ```c
    #include <stdio.h>
    int main() {
        printf("* * * *\n");
        printf(" * * *\n");
        printf("  * *\n");
        printf("   *\n");
    }
    ```

## [2-4] 温度转换
### Description
本题要求编写程序，计算华氏温度 $150^\circ\ \mathrm{F}$ 对应的摄氏温度。计算公式：$C=5×(F−32)/9$，式中：$C$ 表示摄氏温度，$F$ 表示华氏温度，输出数据要求为整型

### Inpuf Format
None

### Output Format
按照下列格式输出:
```
fahr = 150, celsius = 计算所得摄氏温度的整数值
```

## [2-6] 计算物体自由下落的距离
### Description
一个物体从100米的高空自由落下。编写程序，求它在前3秒内下落的垂直距离。设重力加速度为 $10\ \mathrm{m} / \mathrm{s}^2$.
 。

### Inpuf Format
None

### Output Format
按照下列格式输出:
```
height = 垂直距离值
```
结果保留2位小数。

## 
### Description

### Inpuf Format

### Output Format
