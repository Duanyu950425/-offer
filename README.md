# 剑指offer

​	这是对剑指offer中的编程题的一个汇总。做了精简的思路描述，写出了关键代码的实现。按照剑指offer的讲解顺序，一次对不同的题目做了详解，方便复习回顾总结。

## [1. 面试需要的基础知识](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md)

### 		[面试题1：数组中重复的数字](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%981%E6%95%B0%E7%BB%84%E4%B8%AD%E9%87%8D%E5%A4%8D%E7%9A%84%E6%95%B0%E5%AD%97)

### 		[面试题2：二维数组中的查找](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%982%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84%E4%B8%AD%E7%9A%84%E6%9F%A5%E6%89%BE)

### 		[面试题3：替换空格](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%983%E6%9B%BF%E6%8D%A2%E7%A9%BA%E6%A0%BC)

### 		[面试题4：从尾到头打印链表](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%984%E4%BB%8E%E5%B0%BE%E5%88%B0%E5%A4%B4%E6%89%93%E5%8D%B0%E9%93%BE%E8%A1%A8)

### 		[面试题5：重建二叉树](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%985%E9%87%8D%E5%BB%BA%E4%BA%8C%E5%8F%89%E6%A0%91)

### 		[面试题6：二叉树的下一个节点](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%986%E4%BA%8C%E5%8F%89%E6%A0%91%E7%9A%84%E4%B8%8B%E4%B8%80%E4%B8%AA%E8%8A%82%E7%82%B9)

### 		[面试题7：用两个栈实现队列](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%987%E7%94%A8%E4%B8%A4%E4%B8%AA%E6%A0%88%E5%AE%9E%E7%8E%B0%E9%98%9F%E5%88%97)

### 		[面试题8：斐波那契数列](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%988%E6%96%90%E6%B3%A2%E9%82%A3%E5%A5%91%E6%95%B0%E5%88%97)

### 		[面试题9：旋转数组中最小的数](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%989%E6%97%8B%E8%BD%AC%E6%95%B0%E7%BB%84%E4%B8%AD%E6%9C%80%E5%B0%8F%E7%9A%84%E6%95%B0)

### 		[面试题10：矩阵中的路径](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%9810%E7%9F%A9%E9%98%B5%E4%B8%AD%E7%9A%84%E8%B7%AF%E5%BE%84)

### 		[面试题11：机器人的运动范围](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%9811%E6%9C%BA%E5%99%A8%E4%BA%BA%E7%9A%84%E8%BF%90%E5%8A%A8%E8%8C%83%E5%9B%B4)

### 		[面试题12：剪绳子](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%9812%E5%89%AA%E7%BB%B3%E5%AD%90)

### 		[面试题13：二进制中1的个数](https://github.com/Duanyu950425/-offer/blob/master/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86/01.%E9%9D%A2%E8%AF%95%E9%9C%80%E8%A6%81%E7%9A%84%E5%9F%BA%E7%A1%80%E7%9F%A5%E8%AF%86.md#%E9%9D%A2%E8%AF%95%E9%A2%9813%E4%BA%8C%E8%BF%9B%E5%88%B6%E4%B8%AD1%E7%9A%84%E4%B8%AA%E6%95%B0)

## 2. 高质量的代码

### 		[面试题1：数值的整数次方]()

### 		[面试题2：打印从1到最大的n位数]()	

### 		[面试题3：删除链表的节点]()

### 		[面试题4：正则表达式匹配]()

### 		[面试题5：表示数值的字符串]()

### 		[面试题6：调整数组顺序使奇数位于偶数前面]()

### 		[面试题7：链表中倒数第k个节点]()

### 		[面试题8：链表中环的入口地址]()

### 		[面试题9：反转链表]()