#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(string haystack, string needle) {
    int pos = haystack.find(needle);

    if (pos == string::npos)
        return -1;

    return pos;
}

int main() {
    string haystack,needle;

    cout << "Enter haystack: ";
    cin >> haystack;

    cout << "Enter needle: ";
    cin >> needle;

    cout << firstOccurrence(haystack, needle);

    return 0;
}