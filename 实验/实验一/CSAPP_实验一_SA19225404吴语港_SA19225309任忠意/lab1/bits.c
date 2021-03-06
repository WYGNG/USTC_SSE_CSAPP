/* 
 * CS:APP Data Lab 
 * 
 * <Please put your name and userid here>
 * SA19225404 吴语港
 * bits.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.  
 */

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
 
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting if the shift amount
     is less than 0 or greater than 31.


EXAMPLES OF ACCEPTABLE CODING STYLE:
  /*
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

FLOATING POINT CODING RULES

For the problems that require you to implement floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants. You can use any arithmetic,
logical, or comparison operations on int or unsigned data.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operations (integer, logical,
     or comparison) that you are allowed to use for your implementation
     of the function.  The max operator count is checked by dlc.
     Note that assignment ('=') is not counted; you may use as many of
     these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 * 
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce 
 *      the correct answers.
 */


#endif
//1
/* 
 * bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
/* 
 * 思路：根据离散数学的逻辑公式
 * x^y = ~(x&y)&~(~x&~y)
 */
int bitXor(int x, int y) {
  return ~((~(x&~y))&(~(~x&y)));
}
/* 
 * tmin - return minimum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */

/*
 * 思路：0x8000 0000为补码表示的最小的负数 -128
 * 将1左移31位就可以得到
 */

int tmin(void) {
  return 1<<31;
}
//2
/*
 * isTmax - returns 1 if x is the maximum, two's complement number,
 *     and 0 otherwise 
 *   Legal ops: ! ~ & ^ | +
 *   Max ops: 10
 *   Rating: 1
 */
/* 
 * 思路：补码表示的最大值为127，即Tmax是  0x7FFFFFFF
 * 判断相等使用异或操作，相等则为全零
 * Tmax满足Tmax == ~(tmax+1)
 * 不过要用|位或来排除同样满足条件的0xFFFFFFFF
 * 如果两边有一处不满足条件，那么就无法让位或运算为0，从而输出1
 */
int isTmax(int x) {
  return !((x^(~(x+1)))|(!(~x)));
}
/* 
 * allOddBits - return 1 if all odd-numbered bits in word set to 1
 *   where bits are numbered from 0 (least significant) to 31 (most significant)
 *   Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
/* 判断二进制数奇数位是否全为1
 * 思路：若一个二进制数偶数位为0，奇数位为1，则这个数为0xAAAAAAAA
 * 先将x=x&0xAAAAAAAA，将这个数偶数位为变为0，
 * 之后x^0xAAAAAAAA判断该数是否为0xAAAAAAAA
 * 就可以完成判断了
 */
int allOddBits(int x) {
  int mask = 0xAA | 0xAA << 8;
  mask = mask | mask << 16;
  x = x & mask;
  return !(mask^x);
}
/* 
 * negate - return -x 
 *   Example: negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */

/*
 * 由于用补码表示，取反加一即可
 */

int negate(int x) {
  return (~x+1);;
}
//3
/* 
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
 *   Example: isAsciiDigit(0x35) = 1.
 *            isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */

/* 
 * x需要>=’0’且<=’9’，将x与临界点作差，然后判断符号位的为0还是1即可
 * 48 - 57为ascii码数字部分，右边用58是因为0的符号位算正数，所以要多减一次
 */

int isAsciiDigit(int x) {
  return (!((x+~48+1)>>31))&!!((x+~58+1)>>31);
}
/* 
 * conditional - same as x ? y : z 
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 *   Rating: 3
 */

/*
 * 首先使用t=!x，当x为0时返回1，当x不为0时，返回0，
 * 根据题意得到( _ &y)|( _ &z)，首先空1，当x不为0，即t=0时，
 * 需要t转换为0xffffffff（-1），当t=1时，需要将t转换为0x0（0），
 * 将t-1即可，得到空1为“!x+~1+1”，同理空2为“~!x+1”
 */

int conditional(int x, int y, int z) {
  return ((!x+~1+1)&y)|((~!x+1)&z);
}
/* 
 * isLessOrEqual - if x <= y  then return 1, else return 0 
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */

/* 
 * 直接用y-x可能会超出int的表示范围，故而分类讨论：
 * A：在x与y同号的情况下转换为p=y-x>=0，然后p符号位(p>>31）&1为0则返回1，符号位1则返回0；
 * B：异号时，只要x>=0，就要返回0，否则返回1，由(x>>31)&1能达到该效果；
 * C：c=a+b可作为x,y同号异号的判断
 * p = y - x,q判断p的符号
 */

int isLessOrEqual(int x, int y) {
  int a=x>>31;
  int b=y>>31;
  int c=a+b;
  int p=y+(~x+1);
  int q=!((p>>31)&1);
  int r=(c&(a&1))|((~c)&q);
  return r;
}
//4
/* 
 * logicalNeg - implement the ! operator, using all of 
 *              the legal operators except !
 *   Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4 
 */

/*
 * 令y=~x+1，考虑x与y的符号位：
 * A：当x为0时，两者符号位都为0；
 * B：当x=0x8000 0000时，两者符号位都为1；
 * C：否则，两者符号位为01或10；
 * D：根据离散数学的真值表得出(~x)&(~y).
 */
int logicalNeg(int x) {
  return ((~(~x+1)&~x)>>31)&1;
}
/* howManyBits - return the minimum number of bits required to represent x in
 *             two's complement
 *  Examples: howManyBits(12) = 5
 *            howManyBits(298) = 10
 *            howManyBits(-5) = 4
 *            howManyBits(0)  = 1
 *            howManyBits(-1) = 1
 *            howManyBits(0x80000000) = 32
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 90
 *  Rating: 4
 */
/* 求表示补码的最少位数
 * 思路：我们只需要异或相邻的数x^=(x<<1)，找出为1的最高位在哪一位就可以了
 * 构造了一个函数g(x)去寻找0与1的分界线，寻找分界线使用了二分法，不断缩小排查范围
 */
int howManyBits(int x) {
  int n = 0;
  x ^= (x<<1);
  n += ((!!(x&((~0)<<(n+16)))) << 4);
  n += ((!!(x&((~0)<<(n+8)))) << 3);
  n += ((!!(x&((~0)<<(n+4)))) << 2);
  n += ((!!(x&((~0)<<(n+2)))) << 1);
  n += (!!(x&((~0)<<(n+1))));
  return n+1;
}
//float
/* 
 * floatScale2 - Return bit-level equivalent of expression 2*f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representation of
 *   single-precision floating point values.
 *   When argument is NaN, return argument
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
/* 计算浮点数2*f，flaot_twice
 * 思路：
 * 1.若原数为非规格化小数或0时，处理小数部分
 * if(exp_ == 0) return (uf<<1)|s_;
 * 2.若为NaN或INF时
 * if(exp_ == 255) return uf;
 * 直接返回。
 * 3.若为其他情况，即指数加一
 * ++exp_,
 * 4.若加了之后为INF时，保证其不为NaN，即小数部分全为0，
 * if(exp_ == 255) return 0x7f800000|s_;
 * 5.最后为一般情况，直接输出2*f
 * return (uf&0x807fffff)|(exp_<<23);
 */

unsigned floatScale2(unsigned uf) {
  int exp_ = (uf&0x7f800000)>>23;//阶码
  int s_ = uf&0x80000000;//数符
  if(exp_ == 0) return (uf<<1)|s_;
  if(exp_ == 255) return uf;
  ++exp_;
  if(exp_ == 255) return 0x7f800000|s_;
  return (uf&0x807fffff)|(exp_<<23);
}
/* 
 * floatFloat2Int - Return bit-level equivalent of expression (int) f
 *   for floating point argument f.
 *   Argument is passed as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point value.
 *   Anything out of range (including NaN and infinity) should return
 *   0x80000000u.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
/* 
 * 将浮点数转换为有符号整数，float_f2i
 * 思路：
 * 先将浮点数分成三段，
 * 符号部分s_ = uf>>31，
 * 指数大小exp_ = ((uf&0x7f800000)>>23)-127，
 * 获取小数部分，并补上浮点数缺省的1，
 * frac_ = (uf&0x007fffff)|0x00800000。
 * 处理特殊情况：
 * 若全为0是返回0，
 * 若指数大于31，整数无法表示溢出返回0x80000000。
 * 若指数小于0，该数0<x<1返回0
 * 若指数部分大于23则将小数部分向左移动frac_ <<= (exp_ - 23) ，exp_代表指数大小。
 * 若指数部分小于23则将小数部分向右移动frac_ >>= (23 - exp_) ，exp_代表指数大小。
 * 考虑最后符号，正数转换为负数不会产生溢出。
 * 若frac_为正数，则根据s_调整正负输出即可。
 * 若frac_为负数，唯一正确情况为0x80000000。
 */
int floatFloat2Int(unsigned uf) {
  int s_    = uf>>31;
  int exp_  = ((uf&0x7f800000)>>23)-127;
  int frac_ = (uf&0x007fffff)|0x00800000; 
  if(!(uf&0x7fffffff)) return 0;
  
  if(exp_ > 31) return 0x80000000;
  if(exp_ < 0) return 0;
  
  if(exp_ > 23) frac_ <<= (exp_-23);
  else frac_ >>= (23-exp_);

  if(!((frac_>>31)^s_)) return frac_;
  else if(frac_>>31) return 0x80000000;
  else return ~frac_+1;
}
/* 
 * floatPower2 - Return bit-level equivalent of the expression 2.0^x
 *   (2.0 raised to the power x) for any 32-bit integer x.
 *
 *   The unsigned value that is returned should have the identical bit
 *   representation as the single-precision floating-point number 2.0^x.
 *   If the result is too small to be represented as a denorm, return
 *   0. If too large, return +INF.
 * 
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. Also if, while 
 *   Max ops: 30 
 *   Rating: 4
 */
/* 计算浮点数2.0^x
 * 思路：
 * 一般情况下，
 * 把x当成浮点数的阶码就可以了
 * 考虑特殊情况，
 * 指数exp<-127和 exp>128，分别返回0和0x7f800000
 */
unsigned floatPower2(int x) {
  if(x<-127) return 0;
  if(x>128) return 0x7f800000;
  x += 127;
  x = x << 23;
  return x;
}
