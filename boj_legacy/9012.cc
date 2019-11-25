#include <iostream>
#include <cassert>
#include <stack>
#include <cstring>

using namespace std;
bool check_vps(char*);

int main() {
    int N;
    char paren[50];

    cin >> N;

    assert(N >= 0);

    for (int i = 0 ; i < N ; i++) {
        cin >> paren;
        check_vps(paren) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}

bool check_vps(char* paren) {
    stack<char> paren_stack;

    for (int i = 0 ; i < strlen(paren) ; i++) {
        if (paren[i] == '(') 
            paren_stack.push(paren[i]);
        else if (paren[i] == ')') {
            if (paren_stack.empty() || !(paren_stack.top() == '(' && paren[i] == ')'))
                return false;
            else
                paren_stack.pop();
        }
    }

    return paren_stack.empty() ? true : false;
}
