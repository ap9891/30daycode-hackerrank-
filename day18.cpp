#include <iostream>
#include<queue>
#include<stack>

using namespace std;

class Solution {
    queue<char> q;
    stack<char> s;
    public:
        void pushCharacter(char character)
        {
            s.push(character);
        }
        char popCharacter()
        {
            char top = s.top();
            s.pop();
            return top;
        }
        void enqueueCharacter(char character)
        {
            q.push(character);
        }
        char dequeueCharacter()
        {
            char top = q.front();
            q.pop();
            return top;
        }

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
///////////////////
// considering ascii value of char
// #include <iostream>
// #include<queue>
// #include<stack>

// using namespace std;

// class Solution {
//     queue<char> q;
//     stack<char> s;
//     public:
//         void pushCharacter(int character)
//         {
//             s.push(character);
//         }
//         int popCharacter()
//         {
//             int top = s.top();
//             s.pop();
//             return top;
//         }
//         void enqueueCharacter(int character)
//         {
//             q.push(character);
//         }
//         int dequeueCharacter()
//         {
//             int top = q.front();
//             q.pop();
//             return top;
//         }

// };



// int main() {
//     // read the string s.
//     string s;
//     getline(cin, s);
    
//   	// create the Solution class object p.
//     Solution obj;
    
//     // push/enqueue all the characters of string s to stack.
//     for (int i = 0; i < s.length(); i++) {
//         obj.pushCharacter(s[i]);
//         obj.enqueueCharacter(s[i]);
//     }
    
//     bool isPalindrome = true;
    
//     // pop the top character from stack.
//     // dequeue the first character from queue.
//     // compare both the characters.
//     for (int i = 0; i < s.length() / 2; i++) {
//         if (obj.popCharacter() != obj.dequeueCharacter()) {
//             isPalindrome = false;
            
//             break;
//         }
//     }
    
//     // finally print whether string s is palindrome or not.
//     if (isPalindrome) {
//         cout << "The word, " << s << ", is a palindrome.";
//     } else {
//         cout << "The word, " << s << ", is not a palindrome.";
//     }
    
//     return 0;
// }