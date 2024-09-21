#include <algorithm> 
#include <iostream>
using namespace std;
int main()
{
    string s="231";
 
    //sort(s.begin(), s.begin() + 3);
 
    cout << "The 3! possible permutations with 3 elements:\n";
    do {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.begin()+ 3));
 
    cout << "After loop: " <<s<<endl;
 
    return 0;
}