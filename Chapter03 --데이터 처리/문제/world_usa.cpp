#include <iostream>
int main(){
    using namespace std;
    long long world = 0;
    long long usa = 0;

    cout << "세계 인구수를 입력하시오:";
    cin >> world;
    cout << "미국의 인구수를 입력하시오:";
    cin >> usa;

    long double population = (long double) usa / (world / 100);

    cout << "세계 인구수에서 미국이 차지하는 비중은 " << population << "%이다.";
    return 0;
}