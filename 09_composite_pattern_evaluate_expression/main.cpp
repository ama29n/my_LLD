#include <bits/stdc++.h>

#include "./expression_system/Number.h"
#include "./expression_system/Expression.h"

#include "./operation/Operation.h"

using namespace std;

int main() {

    // 15 - (2 * 3) 
    Number *n1 = new Number(2);
    Number *n2 = new Number(3);
    Expression *e1 = new Expression(n1, n2, Operation::multiply);

    Number *n3 = new Number(15);
    Expression *e2 = new Expression(n3, e1, Operation::subtract);

    cout << e2->evaluate();
}