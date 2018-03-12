# 万妖穴

**Case Time Limit:** 500 MS (Others) / 1000 MS (Java)       **Case Memory Limit:** 256 MB (Others) / 512 MB (Java)

**Accepted: **[249](https://logn.me/status?pid=1011&status=Accepted)      **Total Submission: **[706](https://logn.me/status?pid=1011)

查看我的提交

### Problem Description

“万妖穴中有若干小穴，每处小穴中皆有一只恶妖。小穴外设有封印，汝需消灭指定几处小穴中的恶妖方能解除该小穴封印，进而消灭穴中恶妖。”

“此处石壁所刻便是万妖穴中各穴的封印解除关系。”

“万妖穴中或有部分小穴未设封印，汝可以此作为突破口。”

“吾将根据石壁所示，将各穴消灭顺序给予汝，汝自珍重。”

### Input

每个输入文件中一组数据。

第一行两个正整数N、M（1<=N<=1000，0<=M<=N*(N-1)），表示万妖穴中小穴的个数及封印解除关系的条数。

接下来M行，每行两个整数a、b，表示小穴b封印的解除依赖于消灭小穴a中的恶妖。假设N处小穴的编号分别是0~N-1。数据保证a不等于b，且每组封印解除关系a b最多出现一次。

### Output

如果能够消灭所有小穴，那么输出一行YES，并在第二行给出用空格隔开的N处小穴的消灭顺序（此处规定，总是消灭当前能消灭的编号最小的小穴）；如果不能消灭所有小穴，那么输出一行NO，并在第二行给出无法解除封印的小穴个数。行末均不允许输出多余的空格。

### Sample Input 1

```
3 3
0 1
0 2
2 1
```

### Sample Output 1

```
YES
0 2 1
```

### Sample Input 2

```
4 5
0 1
0 2
0 3
2 1
1 2
```

### Sample Output 2

```
NO
2
```

### Author

Shoutmon

### Source

16浙大考研机试模拟赛