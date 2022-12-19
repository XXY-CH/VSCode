# 三角函数

## 定义
**在平面直角坐标系 $xOy$ 中，任意角 $\alpha$ 的终边交单位圆于点 $P(x,y)$ 时，设 $OP=r$，则：**
$\sin\alpha=\cfrac{y}{r}$, $\cos\alpha=\cfrac{x}{r}$,
$\tan\alpha=\cfrac{y}{x}$, $\cot\alpha=\cfrac{x}{y}$,
$\csc\alpha=\cfrac{r}{y}$, $\sec\alpha=\cfrac{r}{x}$.
**在$Rt$三角形中，则：**
$\sin{A}=\cfrac{a}{c}$,
$\cos{A}=\cfrac{b}{c}$,
$\tan{A}=\cfrac{a}{b}$,
$\cot{A}=\cfrac{b}{a}$.
**(a为对边，b为邻边，c为斜边)**

## 性质

### 同角三角函数关系
$\sin^2\alpha+\cos^2\alpha=1$,
$\cfrac{\sin\alpha}{\cos\alpha}=\tan\alpha$,
$\cfrac{\cos\alpha}{\sin\alpha}=\cot\alpha$.

### 诱导公式（仅展示前六个）
将角 $\cfrac{n\pi}{2}\pm\alpha$ 的三角函数转化为角 $\alpha$ 的三角函数.

#### 公式一:设 $\alpha$ 为任意角，终边相同的角的同一三角函数的值相等:
$\sin(2k\pi+\alpha)=\sin\alpha(k\in Z)$,
$\cos(2k\pi+\alpha)=\cos\alpha(k\in Z)$,
$\tan(2k\pi+\alpha)=\tan\alpha(k\in Z)$,
$\cot(2k\pi+\alpha)=\cot\alpha(k\in Z)$.

#### 公式二:设 $\alpha$ 为任意角，$\pi+\alpha$ 的三角函数值与 $\alpha$ 的三角函数值之间的关系:
$\sin(\pi+\alpha)=-\sin\alpha$,
$\cos(\pi+\alpha)=-\cos\alpha$,
$\tan(\pi+\alpha)=\tan\alpha$,
$\cot(\pi+\alpha)=\cot\alpha$.

#### 公式三:任意角 $\alpha$ 与 $-\alpha$ 的三角函数值之间的关系:
$\sin(-\alpha)=-\sin\alpha$,
$\cos(-\alpha)=\cos\alpha$,
$\tan(-\alpha)=-\tan\alpha$,
$\cot(-\alpha)=-\cot\alpha$.

#### 公式四:利用公式二和公式三可以得到 $\pi-\alpha$ 与 $\alpha$ 的三角函数值之间的关系:
$\sin(\pi-\alpha)=\sin\alpha$,
$\cos(\pi-\alpha)=-\cos\alpha$,
$\tan(\pi-\alpha)=-\tan\alpha$,
$\cot(\pi-\alpha)=-\cot\alpha$.

#### 公式五:利用公式一和公式三可以得到 $2\pi-\alpha$ 与 $\alpha$ 的三角函数值之间的关系:
$\sin(2\pi-\alpha)=-\sin\alpha$,
$\cos(2\pi-\alpha)=\cos\alpha$,
$\tan(2\pi-\alpha)=-\tan\alpha$,
$\cot(2\pi-\alpha)=-\cot\alpha$.

#### 公式六: $\cfrac{π}{2}\pm\alpha$ 与 $\alpha$ 的三角函数值之间的关系:
$\sin(\cfrac{π}{2}+\alpha)=\cos\alpha$,
$\sin(\cfrac{π}{2}-\alpha)=\cos\alpha$,
$\cos(\cfrac{π}{2}+\alpha)=-\sin\alpha$,
$\cos(\cfrac{π}{2}-\alpha)=\sin\alpha$,
$\tan(\cfrac{π}{2}+\alpha)=-\cot\alpha$,
$\tan(\cfrac{π}{2}-\alpha)=\cot\alpha$,
$\cot(\cfrac{π}{2}+\alpha)=-\tan\alpha$,
$\cot(\cfrac{π}{2}-\alpha)=\tan\alpha$.

#### 奇变偶不变，函数看象限:
$\sin(\cfrac{n\pi}{2}+\alpha) = \begin{cases} (-1)^{\cfrac{n}{2}}\sin\alpha(n为偶数)\\(-1)^{\cfrac{n-1}{2}}\cos\alpha(n为奇数)\end{cases}$,

$\cos(\cfrac{n\pi}{2}+\alpha) = \begin{cases} (-1)^{\cfrac{n}{2}}\cos\alpha(n为偶数)\\(-1)^{\cfrac{n+1}{2}}\sin\alpha(n为奇数)\end{cases}$.

### 图像性质

#### 正弦(sine)
$y=\sin x (x\in R)$:

值域：$[-1,1]$

周期：$2k\pi$

单调区间：

​ 增：$\left [-\cfrac{\pi}{2}+2k\pi,\cfrac{\pi}{2}+2k\pi \right ]$

​ 减：$\left [\cfrac{\pi}{2}+2k\pi,\cfrac{3\pi}{2}+2k\pi \right ]$

对称中心：$(k\pi,0)$

对称轴：$x=k\pi+\cfrac{\pi}{2}$

#### 余弦(cosine)
$y=\cos x (x\in R)$:

值域：$[-1,1]$

周期：$2k\pi$

单调区间：

​ 增：$\left [-\pi+2k\pi,2k\pi \right ]$

​ 减：$\left [2k\pi,2k\pi+\pi \right ]$

对称中心：$(k\pi+\cfrac{\pi}{2},0)$

对称轴：$x=k\pi$

#### 正切(tangent)
$y=\tan x (x\ne k\pi+\cfrac{\pi}{2})$

值域：$\operatorname{R}$

周期：$k\pi$

单调区间：

​ 增：$\left [-\cfrac{\pi}{2}+k\pi,\cfrac{\pi}{2}+k\pi \right ]$

对称中心：$\left (\cfrac{k\pi}{2},0\right )$

#### 余切(cotangent)
$y=\cot x (x\ne k\pi+\cfrac{\pi}{2})$

值域：$\operatorname{R}$

周期：$k\pi$

单调区间：

​ 减：$\left [-\cfrac{\pi}{2}+k\pi,\cfrac{\pi}{2}+k\pi \right ]$

对称中心：$\left (\cfrac{k\pi}{2},0\right )$

### 图像变换

#### 上下平移
$y=f(x)$ 图像平移 $|k|$ 得 $y=f(x)+k$ 图像，$k > 0$ 向上， $k < 0$ 向下。

#### 左右平移
$y=f(x)$ 图像平移 $|\varphi|$ 得 $y=f(x+\varphi)$ 图像， $\varphi > 0$ 向左，$\varphi < 0$ 向右。

#### 伸缩变换
$y=f(x)$ 图像各点把横坐标变为原来的 $\omega$ 倍得 $y=f(\cfrac{1}{\omega}x)$ 的图像。
$y=f(x)$ 图像各点把纵坐标变为原来的 $A$ 倍得 $y=Af(x)$ 的图像。

#### 对称变换
**中心对称**:$y=f(x)$图像关于点 $(a,b)$ 对称图像的解析式是 $y=2b-f(2a-x)$ .
**轴对称**:$y=f(x)$图像关于直线 $x=a$ 对称图像的解析式是 $y=f(2a-x)$ .

## 变换公式

### 正弦
和角与差角公式：$\sin(\alpha\pm\beta)=\sin\alpha\cos\beta\pm\cos\alpha\sin\beta$

二倍角公式：$\sin2\alpha=2\sin\alpha\cos\alpha$,
$\sin2\alpha=\cfrac{2\tan\alpha}{1+\tan^2\alpha}$.

### 余弦
和角与差角公式：$\cos(\alpha\pm\beta)=\cos\alpha\cos\beta\mp\sin\alpha\sin\beta$

二倍角公式：$\cos2\alpha=\cos^2\alpha-\sin^2\alpha=2\cos^2\alpha-1=1-2\sin^2\alpha$,
$\cos2\alpha=\cfrac{1-\tan^2\alpha}{1+\tan^2\alpha}$,
$\sin^2\alpha=\cfrac{1-\cos2\alpha}{2}$,
$\cos^2\alpha=\cfrac{1+\cos2\alpha}{2}$.

### 正切
和角与差角公式：$\tan(\alpha\pm\beta)=\cfrac{\tan\alpha\pm\tan\beta}{1\mp\tan\alpha\tan\beta}$.

二倍角公式：$\tan2\alpha=\cfrac{2\tan\alpha}{1-\tan^2\alpha}$.

## 正弦定理
### 原定理
$\cfrac{a}{\sin A}=\cfrac{b}{\sin B}=\cfrac{c}{\sin C}=2R$（R为外接圆半径）

### 变形
$a=2RsinA,b=2RsinB,c=2RsinC$.

### 类型
三角形两边和一边对角、三角形两角与一边.

### 影射定理
$a=b\cos C+c\cos B$,
$b=a\cos C+c\cos A$,
$c=a\cos B+b\cos A$.

## 余弦定理
### 原定理
$a^2=b^2+c^2-2bc\cos A$,
$b^2=a^2+c^2-2ac\cos B$,
$c^2=a^2+b^2-2ab\cos C$.

### 变形
$\cos A=\cfrac{b^2+c^2-a^2}{2bc}=\cfrac{(b+c)^2-a^2}{2bc}-1$.

### 类型
两边及一角（一角为夹角时直接使用、一角为一边对角时列方程）、三边.

## 三角恒等式
对于任意非$Rt\triangle$中,如$\triangle{ABC}$,总有$\tan{A}+\tan{B}+\tan{C}=\tan{A}\tan{B}\tan{C}$.

## 正切定理
对于边长为$a,b,c$而相应角为$A,B,C$的三角形，有：
$\cfrac{a+b}{a-b}=\cfrac{\tan{\cfrac{A+B}{2}}}{\tan{\cfrac{A-B}{2}}}$.

## 面积公式
### 基本公式
$S=\cfrac{1}{2}a\cdot h_a=\cfrac{1}{2}b\cdot h_b=\cfrac{1}{2}c\cdot h_c=\cfrac{1}{2}ab\sin C=\cfrac{1}{2}bc\sin A=\cfrac{1}{2}ac\sin B$.

### 导出公式
$S=\cfrac{abc}{4R}$,
$S=\cfrac{1}{2}(a+b+c)r$.
$(R为外接圆半径,r为内接圆半径)$.

## 三角恒等式
### 两角和与差
$\cos{\alpha\pm\beta}=\cos{\alpha}\cos{\beta}\mp\sin{\alpha}\sin{\beta}$
$\sin{\alpha\pm\beta}=\sin{\alpha}\cos{\beta}\pm\cos{\alpha}\sin{\beta}$
$\tan{\alpha\pm\beta}=\cfrac{\tan{\alpha\pm\tan{\beta}}}{1\mp\tan{\alpha}\tan{\beta}}$

### 和差化积
$\sin{\alpha}\pm\sin{\beta}=2\sin{\cfrac{\alpha\pm\beta}{2}\cos{\cfrac{\alpha\mp\beta}{2}}}$
$\cos{\alpha}+\cos{\beta}=2\cos{\cfrac{\alpha+\beta}{2}\cos{\cfrac{\alpha-\beta}{2}}}$
$\cos{\alpha}-\cos{\beta}=-2\sin{\cfrac{\alpha+\beta}{2}\sin{\cfrac{\alpha-\beta}{2}}}$

### 积化和差
$\cos{\alpha}\sin{\beta}=\cfrac{1}{2}[\sin{\alpha+\beta}-\sin{\alpha-\beta}]$
$\sin{\alpha}\cos{\beta}=\cfrac{1}{2}[\sin{\alpha+\beta}+\sin{\alpha-\beta}]$
$\cos{\alpha}\cos{\beta}=\cfrac{1}{2}[\cos{\alpha+\beta}+\cos{\alpha-\beta}]$
$\sin{\alpha}\sin{\beta}=-\cfrac{1}{2}[\cos{\alpha+\beta}-\cos{\alpha-\beta}]$

### 二倍角公式![Alt text](../../../../../../../var/folders/vn/g5ht2vrs6gsdzj89bzqv7rlw0000gn/T/TemporaryItems/NSIRD_screencaptureui_20H6aK/%E6%88%AA%E5%B1%8F2022-11-28%2022.14.25.png)

### 半角公式![Alt text](../../../../../../../var/folders/vn/g5ht2vrs6gsdzj89bzqv7rlw0000gn/T/TemporaryItems/NSIRD_screencaptureui_yhRw1k/%E6%88%AA%E5%B1%8F2022-11-28%2022.14.57.png)


## 数学方程式
### 数关系
$\tan{\alpha}\cot{\alpha}=1$,
$\sin{\alpha}\csc{\alpha}=1$,
$\cos{\alpha}\sec{\alpha}=1$.
### 商关系
$\tan{\alpha}=\cfrac{\sin{\alpha}}{\cos{\alpha}}$,
$\cot{\alpha}=\cfrac{\cos{\alpha}}{\sin{\alpha}}$.
### 平方关系
$\sin^2{\alpha}+\cos^2{\alpha}=1$,
$1+\tan^2{\alpha}=\sec^2{\alpha}$,
$1-\cos^2{\alpha}=\sin^2{\alpha}$.
### 函数名不变，符号看象限
$\sin{(2kπ+α)}=\sin{α}$,
$\cos{(2kπ+α)}=\cos{α}$,
$\tan{(2kπ+α)}=\tan{α}$,
$\cot{(2kπ+α)}=\cot{α}$,
$\sin{(π+α)}=-\sin{α}$,
$\cos{(π+α)}=-\cos{α}$,
$\tan{(π+α)}=\tan{α}$,
$\cot{(π+α)}=\cot{α}$,
$\sin{(π-α)}=\sin{α}$,
$\cos{(π－α)}=-\cos{α}$,
$\tan{(π－α)}=-\tan{α}$,
$\cot{(π－α)}=-\cot{α}$,
$\sin{(2π－α)}=-\sin{α}$,
$\cos{(2π－α)}=\cos{α}$,
$\tan{(2π－α)}=-\tan{α}$,
$\cot{(2π－α)}=-\cot{α}$.
### 奇变偶不变，符号看象限
$\sin{(90°-α)}=\cos{α}$,
$\cos{(90°-α)}=\sin{α}$,
$\tan{(90°-α)}=\cot{α}$,
$\cot{(90°-α)}=\tan{α}$,
$\sin{(90°+α)}=\cos{α}$,
$\cos{(90°+α)}=-\sin{α}$,
$\tan{(90°+α)}=-\cot{α}$,
$\cot{(90°+α)}=-\tan{α}$,
$\sin{(270°-α)}=-\cos{α}$,
$\cos{(270°-α)}=-\sin{α}$,
$\tan{(270°-α)}=\cot{α}$,
$\cot{(270°-α)}=\tan{α}$,
$\sin{(270°+α)}=－\cos{α}$,
$\cos{(270°+α)}=\sin{α}$,
$\tan{(270°+α)}=-\cot{α}$,
$\cot{(270°+α)}=-\tan{α}$.
### 复数区间的三角函数
$\sin{a+bi}=\sin{a}\cos{bi}+\sin{bi}\cos{a}
=\sin{a}\ch{b}+i\sh{b}\cos{a}$,
$\cos{a-bi}=\cos{a}\cos{bi}+\sin{bi}\sin{a}
=\cos{a}\ch{b}+i\sh{b}\sin{a}$,
$\tan{a+bi}=\cfrac{\sin{a+bi}}{\cos{a+bi}}$,
$\cot{a+bi}=\cfrac{\cos{a+bi}}{\sin{a+bi}}$,
$\sec{a+bi}=\cfrac{1}{\cos{a+bi}}$,
$\csc{a+bi}=\cfrac{1}{\sin{a+bi}}$.
## 三角函数值
|$\alpha$大小|弧度制|$\sin{\alpha}$|$\cos{\alpha}$|$\tan{\alpha}$|
|:---------:|:---:|:------------:|:------------:|:------------:|
|0&deg;|0|0|1|0|
|30&deg;|$\cfrac{\pi}{6}$|$\cfrac{1}{2}$|$\cfrac{\sqrt{3}}{2}$|$\cfrac{\sqrt{3}}{3}$|
|45&deg;|$\cfrac{\pi}{4}$|$\cfrac{\sqrt{2}}{2}$|$\cfrac{\sqrt{2}}{2}$|1|
|60&deg;|$\cfrac{\pi}{3}$|$\cfrac{\sqrt{3}}{2}$|$\cfrac{1}{2}$|$\sqrt{3}$|
|90&deg;|$\cfrac{\pi}{2}$|$1$|$0$|-|
|120&deg;|$\cfrac{2\pi}{3}$|$\cfrac{\sqrt{3}}{2}$|$-\cfrac{1}{2}$|$-\sqrt{3}$|
|135&deg;|$\cfrac{3\pi}{4}$|$\cfrac{\sqrt{2}}{2}$|$-\cfrac{\sqrt{2}}{2}$|-1|
|150&deg;|$\cfrac{5\pi}{6}$|$\cfrac{1}{2}$|$-\cfrac{\sqrt{3}}{2}$|$-\cfrac{\sqrt{3}}{3}$|
|180&deg;|${\pi}$|$0$|$-1$|$0$
|270&deg;|$\cfrac{3\pi}{2}$|$-1$|$0$|-|
|360&deg;|$2\pi$|$0$|$1$|$0$|
