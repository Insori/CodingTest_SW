#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int su = arr[0];
    answer.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++) {
        if (su != arr[i]) {
            answer.push_back(arr[i]);
            su = arr[i];
        }
    }
}
