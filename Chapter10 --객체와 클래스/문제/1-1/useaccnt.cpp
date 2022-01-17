#include <iostream>
#include "account.h"
int main(){
    Customer user("yong ho", "123-456-789", 30000);
    user.show();
    user.plus(10000);
    user.show();
    user.minus(5000);
    user.show();

    return 0;
}