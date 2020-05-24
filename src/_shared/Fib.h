//
// Created by 聂师聪 on 2019-03-30.
//

#ifndef DSA_FIB_H
#define DSA_FIB_H

class Fib { //Fibonacci数列类
  private:
    long long f, g;
  public:
    Fib ( int n )
    { f = 1; g = 0; while ( g < n ) next(); } //fib(-1), fib(0)，O(log_phi(n))时间
    long long get()  { return g; } //获取当前Fibonacci项，O(1)时间
    long long next() { g += f; f = g - f; return g; } //转至下一Fibonacci项，O(1)时间
    long long prev() { f = g - f; g -= f; return g; } //转至上一Fibonacci项，O(1)时间
};
#endif //DSA_FIB_H
