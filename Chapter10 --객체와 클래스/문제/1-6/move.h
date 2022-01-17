#ifndef MOVE_H_
#define MOVE_H_
class Move {
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);
    void showmove() const;
    Move add(const Move& m) const;
    //이 함수는 호출한 객체의 x에 m의 x를 더하여 새로운 x를 얻는다.
    //그리고 호출한 객체의 y에 m의 y를 더하여 새로운 y를 얻는다.
    //새로운 x,y 값으로 초기화된 새로운 Move 객체를 생성하여 리턴한다.
    void reset(double a = 0, double b = 0);      // x,y를 a,b로 재설정한다.
};
#endif