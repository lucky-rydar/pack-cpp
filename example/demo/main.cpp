#include <iostream>

#include <pack.hpp>

using namespace std;

int main() {
    cout << "Version: " 
         << pack::version::get().major()
         << "." 
         << pack::version::get().minor()
         << endl;
}
