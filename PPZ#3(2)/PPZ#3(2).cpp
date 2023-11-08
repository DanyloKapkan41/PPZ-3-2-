
#include <iostream>
#include<list>
#include <set>
using namespace std;

void filling(list<int>& list, int n)
{
    list.push_back(n);
}

void show(list<int> list)
{
    for (auto& element : list) {
        cout << element << " ";
    }
}
int main()
{
    list <int> list1;
    int N = -1, i;
    srand(time(NULL));
    do {
        cout << "Count elements in first list(0<=N<=50): ";
        cin >> N;
    } while (N > 300 || N < 0);
    for (i = 0; i < N; i++)
    {
        filling(list1, rand() % 201 - 100);
    }
    list1.sort();
    cout << "\nList1: ";
    show(list1);
    set<int> uniqueElements(list1.begin(), list1.end());
    list1.assign(uniqueElements.begin(), uniqueElements.end());
    list1.sort();
    cout << "\nList1: ";
    show(list1);
}
