#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> x{0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0};
    int wnd_size = 5;
    int sum = 0;
    for (int j = 0; j < wnd_size; j++) {
        sum += x[j];
    }
    cout << sum << endl;
    for (int i = 0; i < x.size() - wnd_size + 1; i++) {
        sum -= x[i];
        sum += x[i + wnd_size];
        cout << sum << endl;
    }
    return 0;
}
