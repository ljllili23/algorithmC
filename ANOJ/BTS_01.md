# 进击的二叉查找树

**Case Time Limit:** 100 MS (Others) / 200 MS (Java)       **Case Memory Limit:** 256 MB (Others) / 512 MB (Java)

**Accepted: **[251](https://logn.me/status?pid=1008&status=Accepted)      **Total Submission: **[563](https://logn.me/status?pid=1008)

查看我的提交

[二叉树](https://logn.me/problem/list?page=1&tag=%E4%BA%8C%E5%8F%89%E6%A0%91)[二叉查找树（BST）](https://logn.me/problem/list?page=1&tag=%E4%BA%8C%E5%8F%89%E6%9F%A5%E6%89%BE%E6%A0%91%EF%BC%88BST%EF%BC%89)

### Problem Description

给定1~N的两个排列，使用这两个排列分别构建两棵二叉查找树（也就是通过往一棵空树中依次插入序列元素的构建方式）。如果这两棵二叉查找树完全相同，那么输出YES；否则输出NO。之后，输出第一个排列对应的二叉查找树的后序序列、层序序列。

### Input

每个输入文件中一组数据。

第一行1个正整数N（1<=N<=30），表示二叉查找树中的结点个数。

接下来两行，代表1~N的两个排列。

### Output

如果两个排列代表的二叉查找树完全相同，那么输出一行YES，否则输出一行NO。

接下来两行分别输出第一个排列对应的二叉查找树的后序序列、层序序列，整数之间用空格隔开。

每行末尾不允许有多余的空格。

### Sample Input

```
5
4 2 1 3 5
4 5 2 3 1
```

### Sample Output

```
YES
1 3 2 5 4
4 2 5 1 3
```

### Author

Shoutmon

### Source

16浙大考研机试模拟赛