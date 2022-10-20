#include <iostream>
#include <string>
#include <exception>
using namespace std;

// struct ooops : exception{
//   const char* what() const noexcept {
//     return "Ooops!\n";}
// };

class MyException{
  int lineNo;
  string func, msg;
  public:
  MyException(int n, string func, string msg){
    this->lineNo = n;
    this->func = func;
    this->msg = msg;
  }
  void print(){
    cout << func << ":" << lineNo << ", " << msg << endl;
  }
};

// class DivideByZeroException : public MyException{
//   public:
//   DivideByZeroException(int lineNo, string func, string msg) : MyException(lineNo, func, msg){}
// };

class DivideByZeroException : exception{

  public:
  int lineNo;
  string func;
  string msg;
  DivideByZeroException(int lineNo, string func, string msg){
    this->lineNo = lineNo;
    this->func = func;
    this->msg = msg;
  };
  const char* what() const noexcept
  {
    cout << "lineNo : " << lineNo << endl;
    return "Ooops!\n";
  }
};

class InvalidInputException : public MyException{
  public:
  InvalidInputException(int lineNo, string func, string msg) : MyException(lineNo, func, msg){}
};

int main()
{
  int x, y;
  try{
    cout << "나눗셈을 합니다. 두개의 양의 정수를 입력하세요>>";
    cin >> x >> y;
    if (x <0 || y<0){
      throw InvalidInputException(36, "main()", "음수 입력 예외 발생");
      //throw ooops();
    }
    if (y == 0){
      throw DivideByZeroException(35, "main()", "0 으로 나누는 예외 발생");
    }
    cout << (double) x / (double) y;
  }
  // catch(exception &ex){
  //   cout << ex.what();
  // }

  catch(DivideByZeroException &e){
    cout << e.what();
  }
  catch(InvalidInputException &e){
    e.print();
  }
}