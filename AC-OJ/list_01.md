# 删除结点

**Case Time Limit:** 200 MS (Others) / 1500 MS (Java)       **Case Memory Limit:** 256 MB (Others) / 512 MB (Java)

**Accepted: **[60](https://logn.me/status?pid=1003&status=Accepted)      **Total Submission: **[368](https://logn.me/status?pid=1003)

查看我的提交

### Problem Description

给定一条单链表，对于链表中绝对值相等的结点，仅保留第一次出现的结点而删除其余绝对值相等的结点。例如给定的单链表如下：

![img](https://logn.me/images/1003/8d3057656e0298198ee58a552dfb3a69)

![img](https://logn.me/images/1003/7ca0a97d2a1f6b1cc3ecc1048d262b7e)

### Input

每个输入文件中一组数据。

第一行给出结点的总个数N（0<N<10^5）和单链表的第一个结点的地址。所有结点的地址要么是一个五位正整数，要么是用-1表示的空地址NULL。然后是N行，表示N个结点，每行的格式为

Address Data Next

其中Address为结点地址（不足5位的高位用零填充至5位），Data为结点的数据域（绝对值不超过10^5的整数），Next为结点的指针域（即下一个结点的地址）。数据保证Address不等于-1。

### Output

输出按题目要求删除结点后的单链表。第一行为删除结点后单链表上结点的个数、第一个结点的地址。

之后每行一个结点，输出格式与输入相同，结点输出顺序为单链表连接顺序。

### Sample Input

```
5 11111
33333 -15 44444
22222 -15 33333
11111 21 22222
05689 15 -1
44444 -7 05689
```

### Sample Output

```
3 11111
11111 21 22222
22222 -15 44444
44444 -7 -1
```

### Author

Shoutmon

### Source

15浙大考研机试模拟赛