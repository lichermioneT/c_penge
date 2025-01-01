# 第一讲LINUX系统简介

## 一 UNIX与Linux发展史

​	unix系统是肯 汤姆森开发的系统。开发的机器DEC PDP-7机器。unix系统的雏形。c语言的诞生，丹尼斯  里奇发明的。unix重新用c语言重写。c语言的可移植性比较好。（硬件平台cpu 和 操作系统）

![image-20241230111628733](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20241230111628733.png)

## 二Linux发展历史和发行版本

​	Linus Torvalds开发了Linux系统。Linux是开源软件，源代码开放的unix。linux的logo是企鹅，就像南北极的企鹅属于全人类，意味着每个人都拥有自己的操作系统。www.kernel.org linux内核官网。

​	linux主要发行版本：主要是软件安装不同，其它的基本一样的。linux的内核基本一样的。目前主流的cnetos Ubuntu界面很好看的。各有各的特点。

![image-20241230112713937](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20241230112713937.png)

## 三开源软件简介											

开源软件示例

![image-20241230122836033](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20241230122836033.png)

​	开源软件在linux里面的质量和数量都优于窗户。linux系统主要是服务器。

​	开源软件 使用得自由 研究自由 散步及改良的自由。足够多的眼睛就能让问题浮现。

​	L    Linux 操作系统	A    Apache web服务器    M    MySql 数据库     PHP    编程语言

LAMP技术架构。

## 四Linux的应用领域

​	视频里面主要介绍了三点：www.netcraft.com，踩点就是看看网站是不是用的linux服务器。腾讯和淘宝都是用的linux。安卓操作系统都是基于的linux的操作系统。IOS也是基于linux。嵌入式的应用：智能电视，智能卡系统，航空系统，银行系统，点歌系统。linux在电影娱乐行业。

## 五Linux学习方法

​	**解决问题的智慧，做人要有礼貌。**解决问题自己去解决，再去问别人。**linux里面有帮助，先自己解决，然后再去问别人。**英语一定学好，方便我们直接看懂linux里面的解释文档。**忘记windows的思维。** **计划 坚持 专注 练习。**所以勤奋重复大量练习是给每个普通人成功的机会。

# 第二讲Linux系统安装

## 一VMware虚拟机安装与使用

​	VMware官方网站 http://www.vmware.com。**vmware模拟操作系统，可以和本机相互操作，随时修改虚拟环境。**vmware建议：CPU 主频1GHz以上，内存1GB以上，硬盘8GB以上。



## 二系统分区

​	系统分区也叫磁盘分区。C盘操作系统，D盘数据软件。不同的数据存放在不同的分区里面,数据的读取的效率更加好。硬盘的主分区最多四个。其中一个作为扩展分区。主分区加扩展分区最多四个。扩招分区只能包含逻辑分区，扩展分区不能写入数据和格式化。逻辑分区可以写入数据和格式化。这是硬盘的限制，并不是win和linux系统的区别。

​	分区后格式化之后才能写入数据。格式化就是为了在硬盘里面写入文件系统。linux里面是4KB一个数据块。每一个数据块一个编号。数据块的英文名字block。文件i节点 ，inode。

​	linux里面关于设备的名字 dev文件 device。硬件设备文件名。主要是linux里面没有图形界面。给硬件设备取个名字。系统自动完成的。

![image-20241230141858512](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20241230141858512.png)

​		**分区设备文件名**

![image-20241231124409624](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20241231124409624.png)

逻辑分区永远从5开始

![image-20241231124902117](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20241231124902117.png)

**挂载**

​	 **在Linux系统中，挂载（mount）是将文件系统或存储设备连接到文件系统树中的某个目录的过程**![image-20241231142543897](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20241231142543897.png)

**总结**

![image-20241231143041837](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20241231143041837.png)

## 三Linux系统安装

## 四远程登录管理

# 第三讲初学者建议

## 一学习linux的注意事项

1. linux里面严格区分大小写，linux里面命令都是小写

2. linux中所有内容都是以文件形式保存，包括硬盘

3. linux不靠扩展名来区分文件，一些基本的文件还是有扩展名的便于管理员区分

   ![image-20241231144859562](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20241231144859562.png)

4. linux所有的存储设备都必须挂载之后用户才能使用，包括硬盘，U盘，光盘。

5. Windows下的程序不能直接在linux中安装和运行

## 二服务器管理和维护建议

1. linux个目录的作用

   前面四个目录都是和命令相关的文件。**sbin ，单用户**

   boot系统启动目录

   dev设备文件保存位置

   etc配置文件![image-20241231145428170](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20241231145428170.png)

   家目录用户的

   lib函数目录

   lost +found。fsck命令。

   media mnt misc 系统的自动挂载命令

   opt第三方安装软件保存位置   习惯/usr/local/

   ![image-20241231150000476](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20241231150000476.png)

   proc  sys不要往里面写东西

   root超级管理员

   srv服务数据

   tmp临时目录

   **usr系统资源  unix software resource。**

   var动态数据保存位置。日志，缓存，软件产生的文件。

   ![image-20241231150525393](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20241231150525393.png)

2. 服务器注意事项

   远程服务器不允许关机，只能重启。

   重启时应该关闭服务。

   不要在服务器访问高峰运行高负载命令。

   远程配置防火墙时不要把自己提出服务器。

   指定合理的密码规范并定期更新

   合理分配权限，够用就行。

   定期备份重要数据和日志。

# 第四讲linux常用命令

## 一文件处理命令

### 一命令格式与目录处理命令

​	**命令格式：命令 [-选项] [参数]**

		1. 基本上都是符合
		1. 选项可以写在一起
		1. 简化选项和完整选项 -a --all

**ls=list**

1. **-a 显示所有文件 包括隐藏文件。隐藏文件一般系统文件没有事情不要去动它，系统配置文件。**

2. **-l 长格式显示 **

   ![image-20250101104001999](C:\Users\LIC\AppData\Roaming\Typora\typora-user-images\image-20250101104001999.png)

   ​	**1是引用系数硬连接  root所有者（一个用户） root所属组(一组)   文件大小  最后 修改时间 文件名 **

   ​	**-文件 d目录 l软链接   三类用户的三个权限，读写执行权限，执行权限最高的权限**

3. **-h人性化显示,文件的字节大小**

4. **-d显示目录，一般是-ld**

5. **-i文件的i节点 id号**    ls -alhdi选项

### 二目录处理命令

***madir = make directories 目录一定要做好规划，不要目录弄得很乱**

1. **mkdir  -p 递归穿件多级目录，其中有一个目录可能不存在**
2. **mkdir 路径+文件名**

**cd = change directory cd + 切换的路径**

**pwd显示当前绝对路径**

**rmdir = remove directories 删除空目录**

**cp = copy**

1. cp  原来的文件    新文件  只是复制文件。
2. cp -r 原来的目录  新的目录
3. cp -p   文件属性都复制了
4. cp 可以复制的时候改名字

**mv = move 剪切和改名**

**rm = remove**

1. -r 删除目录 
2. -f 强制删除 不用回车确认

总结：mkdir -p  cd pwd rmdir cp -r -p mv rm -r -f

### 三文件处理命令

​	**touch**

​	touch + 文件名字，touch + 路径+文件名字。创建的文件没有后缀，用来区分。touch创建的文件如果需要空格，需要将""括起来。但是删除文件的时候需要，可以查找它的i节点。穿件文件不建议的，因为使用需要添加""。

​	**cat**

​	cat直接浏览文件内容。cat -n 显示行号。cat不合适浏览长文件。

​	**tac**

​	tac直接反着浏览文件内容，tac -n显示文件行号。

































































































