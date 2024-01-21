#include <bits/stdc++.h>

#include "./product/Customer.h"
#include "./builder/CustomerBuilder.h"

using namespace std;

int main() {
    CustomerBuilder *builder = new CustomerBuilder();
    Customer *c = builder->setFirstName("Amandeep")->setLastName("Singh")->build();
    c->print();
}