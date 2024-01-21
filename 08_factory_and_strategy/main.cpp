#include <bits/stdc++.h>

#include "./payment/Googlepay.h"
#include "./payment/Paypal.h"
#include "./payment/Paytm.h"


int main() {
    Googlepay *ans1 = new Googlepay("upi", "ios");
    ans1->showFeatures();
}