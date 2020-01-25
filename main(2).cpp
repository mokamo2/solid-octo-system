#include <string>
#include <iostream>
using namespace std;

bool size_test1(){
    mymatrix<int> M; 
    if (M.size()== 16){
        return true;
    }
    else {
        return false;
    }
                  
int main (){
    int passed = 0;
    int failed = 0;
    if (size_test1()) {
        passed++;
    }
    else {
        cout << “size_test1 failed” << endl;
        failed++;
    cout <<"aaa "<< endl;
    }
    return 0;
}