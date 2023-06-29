# Linux 学习笔记

------

## 1. 常用命令

------

### 1.1 ctrl c && ctrl u  && clear

```shell
ctrl c  #取消命令，并且换行

ctrl u  #清空本行命令
    
clear  #清空屏幕
```

------

### 1.2 tab

```shell
tab  #可以补全命令和文件名，补全不了连按两下tab键，显示备选项
```

------

### 1.3 ls  && ll  && tree && cat

```shell
ls  #只列出文件名或目录名
  
ll  #列出来的结果详细，有时间，是否可读写等信息   
    
ls -a  #展示所有文件，包括隐藏的文件,
    
tree  #列出树状关系
    
cat #展示文件里的内容
```

------

### 1.4 pwd

```shell
pwd  #显示当前的绝对路径
```

------

### 1.5 cd

```shell
cd ~  #返回家目录(当前用户目录)
 
cd -  #返回上一次访问的目录

cd /  #返回根目录

cd .  #返回当前目录

cd ..  #返回上级目录
```

------

### 1.6  touch

```shell
touch xxx  #在当前目录创建文件xxx

touch dir_1/xxx  #在dir_1目录下创建文件xxx
```

------

### 1.7 mkdir

```shell
mkdir dir_1  #在当前目录下创建目录dir_1

mkdir -p dir_1/dir_2/dir_3  #在当前目录下创建多级目录
```

------

### 1.8  cp

```shell
cp xxx yyy  #将xxx文件复制并重命名为yyy到当前目录

cp dir_2/xxx dir_2/yyy  #将dir_1目录下的xxx文件复制并重命名到dir_2目录中

cp -r dir_1 dir2/dir_3  #将目录dir_1复制到目录dir_2并重命名为目录dir_3
```

------

### 1.9 mv

```shell
mv xxx yyy  #将xxx重命名为yyy

mv dir_1 dir_2  #将目录dir_1移动到目录dir_2下

mv dir_1/xxx dir_2/yyy  #将dir_1目录下的文件xxx剪切到目录dir_2下并重命名为yyy
```

------

### 1.10 rm

```shell
rm -rf xxx.txt  #强制删除文件
rm -rf dir_1  #强制删除目录

#支持正则表达式
```

------

## 2. Tmux 操作

------

### 2.1 Tmux 简介

**功能**：

* 分屏操作
* 允许断开Terminal连接后，继续运行进程。

**结构**：

```shell
一个tmux可以包含多个session，一个session可以包含多个window，一个window可以包含多个pane。
    实例：
        tmux:
            session 0:
                window 0:
                    pane 0
                    pane 1
                    pane 2
                    ...
                window 1
                window 2
                ...
            session 1
            session 2
            ...
```

**注意：**本操作支持的前缀键由默认的`Ctrl+b`更改为`Ctrl+a`

****

### 2.2 打开和关闭操作

* `tmux`：新建一个`session`，其中包含一个`window`，`window`中包含一个`pane`，`pane`里打开了一个`shell`对话框。
* `Ctrl + d`：关闭当前`pane`；如果当前`window`的所有`pane`均已关闭，则自动关闭`window`；如果当前`session`的所有`window`均已关闭，则自动关闭`session`。

------

### 2.3 分屏操作

* 按下`Ctrl + a`后手指松开，然后按`%`：将当前`pane`左右平分成两个`pane`。
* 按下`Ctrl + a`后手指松开，然后按 `"` (注意是双引号)：将当前`pane`上下平分成两个`pane`。

------

### 2.4 pane操作

* 按下`Ctrl + a`后手指松开，然后按方向键：选择相邻的`pane`。
* 按住`Ctrl + a`的同时按方向键，可以调整`pane`之间分割线的位置。
* 按下`Ctrl + a`后手指松开，然后按`z`：将当前`pane`全屏/取消全屏。

------

### 2.5 session操作

* 按下`Ctrl + a`后手指松开，然后按`s`：选择其它`session`。
          方向键 —— 上：选择上一项 `session/window/pane`
          方向键 —— 下：选择下一项 `session/window/pane`
          方向键 —— 右：展开当前项 `session/window`
          方向键 —— 左：闭合当前项 `session/window`
* 按下`Ctrl + a`后手指松开，然后按`c`：在当前`session`中创建一个新的`window`。

------

### 2.6 挂起和唤醒

* 按下`Ctrl + a`后手指松开，然后按`d`：挂起当前`session`。
* `tmux a`：打开之前挂起的`session`。

------

### 2.7 复制和粘贴

* 在`tmux`中选中文本时，需要按住`shift`键。
* 按下`Ctrl + a`后松开手指，然后按`[`，之后用鼠标选中文本，被选中的文本会被自动复制到`tmux`的剪贴板
* 按下`Ctrl + a`后松开手指，然后按`]`，会将剪贴板中的内容粘贴到光标处

------

## 3. Vim 操作

------

### 3.1 Vim 简介

**功能**：

* 命令行模式下的文本编辑器。
* 根据文件扩展名自动判别编程语言。支持代码缩进、代码高亮等功能。
* 使用方式：`vim filename`
          如果已有该文件，则打开它。
          如果没有该文件，则打开个一个新的文件，并命名为`filename`

**模式**：

* 一般命令模式：
          默认模式。命令输入方式：类似于打游戏放技能，按不同字符，即可进行不同操作。可以复制、粘贴、删除文本等。
* 编辑模式：
          在一般命令模式里按下`i`，会进入编辑模式。
          按下`ESC`会退出编辑模式，返回到一般命令模式。
* 命令行模式：
          在一般命令模式里按下`:` `/` `?` 三个字母中的任意一个，会进入命令行模式。命令行在最下面。
          可以查找、替换、保存、退出、配置编辑器等。

------

### 3.2 模式转换

*  `i`：进入编辑模式
* `ESC`：进入一般命令模式
* `:` `/` `?` 三个字母中的任意一个，进入命令行模式

------

### 3.3 移动和跳转

* `h` 或 左箭头键：光标向左移动一个字符
  `j` 或 向下箭头：光标向下移动一个字符
  `k` 或 向上箭头：光标向上移动一个字符
  `l` 或 向右箭头：光标向右移动一个字符
* `n <Space>`：`n`表示数字，按下数字后再按空格，光标会向右移动这一行的`n`个字符
* `n <Enter>`：`n`为数字，光标向下移动`n`行
* `0` 或 功能键`[Home]`：光标移动到本行开头
* `$` 或 功能键`[End]`：光标移动到本行末尾
* `G`：光标移动到最后一行
* `:n` 或 `nG`：`n`为数字，光标移动到第`n`行
* `gg`：光标移动到第一行，相当于`1G`

------

### 3.4 查找与替换 

* `/word`：向光标之下寻找第一个值为`word`的字符串。
*  `?word`：向光标之上寻找第一个值为`word`的字符串。
* `n`：重复前一个查找操作
* `N`：反向重复前一个查找操作
* `:n1,n2s/word1/word2/g`：`n1`与`n2`为数字，在第`n1`行与`n2`行之间寻找`word1`这个字符串，并将该字符串替换为`word2`
* `:1,$s/word1/word2/g`：将全文的`word1`替换为`word2`
* `:1,$s/word1/word2/gc`：将全文的`word1`替换为`word2`，且在替换前要求用户确认。

------

### 3.5 文本操作

*  `v`：选中文本
* `d`：删除选中的文本
* `dd`: 删除当前行
* `y`：复制选中的文本
* `yy`: 复制当前行
* `p`: 将复制的数据在光标的下一行/下一个位置粘贴
* `u`：撤销
* `Ctrl + r`：取消撤销
* 大于号 `>`：将选中的文本整体向右缩进一次
* 小于号 `<`：将选中的文本整体向左缩进一次

------

### 3.6 粘贴模式

* `:set paste` 设置成粘贴模式，取消代码自动缩进
* `:set nopaste` 取消粘贴模式，开启代码自动缩进
* `:set nu` 显示行号
* `:set nonu` 隐藏行号
* `gg=G`：将全文代码格式化
* `:noh` 关闭查找关键词高亮

------

### 3.7 保存与退出

* `:w`： 保存
* `:w!` ：强制保存
* `:q` ：退出
* `:q!`： 强制退出
*  `:wq` ：保存并退出
*  `:wq!`： 强制保存并退出

------

### 3.8 异常处理

* `Ctrl + q`：当`vim`卡死时，可以取消当前正在执行的命令
* 每次用vim编辑文件时，会自动创建一个`.filename.swp`的临时文件。如果打开某个文件时，该文件的swp文件已存在，则会报错。此时解决办法有两种：
  1. 找到正在打开该文件的程序，并退出
  2. 直接删掉该`swp`文件即可

------

## 4. shell 语法

------

### 4.1 概论

`shell`是我们通过命令行与操作系统沟通的语言。

`shell`脚本可以直接在命令行中执行，也可以将一套逻辑组织成一个文件，方便复用。
`Terminal`中的命令行可以看成是一个“`shell`脚本在逐行执行”。

`Linux`中常见的`shell`脚本有很多种，常见的有：

* Bourne Shell(/usr/bin/sh或/bin/sh)
* Bourne Again Shell(/bin/bash）
* C Shell(/usr/bin/csh)
* K Shell(/usr/bin/ksh)
* zsh

`Linux`系统中一般默认使用`bash`，文件开头需要写`#! /bin/bash`，指明`bash`为脚本解释器。

**添加可执行权限**：

```shell
chmod +x test.sh  #使脚本获得可执行权限
```

**执行**：

```shell
./test.sh  #当前路径下执行

/home/acs/test.sh  # 绝对路径下执行

~/test.sh  # 家目录路径下执行
```

------

### 4.2 注释

**单行注释**

每行中`#`之后的内容均是注释。

```shell
#这是一行注释

echo 'Hello World'  #  这也是注释
```

**多行注释**

```shell
:<<EOF
第一行注释
第二行注释
第三行注释
EOF
```


其中`EOF`可以换成其它任意字符串。例如：

```shell
:<<abc
第一行注释
第二行注释
第三行注释
abc

:<<!
第一行注释
第二行注释
第三行注释
!
```

------

### 4.3 变量

**定义变量**

定义变量，不需要加`$`符号，例如：

```shell
name1='lys'  # 单引号定义字符串
name2="lys"  # 双引号定义字符串
name3=lys    # 也可以不加引号，同样表示字符串
```

**使用变量**

使用变量，需要加上`$`符号，或者`$` `{}`符号。花括号是可选的，主要为了帮助解释器识别变量边界。

```shell
name=lys
echo $name  # 输出yxc
echo ${name}  # 输出yxc
echo ${name} is dog  # 输出lys is dog
```

**只读变量**

使用`readonly`或者`declare`可以将变量变为只读。

```shell
name=lys
readonly name
declare -r name  # 两种写法均可

name=abc  # 会报错，因为此时name只读
```

**删除变量**

`unset`可以删除变量。

```shell
name=lys
unset name
echo $name  # 输出空行
```

**变量类型**

* 自定义变量（局部变量）
  子进程不能访问的变量
* 环境变量（全局变量）
  子进程可以访问的变量

**自定义变量改成环境变量**：

```shell
acs@9e0ebfcd82d7:~$ name=lys  # 定义变量
acs@9e0ebfcd82d7:~$ export name  # 第一种方法
acs@9e0ebfcd82d7:~$ declare -x name  # 第二种方法
```

**环境变量改为自定义变量**：

```shell
acs@9e0ebfcd82d7:~$ export name=lys  # 定义环境变量
acs@9e0ebfcd82d7:~$ declare +x name  # 改为自定义变量
```

**字符串**

字符串可以用单引号，也可以用双引号，也可以不用引号。

**单引号与双引号的区别**：

* 单引号中的内容会原样输出，不会执行、不会取变量；
* 双引号中的内容可以执行、可以取变量；

```shell
name=lys  # 不用引号
echo 'hello, $name \"hh\"'  # 单引号字符串，输出 hello, $name \"hh\"
echo "hello, $name \"hh\""  # 双引号字符串，输出 hello, lys "hh"
```

**获取字符串长度**:

```shell
name="lys"
echo ${#name}  # 输出3
```

**提取子串**:

```shell
name="hello, lys"
echo ${name:0:5}  # 提取从0开始的5个字符 输出hello
```

------

### 4.4 默认变量

**文件参数变量**

在执行`shell`脚本时，可以向脚本传递参数。`$1`是第一个参数，`$2`是第二个参数，以此类推。特殊的，`$0`是文件名（包含路径）。例如：

创建文件`test.sh`：

```shell
#! /bin/bash

echo "文件名："$0
echo "第一个参数："$1
echo "第二个参数："$2
echo "第三个参数："$3
echo "第四个参数："$4
```

然后执行该脚本：

```shell
acs@9e0ebfcd82d7:~$ chmod +x test.sh  #添加可执行权限
acs@9e0ebfcd82d7:~$ ./test.sh 1 2 3 4
```

输出

```shell
文件名：./test.sh
第一个参数：1
第二个参数：2
第三个参数：3
第四个参数：4
```

**其它参数相关变量**

| 参数         | 说明                                                         |
| ------------ | ------------------------------------------------------------ |
| `$#`         | 代表文件传入的参数个数，如上例中值为4                        |
| `$*`         | 由所有参数构成的用空格隔开的字符串，如上例中值为`"$1 $2 $3 $4"` |
| `$@`         | 每个参数分别用双引号括起来的字符串，如上例中值为`"$1" "$2" "$3" "$4"` |
| `$$`         | 脚本当前运行的进程ID                                         |
| `$?`         | 上一条命令的退出状态（注意不是stdout，而是exit code）。0表示正常退出，其他值表示错误 |
| `$(command)` | 返回`command`这条命令的stdout（可嵌套）                      |
| \`command\`  | 返回`command`这条命令的stdout（不可嵌套）                    |

------

### 4.5 数组

数组中可以存放多个不同类型的值，只支持一维数组，初始化时不需要指明数组大小。

> **数组下标从0开始**。

**定义**

数组用小括号表示，元素之间用空格隔开。例如：

```shell
array=(1 abc "def" lys)
```


也可以直接定义数组中某个元素的值：

```shell
array[0]=1
array[1]=abc
array[2]="def"
array[3]=lys
```

**读取数组中某个元素的值**

```shell
${array[index]}
```


例如：

```shell
array=(1 abc "def" lys)
echo ${array[0]}  #输出1
echo ${array[1]}  #输出abc
echo ${array[2]}  #输出def
echo ${array[3]}  #输出lys
```

**读取整个数组**

```shell
${array[@]}  # 第一种写法
${array[*]}  # 第二种写法
```


例如：

```shell
array=(1 abc "def" lys)

echo ${array[@]}  # 第一种写法
echo ${array[*]}  # 第二种写法
#输出 1 abc "def" lys
```

**数组长度**

类似于字符串

```shell
${#array[@]}  # 第一种写法
${#array[*]}  # 第二种写法
```


例如：

```shell
array=(1 abc "def" yxc)

echo ${#array[@]}  # 第一种写法
echo ${#array[*]}  # 第二种写法
#输出 4
```

------

### 4.6 expr 命令

`expr`命令用于求表达式的值，格式为：

```shell
expr 表达式
```

**表达式说明**：

- 用空格隔开每一项
- 用反斜杠放在`shell`特定的字符前面（发现表达式运行错误时，可以试试转义）
- 对包含空格和其他特殊字符的字符串要用引号括起来
- `expr`会在`stdout`中输出结果。如果为逻辑关系表达式，则结果为真，`stdout`为1，否则为0。
- `expr`的`exit code`：如果为逻辑关系表达式，则结果为真，exit code为0，否则为1。

**字符串表达式**

* `length STRING`
  返回STRING的长度
* `index STRING CHARSET`
  `CHARSET`中任意单个字符在`STRING`中最前面的字符位置，下标从1开始。如果在`STRING`中完全不存在`CHARSET`中的字符，则返回 $0$。
* `substr STRING POSITION LENGTH`
  返回`STRING`字符串中从`POSITION`开始，长度最大为`LENGTH`的子串。如果`POSITION`或`LENGTH`为负数，$0$ 或非数值，则返回空字符串。

示例：

```shell
str="Hello World!"

echo `expr length "$str"`  # ``不是单引号，表示执行该命令，输出12
echo `expr index "$str" aWd`  # 输出7，下标从1开始
echo `expr substr "$str" 2 3`  # 输出 ell
```

**整数表达式**

`expr`支持普通的算术操作，算术表达式优先级低于字符串表达式，高于逻辑关系表达式。

+ `+` `-`
加减运算。两端参数会转换为整数，如果转换失败则报错。

* `*` `/`  `%`
乘，除，取模运算。两端参数会转换为整数，如果转换失败则报错。

* `()` 可以该表优先级，但需要用反斜杠转义

示例：

```shell
a=3
b=4

echo `expr $a + $b`  # 输出7
echo `expr $a - $b`  # 输出-1
echo `expr $a \* $b`  # 输出12，*需要转义
echo `expr $a / $b`  # 输出0，整除
echo `expr $a % $b` # 输出3
echo `expr \( $a + 1 \) \* \( $b + 1 \)`  # 输出20，值为(a + 1) * (b + 1)
```

**逻辑关系表达式**

* `|`
  如果第一个参数非空且非0，则返回第一个参数的值，否则返回第二个参数的值，但要求第二个参数的值也是非空或非0，否则返回0。如果第一个参数是非空或非0时，不会计算第二个参数。
* `&`
  如果两个参数都非空且非0，则返回第一个参数，否则返回0。如果第一个参为0或为空，则不会计算第二个参数。

* `< <= = == != >= >`
  比较两端的参数，如果为true，则返回1，否则返回0。”==”是”=”的同义词。”expr”首先尝试将两端参数转换为整数，并做算术比较，如果转换失败，则按字符集排序规则做字符比较。

* `()` 可以该表优先级，但需要用反斜杠转义

**示例：**

```shell
a=3
b=4

echo `expr $a \> $b`  # 输出0，>需要转义
echo `expr $a '<' $b`  # 输出1，也可以将特殊字符用引号引起来
echo `expr $a '>=' $b`  # 输出0
echo `expr $a \<\= $b`  # 输出1

c=0
d=5

echo `expr $c \& $d`  # 输出0
echo `expr $a \& $b`  # 输出3
echo `expr $c \| $d`  # 输出5
echo `expr $a \| $b`  # 输出3
```

------

### 4.7 read 命令

`read`命令用于从标准输入中读取单行数据。当读到文件结束符时，`exit code`为1，否则为0。

**参数说明**

* `-p`: 后面可以接提示信息
* `-t`：后面跟秒数，定义输入字符的等待时间，超过等待时间后会自动忽略此命令

**实例：**

```shell
acs@9e0ebfcd82d7:~$ read name  # 读入name的值
acwing lys  # 标准输入
acs@9e0ebfcd82d7:~$ echo $name  # 输出name的值
acwing lys  #标准输出
acs@9e0ebfcd82d7:~$ read -p "Please input your name: " -t 30 name  # 读入name的值，等待时间30秒
Please input your name: acwing lys  # 标准输入
acs@9e0ebfcd82d7:~$ echo $name  # 输出name的值
acwing lys  # 标准输出
```

------

### 4.8 printf 命令

`printf`命令用于格式化输出，类似于`C/C++`中的`printf`函数。

默认`不会在字符串末尾添加换行符`。

命令格式：

```shell
printf format-string [arguments...]
```

**用法示例**

脚本内容：

```shell
printf "%10d.\n" 123  # 占10位，右对齐
printf "%-10.2f.\n" 123.123321  # 占10位，保留2位小数，左对齐
printf "My name is %s\n" "lys"  # 格式化输出字符串
printf "%d * %d = %d\n"  2 3 `expr 2 \* 3` # 表达式的值作为参数
```


输出结果：

```shell
   123.
123.12    .
My name is lys
2 * 3 = 6
```
------

### 4.9 echo 命令

`echo`用于输出字符串。命令格式：

```shell
echo STRING
```

**显示普通字符串**

```shell
echo "Hello AC Terminal"
echo Hello AC Terminal  # 引号可以省略
```

**显示转义字符**

```shell
echo "\"Hello AC Terminal\""  # 注意只能使用双引号，如果使用单引号，则不转义
echo \"Hello AC Terminal\"  # 也可以省略双引号
```

**显示变量**

```shell
name=lys
echo "My name is $name"  # 输出 My name is lys
```

**显示换行**

```shell
echo -e "Hi\n"  # -e 开启转义
echo "acwing"  
```

输出

```
Hi

acwing
```

**显示不换行**

```shell
echo -e "Hi \c" # -e 开启转义 \c 不换行
echo "acwing"
```

输出

```
Hi acwing
```

**显示结果定向至文件**

```shell
echo "Hello World" > output.txt  # 将内容以覆盖的方式输出到output.txt中
```

**原样输出字符串，不进行转义或取变量(用单引号)**

```shell
name=acwing
echo '$name\"'
```

输出结果

```shell
$name\"
```

**显示命令的执行结果**

```shell
echo `date`  #输出日期
```

输出结果：

```shell
Sun Apr 10 15:22:15 CST 2022
```

------

###  4.10 test 命令与判断符号 []

**逻辑运算符&&和||**

* `&&` 表示与，`||` 表示或
* 二者具有短路原则：
  `expr1 && expr2`：当`expr1`为假时，直接忽略`expr2`
  `expr1 || expr2`：当`expr1`为真时，直接忽略`expr2`
* 表达式的`exit code`为0，表示真；为非零，表示假。（与`C/C++`中的定义相反）

**`test`命令**

在命令行中输入`man test`，可以查看`test`命令的用法。

* `test`命令用于判断文件类型，以及对变量做比较。

* `test`命令用`exit code`返回结果，而不是使用`stdout`。0表示真，非0表示假。

示例：

```shell
test 2 -lt 3  # 为真，返回值为0
echo $?  # 输出上个命令的返回值，输出0
```

```shell
acs@9e0ebfcd82d7:~$ ls  # 列出当前目录下的所有文件
homework  output.txt  test.sh  tmp
acs@9e0ebfcd82d7:~$ test -e test.sh && echo "exist" || echo "Not exist"
exist  # test.sh 文件存在
acs@9e0ebfcd82d7:~$ test -e test2.sh && echo "exist" || echo "Not exist"
Not exist  # testh2.sh 文件不存在
```

**文件类型判断**

命令格式:

```shell
test -e filename  # 判断文件是否存在
```

| 测试参数 |   代表意义   |
| :------: | :----------: |
|    -e    | 文件是否存在 |
|    -f    |  是否为文件  |
|    -d    |  是否为目录  |

**文件权限判断**

命令格式：

```shell
test -r filename  # 判断文件是否可读
```

| 测试参数 |    代表意义    |
| :------: | :------------: |
|    -r    |  文件是否可读  |
|    -w    |  文件是否可写  |
|    -x    | 文件是否可执行 |
|    -s    | 是否为非空文件 |

**整数间的比较**

命令格式：

```shell
test $a -eq $b  # a是否等于b
```

| 测试参数 |    代表意义    |
| :------: | :------------: |
|   -eq    |   a是否等于b   |
|   -ne    |  a是否不等于b  |
|   -gt    |   a是否大于b   |
|   -lt    |   a是否小于b   |
|   -ge    | a是否大于等于b |
|   -le    | a是否小于等于b |

**字符串比较**

|     测试参数      |                        代表意义                        |
| :---------------: | :----------------------------------------------------: |
|  test -z STRING   |        判断STRING是否为空，如果为空，则返回true        |
|  test -n STRING   | 判断STRING是否非空，如果非空，则返回true（-n可以省略） |
| test str1 == str2 |                  判断str1是否等于str2                  |
| test str1 != str2 |                 判断str1是否不等于str2                 |

**多重条件判定**

命令格式：

```shell
test -r filename -a -x filename
```

| 测试参数 |                      代表意义                       |
| :------: | :-------------------------------------------------: |
|    -a    |                 两条件是否同时成立                  |
|    -o    |               两条件是否至少一个成立                |
|    !     | 取反。如 test ! -x file，当file不可执行时，返回true |

**判断符号[]**

* `[]`与`test`用法几乎一模一样，更常用于if语句中。另外`[[]]`是`[]`的加强版，支持的特性更多。

**例如：**

```shell
[ 2 -lt 3 ]  # 为真，返回值为0
echo $?  # 输出上个命令的返回值，输出0
```

```shell
acs@9e0ebfcd82d7:~$ ls  # 列出当前目录下的所有文件
homework  output.txt  test.sh  tmp
acs@9e0ebfcd82d7:~$ [ -e test.sh ] && echo "exist" || echo "Not exist"
exist  # test.sh 文件存在
acs@9e0ebfcd82d7:~$ [ -e test2.sh ] && echo "exist" || echo "Not exist"
Not exist  # testh2.sh 文件不存在
```

**注意**：

* `[]`内的每一项都要用空格隔开
* 中括号内的变量，最好用双引号括起来
* 中括号内的常数，最好用单或双引号括起来

**例如：**

```shell
name="acwing lys"
[ $name == "acwing lys" ]  # 错误，等价于 [ acwing yxc == "acwing lys" ]，参数太多
[ "$name" == "acwing lys" ]  # 正确
```

------

### 4.11 判断语句

**`if…then`形式**

类似于`C/C++`中的if-else语句。

**单层if**

命令格式：

```shell
if condition
then
    语句1
    语句2
    ...
fi
```

**示例：**

```shell
a=3
b=4

if [ "$a" -lt "$b" ] && [ "$a" -gt 2 ]
then
    echo ${a}在范围内
fi
```

输出结果：

```shell
3在范围内
```

**单层`if-else`**

命令格式

```shell
if condition
then
    语句1
    语句2
    ...
else
    语句1
    语句2
    ...
fi
```

**示例：**

```shell
a=3
b=4

if ! [ "$a" -lt "$b" ]
then
    echo ${a}不小于${b}
else
    echo ${a}小于${b}
fi
```

输出结果：

```shell
3小于4
```

**多层`if-elif-elif-else`**

命令格式

```shell
if condition
then
    语句1
    语句2
    ...
elif condition
then
    语句1
    语句2
    ...
elif condition
then
    语句1
    语句2
else
    语句1
    语句2
    ...
fi
```

**示例：**

```shell
a=4

if [ $a -eq 1 ]
then
    echo ${a}等于1
elif [ $a -eq 2 ]
then
    echo ${a}等于2
elif [ $a -eq 3 ]
then
    echo ${a}等于3
else
    echo 其他
fi
```

输出结果：

```
其他
```

**`case…esac`形式**

类似于`C/C++`中的`switch`语句。

命令格式

```shell
scase $变量名称 in
    值1)
        语句1
        语句2
        ...
        ;;  # 类似于C/C++中的break
    值2)
        语句1
        语句2
        ...
        ;;
    *)  # 类似于C/C++中的default
        语句1
        语句2
        ...
        ;;
esac
```

**示例：**

```shell
a=4

case $a in
    1)
        echo ${a}等于1
        ;;  
    2)
        echo ${a}等于2
        ;;  
    3)                                                
        echo ${a}等于3
        ;;  
    *)
        echo 其他
        ;;  
esac
```

输出结果：

```
其他
```

------

### 4.12 循环语句

**`for…in…do…done`形式**

命令格式：

```shell
for var in val1 val2 val3
do
    语句1
    语句2
    ...
done
```

**示例1**，输出a 2 cc，每个元素一行：

```shell
for i in a 2 cc
do
    echo $i
done
```

**示例2**，输出当前路径下的所有文件名，每个文件名一行：

```shell
for file in `ls`
do
    echo $file
done
```

**示例3**，输出1-10

```shell
for i in $(seq 1 10)
do
    echo $i
done
```

**示例4**，使用{1..10} 或者 {a..z}

```shell
for i in {a..z}
do
    echo $i
done
```

**`for ((…;…;…)) do…done`形式**

命令格式：

```shell
for ((expression; condition; expression))
do
    语句1
    语句2
done
```

**示例**，输出1-10，每个数占一行：

```shell
for ((i=1; i<=10; i++))
do
    echo $i
done
```

**`while…do…done`循环**

命令格式：

```shell
while condition
do
    语句1
    语句2
    ...
done
```

**示例**，文件结束符为Ctrl+d，输入文件结束符后read指令返回false。

```shell
while read name
do
    echo $name
done
```

**`until…do…done`循环**

当条件为**真**时结束。

命令格式：

```shell
until condition
do
    语句1
    语句2
    ...
done
```

**示例**，当用户输入yes或者YES时结束，否则一直等待读入。

```shell
until [ "${word}" == "yes" ] || [ "${word}" == "YES" ]
do
    read -p "Please input yes/YES to stop this program: " word
done
```

**`break`命令**

跳出当前一层循环，注意与`C/C++`不同的是：`break`不能跳出`case`语句。

**示例**

```shell
while read name
do
    for ((i=1;i<=10;i++))
    do
        case $i in
            8)
                break
                ;;
            *)
                echo $i
                ;;
        esac
    done
done
```

该示例每读入非EOF的字符串，会输出一遍1-7。
该程序可以输入`Ctrl+d`文件结束符来结束，也可以直接用`Ctrl+c`杀掉该进程。

**`continue`命令**

跳出当前循环。

示例：

```shell
for ((i=1;i<=10;i++))
do
    if [ `expr $i % 2` -eq 0 ]
    then
        continue
    fi
    echo $i
done
```


该程序输出1-10中的所有奇数。

**死循环的处理方式**
如果`Terminal`可以打开该程序，则输入`Ctrl+c`即可。

否则可以直接关闭进程：

1. 使用`top`命令找到进程的PID
2. 输入`kill -9 PID`即可关掉此进程

------

### 4.13 函数

------

#### 4.13.1 函数简介

`bash`中的函数类似于`C/C++`中的函数，但`return`的返回值与`C/C++`不同，返回的是`exit code`，取值为0-255，0表示正常结束。

------

#### 4.13.2 返回值

如果想获取函数的输出结果，可以通过`echo`输出到`stdout`中，然后通过`$(function_name)`来获取`stdout`中的结果。

函数的`return`值可以通过`$?`来获取。

命令格式：

```shell
[function] func_name() {  # function关键字可以省略
    语句1
    语句2
    ...
}
```

**不获取 `return`值和`stdout`值**

**示例**

```shell
func() {
    name=lys
    echo "Hello $name"
}

func
```

输出结果：

```shell
Hello lys
```

**获取 `return`值和`stdout`值**

不写`return`时，默认`return 0`。

**示例**

```shell
func() {
    name=lys
    echo "Hello $name"

    return 123

}

output=$(func)
ret=$?

echo "output = $output"
echo "return = $ret"
```

输出结果：

```shell
output = Hello lys
return = 123
```

------

#### 4.13.3 函数的输入参数

在函数内，`$1`表示第一个输入参数，`$2`表示第二个输入参数，依此类推。

注意：函数内的`$0`仍然是文件名，而不是函数名。

**示例**：

```shell
func() {  # 递归计算 $1 + ($1 - 1) + ($1 - 2) + ... + 0
    word=""
    while [ "${word}" != 'y' ] && [ "${word}" != 'n' ]
    do
        read -p "要进入func($1)函数吗？请输入y/n：" word
    done

    if [ "$word" == 'n' ]
    then
        echo 0
        return 0
    fi  
    
    if [ $1 -le 0 ] 
    then
        echo 0
        return 0
    fi  
    
    sum=$(func $(expr $1 - 1))
    echo $(expr $sum + $1)

}

echo $(func 10)
```

输出结果：

```shell
55
```

------

#### 4.13.4 函数内的局部变量

可以在函数内定义局部变量，作用范围仅在当前函数内。

可以在递归函数中定义局部变量。

命令格式：

```shell
local 变量名=变量值
```

**例如**：

```shell
#! /bin/bash

func() {
    local name=lys
    echo $name
}
func

echo $name
```

输出结果：

```
lys
```

第一行为函数内的`name`变量，第二行为函数外调用`name`变量，会发现此时该变量不存在。

------

### 4.14 exit 命令

------

* `exit`命令用来退出当前shell进程，并返回一个退出状态；使用`$?`可以接收这个退出状态。
* `exit`命令可以接受一个整数值作为参数，代表退出状态。如果不指定，默认状态值是 0。
* `exit`退出状态只能是一个介于 0~255 之间的整数，其中只有 0 表示成功，其它值都表示失败。

**示例：**

创建脚本`test.sh`，内容如下：

```shell
#! /bin/bash

if [ $# -ne 1 ]  # 如果传入参数个数等于1，则正常退出；否则非正常退出。
then
    echo "arguments not valid"
    exit 1
else
    echo "arguments valid"
    exit 0
fi
```

执行该脚本：

```shell
acs@9e0ebfcd82d7:~$ chmod +x test.sh 
acs@9e0ebfcd82d7:~$ ./test.sh acwing
arguments valid
acs@9e0ebfcd82d7:~$ echo $?  # 传入一个参数，则正常退出，exit code为0
0
acs@9e0ebfcd82d7:~$ ./test.sh 
arguments not valid
acs@9e0ebfcd82d7:~$ echo $?  # 传入参数个数不是1，则非正常退出，exit code为1
1
```

------

### 4.15 文件重定向

------

每个进程默认打开3个文件描述符：

* `stdin`标准输入，从命令行读取数据，文件描述符为0
* `stdout`标准输出，向命令行输出数据，文件描述符为1
* `stderr`标准错误输出，向命令行输出数据，文件描述符为2
* 可以用文件重定向将这三个文件重定向到其他文件中。

**重定向命令**

|        命令        |                   说明                    |
| :----------------: | :---------------------------------------: |
|  `command > file`  |        将`stdout`重定向到`file`中         |
|  `command < file`  |         将`stdin`重定向到`file`中         |
| `command >> file`  |   将`stdout`以追加方式重定向到`file`中    |
| `command n> file`  |      将文件描述符`n`重定向到`file`中      |
| `command n>> file` | 将文件描述符`n`以追加方式重定向到`file`中 |

**输入和输出重定向**

```shell
echo -e "Hello \c" > output.txt  # 将stdout重定向到output.txt中
echo "World" >> output.txt  # 将字符串追加到output.txt中

read str < output.txt  # 从output.txt中读取字符串

echo $str  # 输出结果：Hello World
```

**同时重定向stdin和stdout**

创建`bash`脚本：

```shell
#! /bin/bash

read a
read b

echo $(expr "$a" + "$b")
```

创建input.txt，里面的内容为：

```
3
4
```


执行命令：

```shell
acs@9e0ebfcd82d7:~$ chmod +x test.sh  # 添加可执行权限
acs@9e0ebfcd82d7:~$ ./test.sh < input.txt > output.txt  # 从input.txt中读取内容，将输出写入output.txt中
acs@9e0ebfcd82d7:~$ cat output.txt  # 查看output.txt中的内容
7
```

------

### 4.14 引入外部脚本

------

类似于`C/C++`中的`include`操作，`bash`也可以引入其他文件中的代码。

**语法格式：**

```shell
. filename  # 注意点和文件名之间有一个空格
```

**或：**

```shell
source filename
```

**示例**

创建`test1.sh`，内容为：

```shell
#! /bin/bash

name=lys  # 定义变量name
```

然后创建test2.sh，内容为：

```shell
#! /bin/bash

source test1.sh # 或 . test1.sh

echo My name is: $name  # 可以使用test1.sh中的变量
```

执行命令：

```shell
acs@9e0ebfcd82d7:~$ chmod +x test2.sh  #添加可执行命令
acs@9e0ebfcd82d7:~$ ./test2.sh 
My name is: lys
```

------

## 5. ssh

------

### 5.1 ssh 登录

远程登录服务器：

```shell
ssh user@hostname
```

* `user`: 用户名
* `hostname`: IP地址或域名

第一次登录时会提示：

```shell
The authenticity of host '123.57.47.211 (123.57.47.211)' can't be established.
ECDSA key fingerprint is SHA256:iy237yysfCe013/l+kpDGfEG9xxHxm0dnxnAbJTPpG8.
Are you sure you want to continue connecting (yes/no/[fingerprint])?
```

输入`yes`，然后回车即可。
这样会将该服务器的信息记录在`~/.ssh/known_hosts`文件中。

然后输入密码即可登录到远程服务器中。

默认登录端口号为22。如果想登录某一特定端口：

```shell
ssh user@hostname -p 22
```

------

### 5.2 配置文件

创建文件 `~/.ssh/config`。

用`Vim`打开文件中输入：

```shell
Host myserver1
    HostName IP地址或域名
    User 用户名

Host myserver2
    HostName IP地址或域名
    User 用户名
```

之后再使用服务器时，可以直接使用别名`myserver1`、`myserver2`

------

### 5.3 密钥登录

创建密钥：

```sh
ssh-keygen
```


然后一直回车即可。

执行结束后，`~/.ssh/`目录下会多两个文件：

* `id_rsa`：私钥
* `id_rsa.pub`：公钥

之后想免密码登录哪个服务器，就将公钥传给哪个服务器即可。

例如，想免密登录`myserver`服务器。则将**当前服务器公钥**中的内容，复制到`myserver`中的`~/.ssh/authorized_keys`文件里即可。

也可以使用如下命令一键添加公钥：

```sh
ssh-copy-id myserver  #mysever是配置免密登录的服务器名称
```

**总结**：

*  由服务器 `A` 免密登录到服务器 `B`:
*  先在服务器 `A` 中的 `.ssh/` 文件夹下配置 `config` 文件。
*  之后尝试 `ssh serverB` 登录一遍，检查是否异常。
*  回到服务器 `A` 执行 `ssh-keygen` 生成该服务器的私钥和公钥（若已有则无需执行）。
*  然后执行 `ssh-copy-id serverB` 即可，或手动将服务器 `A` 的 `id_rsa.pub` 中的内容复制到服务器 `B` 的`~/.ssh/authorized_keys`文件里即可。

****

### 5.4 scp传输

命令格式：

```shell
scp source destination
```


将`source`路径下的文件复制到`destination`中

**一次复制多个文件**：

```shell
scp source1 source2 destination
```

**复制文件夹**：

```shell
scp -r ~/tmp myserver:/home/acs/  #将本地家目录中的tmp文件夹复制到myserver服务器中的/home/acs/目录下。
```

```shell
scp -r ~/tmp myserver:homework/  #将本地家目录中的tmp文件夹复制到myserver服务器中的~/homework/目录下。
```

```shell
scp -r myserver:homework .  #将myserver服务器中的~/homework/文件夹复制到本地的当前路径下。
```

**指定服务器的端口号**：

```shell
scp -P 22 source1 source2 destination
```

**注意**： `scp`的`-r -P`等参数尽量加在`source`和`destination`之前。

> 使用`scp`配置其他服务器的`vim`和`tmux`
>
> ```shell
> scp ~/.vimrc ~/.tmux.conf myserver:
> ```

****

## 6. git

****

### 6.1 git基本概念

* 工作区：仓库的目录。工作区是独立于各个分支的。
* 暂存区：数据暂时存放的区域，类似于工作区写入版本库的缓存区。暂存区是独立于各个分支的。
* 版本库：存放所有已经提交到本地仓库的代码版本
* 版本结构：树结构，树中每个节点代表一个代码版本。

****

### 6.2 git 命令

****

#### 6.2.1 全局设置

* `git config --global user.name xxx`：设置全局用户名，信息记录在`~/.gitconfig`文件中
* `git config --global user.email xxx@xxx.com`：设置全局邮箱地址，信息记录在`~/.gitconfig`文件中
* `git init`：将当前目录配置成`git`仓库，信息记录在隐藏的`.git`文件夹中

****

#### 6.2.2 常用命令

* `git add XX` ：将XX文件添加到暂存区
* `git commit -m "给自己看的备注信息"`：将暂存区的内容提交到当前分支
* `git status`：查看仓库状态
* `git log`：查看当前分支的所有版本
* `git push -u `(第一次需要-u以后不需要)：将当前分支推送到远程仓库
* `git clone git@git.acwing.com:xxx/XXX.git`：将远程仓库`XXX`下载到当前目录下
* `git branch`：查看所有分支和当前所处分支

****

#### 6.2.3 查看命令

* `git diff XX`：查看`XX`文件相对于暂存区修改了哪些内容
* `git status`：查看仓库状态
* `git log`：查看当前分支的所有版本
* `git log --pretty=oneline`：用一行来显示当前分支的所有版本
* `git reflog`：查看`HEAD`指针的移动历史（包括被回滚的版本）
* `git branch`：查看所有分支和当前所处分支
* `git pull` ：将远程仓库的当前分支与本地仓库的当前分支合并

****

#### 6.2.4 删除命令

* `git rm --cached XX`：将文件`XX`从仓库索引目录中删掉，不希望管理这个文件
* `git restore --staged xx`：将文件`xx`从暂存区里移除
* `git checkout — XX`或`git restore XX`：将`XX`文件尚未加入暂存区的修改全部撤销

****

#### 6.2.5 代码回滚

* `git reset --hard HEAD^` 或`git reset --hard HEAD~` ：将代码库回滚到上一个版本
* `git reset --hard HEAD^^`：往上回滚两次，以此类推
* `git reset --hard HEAD~100`：往上回滚100个版本
* `git reset --hard` 版本号：回滚到某一特定版本

****

#### 6.2.6 远程仓库

* `git remote add origin git@git.acwing.com:xxx/XXX.git`：将本地仓库关联到远程仓库
* `git push -u` (第一次需要-u以后不需要) ：将当前分支推送到远程仓库
* `git push origin branch_name`：将本地的某个分支推送到远程仓库
* `git clone git@git.acwing.com:xxx/XXX.git`：将远程仓库XXX下载到当前目录下
* `git push --set-upstream origin branch_name`：设置本地的`branch_name`分支对应远程仓库的`branch_name`分支
* `git push -d origin branch_name`：删除远程仓库的`branch_name`分支
* `git checkout -t origin/branch_name` 将远程的`branch_name`分支拉取到本地
* `git pull` ：将远程仓库的当前分支与本地仓库的当前分支合并
* `git pull origin branch_name`：将远程仓库的branch_name分支与本地仓库的当前分支合并
* `git branch --set-upstream-to=origin/branch_name1 branch_name2`：将远程的`branch_name1`分支与本地的`branch_name2`分支对应

****

#### 6.2.7 分支命令

* `git branch branch_name`：创建新分支
* `git branch`：查看所有分支和当前所处分支
* `git checkout -b branch_name`：创建并切换到`branch_name`这个分支
* `git checkout branch_name`：切换到`branch_name`这个分支
* `git merge branch_name`：将分支`branch_name`合并到当前分支上
* `git branch -d branch_name`：删除本地仓库的`branch_name`分支
* `git push --set-upstream origin branch_name`：设置本地的`branch_name`分支对应远程仓库的`branch_name`分支
* `git push -d origin branch_name`：删除远程仓库的`branch_name`分支
* `git checkout -t origin/branch_name` ：将远程的`branch_name`分支拉取到本地
* `git pull` ：将远程仓库的当前分支与本地仓库的当前分支合并
* `git pull origin branch_name`：将远程仓库的`branch_name`分支与本地仓库的当前分支合并
* `git branch --set-upstream-to=origin/branch_name1 branch_name2`：将远程的`branch_name1`分支与本地的`branch_name2`分支对应

****

#### 6.2.8 stash暂存

* `git stash`：将工作区和暂存区中尚未提交的修改存入栈中
* `git stash apply`：将栈顶存储的修改恢复到当前分支，但不删除栈顶元素
* `git stash drop`：删除栈顶存储的修改
* `git stash pop`：将栈顶存储的修改恢复到当前分支，同时删除栈顶元素
* `git stash list`：查看栈中所有元素

****

## 7.管道、管道、环境变量与其他常用命令

****

### 7.1 管道

**概念**：

*  管道类似于文件重定向，可以将前一个命令的 `stdout` 重定向到下一个命令的 `stdin`。

**要点**：

*  管道命令仅处理 `stdout`，会忽略 `stderr`。
*  管道右边的命令必须能接受 `stdin`。
*  多个管道命令可以串联。

**与文件重定向的区别**：

*  文件重定向左边为命令，右边为文件。
*  管道左右两边均为命令，左边有 `stdout`，右边有 `stdin`。

**eg**：

*  统计当前目录下所有 `python` 文件的总行数

```shell
find . -name '*.py' | xargs cat | wc -l
```

`xargs` 可以将 `stdin` 转化为 `cat` 命令的参数。

****

### 7.2 环境变量

**概念**：

`Linux` 系统中会用很多环境变量来记录配置信息。

环境变量类似于全局变量，可以被各个进程访问到。我们可以通

过修改环境变量来方便地修改系统配置。

**查看**：

列出当前环境下的所有环境变量：

```shell
env  # 显示当前用户的变量
set  # 显示当前shell的变量，包括当前用户的变量;
export  # 显示当前导出成用户变量的shell变量
```

输出某个环境变量的值：

```shell
echo $PATH
```

**修改**：

环境变量的定义、修改、删除操作可以参考 shell语法的内容。

为了将对环境变量的修改应用到未来所有环境下，可以将修改命令放到`~/.bashrc`文件中。
修改完`~/.bashrc`文件后，记得执行`source ~/.bashrc`，来将修改应用到当前的`bash`环境下。

为何将修改命令放到`~/.bashrc`，就可以确保修改会影响未来所有的环境呢？

*  每次启动`bash`，都会先执行`~/.bashrc`。
*  每次`ssh`登陆远程服务器，都会启动一个`bash`命令行给我们。
*  每次`tmux`新开一个`pane`，都会启动一个`bash`命令行给我们。
*  所以未来所有新开的环境都会加载我们修改的内容。

**常见环境变量**：

*  `HOME`：用户的家目录。
*  `PATH`：可执行文件（命令）的存储路径。路径与路径之间用:分隔。当某个可执行文件同时出现在多个路径中时，会选择从左到右数第一个路径中的执行。**下列所有存储路径的环境变量，均采用从左到右的优先顺序。**
*  `LD_LIBRARY_PATH`：用于指定动态链接库(.so文件)的路径，其内容是以冒号分隔的路径列表。
*  `C_INCLUDE_PATH`：C语言的头文件路径，内容是以冒号分隔的路径列表。
*  `CPLUS_INCLUDE_PATH`：CPP的头文件路径，内容是以冒号分隔的路径列表。
*  `PYTHONPATH`：Python导入包的路径，内容是以冒号分隔的路径列表。
*  `JAVA_HOME`：jdk的安装目录。
*  `CLASSPATH`：存放Java导入类的路径，内容是以冒号分隔的路径列表。

****

### 7.3 其他常用命令

**系统状况**：

*  `top`：查看所有进程的信息（Linux的任务管理器）
  *  打开后，输入`M`：按使用内存排序
  *  打开后，输入`P`：按使用CPU排序
  *  打开后，输入`q`：退出
*  `df -h`：查看硬盘使用情况
*  `free -h`：查看内存使用情况
*  `du -sh`：查看当前目录占用的硬盘空间
*  `ps aux`：查看所有进程
*  `kill -9 pid`：杀死编号为pid的进程
  *  传递某个具体的信号：`kill -s SIGTERM pid`
*  `netstat -nt`：查看所有网络连接
*   `w`：列出当前登陆的用户
*  `ping lys2021.com`：检查是否连网

**文件权限**：

*  `chmod`：修改文件权限
*  `chmod +x xxx`：给`xxx`添加可执行权限
*  `chmod -x xxx`：去掉`xxx`的可执行权限
*  `chmod 777 xxx`：将`xxx`的权限改成777
*  `chmod 777 xxx -R`：递归修改整个文件夹的权限

**文件检索**：

*  `find /path/to/directory/ -name '*.py'`：搜索某个文件路径下的所有`*.py`文件
*  `grep xxx`：从 `stdin `中读入若干行数据，如果某行中包含`xxx`，则输出该行；否则忽略该行。
*  `wc`：统计行数、单词数、字节数
  *  既可以从`stdin`中直接读入内容；也可以在命令行参数中传入文件名列表；
  *  `wc -l`：统计行数
  *  `wc -w`：统计单词数
  *  `wc -c`：统计字节数
*  `tree`：展示当前目录的文件结构
  *  `tree /path/to/directory/`：展示某个目录的文件结构
  *  `tree -a`：展示隐藏文件
*   `ag xxx`：搜索当前目录下的所有文件，检索`xxx`字符串
*  `cut`：分割一行内容
  *  从`stdin`中读入多行数据
  *  `echo $PATH | cut -d ':' -f 3,5`：输出`PATH`用`:`分割后第3、5列数据
  *  `echo $PATH | cut -d ':' -f 3-5`：输出`PATH`用`:`分割后第3-5列数据
  *  `echo $PATH | cut -c 3,5`：输出`PATH`的第3、5个字符
  *  `echo $PATH | cut -c 3-5`：输出`PATH`的第3-5个字符
*  `sort`：将每行内容按字典序排序
  *  可以从 `stdin` 中读取多行数据
  *  可以从命令行参数中读取文件名列表
*  `xargs`：将 `stdin`中的数据用空格或回车分割成命令行参数
  *  `find . -name '*.py' | xargs cat | wc -l`：统计当前目录下所有python文件的总行数

**查看文件内容**：

*  `more`：浏览文件内容
  *  回车：下一行
  *  空格：下一页
  *  `b`：上一页
  *  `q`：退出
*  `less`：与`more`类似，功能更全
  *  回车：下一行
  *  `y`：上一行
  *  `Page Down`：下一页
  *  `Page Up`：上一页
  *  `q`：退出
*  `head -3 xxx`：展示`xxx`的前3行内容
  *  同时支持从 `stdin`读入内容
*  `tail -3 xxx`：展示`xxx`末尾3行内容
  *  同时支持从 `stdin` 读入内容

**用户相关**：

*  `sudo su user`：切换为 `user` 用户
*  `adduser user`：创建用户 `user`
*  `usermod -aG sudo user`：给用户 `user` 分配 `sudo` 权限
*  `history`：展示当前用户的历史操作。内容存放在 `~/.bash_history` 中 

**工具**:

*  `md5sum`：计算`md5`哈希值
  *  可以从 `stdin` 读入内容
  *  也可以在命令行参数中传入文件名列表；
*  `time command`：统计 `command` 命令的执行时间
*  `ipython3`：交互式 `python3` 环境。可以当做计算器，或者批量管理文件。
  *  `! echo "Hello World"`：`!` 表示执行 `shell` 脚本
*  `watch -n 0.1 command`：每0.1秒执行一次`command`命令
*  `tar`：压缩文件
  *  `tar -zcvf xxx.tar.gz /path/to/file/*`：压缩
  *  `tar -zxvf xxx.tar.gz`：解压缩
*  `diff xxx yyy`：查找文件 `xxx` 与 `yyy` 的不同点

**安装软件**：

*  `sudo command`：以 `root` 身份执行 `command` 命令
*  `apt-get install xxx`：安装软件
*  `pip install xxx --user --upgrade`：安装python包

****

## 8. 云服务器及 Docker 教程

****

### 8.1 云服务器

**作用**：

*  存放我们的docker容器，让计算跑在云端。
*  获得公网IP地址，让每个人可以访问到我们的服务。
*  部署自己的项目服务等。

主流的云服务厂商：阿里云，腾讯云，华为云等。

**配置**：

一般新购买的服务器如果是毛坯状态，需要自己配置一些内容，以找回初恋的感觉。

*  首先 `ssh` 登录到自己的服务器

```shell
ssh root@xxx.xxx.xxx.xxx  # 注意腾讯云登录的用户不是root，而是ubuntu
```

*  在 `root` 权限账户下创建工作用户 `user` 并赋予 `sudo` 权限

```shell
adduser user  # 创建用户acs
usermod -aG sudo user  # 给用户acs分配sudo权限
```

*  在本地或云端配置 `user` 用户的别名和免密登录
*  将祖传配置传过去

```shell
scp .bashrc .vimrc .tmux.conf server_name:  # server_name需要换成自己配置的别名
```

*  安装 `tmux` 

```shell
sudo apt-get update
sudo apt-get install tmux
```

*  打开 `tmux` 安装 `Docker`，参考官方安装[Docker](https://docs.docker.com/engine/install/ubuntu/)教程

如果 `apt-get` 下载软件速度较慢，可以参考[清华大学开源软件镜像站](https://mirrors.tuna.tsinghua.edu.cn/help/ubuntu/)中的内容，修改软件源。

****

### 8.2 Docker教程

**将当前用户添加到`docker`用户组**

为了避免每次使用 `docker` 命令都需要加上 `sudo` 权限，可以将当前用户加入安装中自动创建的 `docker` 用户组，参考[官方文档](https://docs.docker.com/engine/install/linux-postinstall/)

```shell
sudo usermod -aG docker $USER
```


执行完此操作后，需要退出服务器，再重新登录回来，才可以省去 `sudo` 权限。

**镜像（images）**：

*  `docker pull xxx`：拉取一个镜像 `xxx`
*  `docker images`：列出本地所有镜像
*   `docker image rm ubuntu:20.04` 或 `docker rmi ubuntu:20.04`：删除镜像 `ubuntu:20.04`
*  `docker [container] commit NAME:TAG`：创建某个 `container` 的镜像，其名为 `NAME`，标签为 `TAG`
*  `docker save -o ubuntu_20_04.tar ubuntu:20.04`：将镜像 `ubuntu:20.04` 导出到本地文件 `ubuntu_20_04.tar` 中
*  `docker load -i ubuntu_20_04.tar`：将镜像 `ubuntu:20.04` 从本地文件 `ubuntu_20_04.tar` 中加载出来

**容器(container)**：

*  `docker [container] create -it ubuntu:20.04`：利用镜像 `ubuntu:20.04` 创建一个容器

*  `docker [contaienr] run -itd ubuntu:20.04`：创建并启动一个容器

  *  `docker [contaienr] run -p 2000:22 --name MYDOCKER -itd ubuntu:20.04`： 创建使用 `ubuntu:20.04` 镜像的容器，名为 `MYDOCKER` ，且设置端口映射为：20000:22

*  `docker ps`：查看本地运行中的容器

  *  `docker ps -a`：查看本地所有的容器  

*  `docker [container] start CONTAINER`：启动容器 `CONTAINER`

*  `docker [container] stop CONTAINER`：停止容器 `CONTAINER`

*  `docker [container] restart CONTAINER`：重启容器 `CONTAINER`

  `docker [container] attach CONTAINER`：进入容器 `CONTAINER`

  *  先按 `Ctrl-p`，再按 `Ctrl-q` 可以挂起容器

*  `docker [container] exec CONTAINER COMMAND`：在容器中执行命令

*  `docker [container] rm CONTAINER`：删除容器

  *  `docker container prune`：删除所有已停止的容器

*  `docker export -o xxx.tar CONTAINER`：将容器`CONTAINER`导出到本地文件`xxx.tar`中

*  `docker import xxx.tar image_name:tag`：将本地文件`xxx.tar`导入成镜像，并将镜像命名为`image_name:tag`

*  `docker export/import` 与 `docker save/load`的区别：

  *  `export/import` 会丢弃历史记录和元数据信息，仅保存容器当时的快照状态
  *  `save/load` 会保存完整记录，体积更大

*  `docker top CONTAINER`：查看某个容器内的所有进程

*  `docker stats`：查看所有容器的统计信息，包括CPU、内存、存储、网络等信息

*  `docker cp xxx CONTAINER:xxx` 或 `docker cp CONTAINER:xxx xxx`：在本地和容器间复制文件

*  `docker rename CONTAINER1 CONTAINER2`：重命名容器

*  `docker update CONTAINER --memory 500MB`：修改容器限制

**ssh登录到容器**

*  可通过`ssh`登录自己的对应映射端口的`docker`容器

```shell
ssh root@xxx.xxx.xxx.xxx -p 20000  # 将xxx.xxx.xxx.xxx替换成自己租的服务器的IP地址 20000为映射的端口号
```

* 记得需要去云平台控制台中修改安全组配置，放行端口20000。 
* 同样可以配置该`docker`容器的别名和免密登录。











