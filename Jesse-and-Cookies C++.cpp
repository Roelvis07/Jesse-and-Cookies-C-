// Jesse-and-Cookies C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <queue>

using namespace std;

/*
 * Complete the 'cookies' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY A
 */
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    priority_queue<int, vector<int>, greater<int>> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push(ele);
    }
    int c = 0;
    while (v.top() < k)
    {
        int x = v.top(); v.pop();
        if (v.empty() == true)
        {
            cout << -1 << endl;
            return 0;
        }
        int y = v.top(); v.pop();

        int newCookie = (1 * x) + (2 * y);
        v.push(newCookie);
        c++;
    }
    cout << c << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
