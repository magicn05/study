class stack
{
private:
    int size; // 크기 (기본 : 10)
    int top;  //스택의 포지션(위치)
    int *pStack;

public:
    stack(); //매개변수 없는 생성자
    ~stack(); // 소멸자
    stack(const stack& c);
    bool push(int n);
    bool pop(int& n);
    void setSize(int n); // n : +10씩 늘어나는 구조
    bool checkSize(); // if top == size return false
    int showTop();
    void getData(int idx, int& data);
};