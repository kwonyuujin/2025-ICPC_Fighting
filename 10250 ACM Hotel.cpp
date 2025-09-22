#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int H, W, N;
        cin >> H >> W >> N;
        int floor = N % H;
        int room = N / H + 1;
        if(floor == 0){
            floor = H;
            room--;
        }
        cout << floor * 100 + room << "\n";
    }

    return 0;
}
