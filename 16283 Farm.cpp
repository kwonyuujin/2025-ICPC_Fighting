#include <iostream>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b, n, w;
  cin >> a >> b >> n >> w;
  int cnt = 0, x = 0, y = 0;
  for(int i = 1; i < n; i++){
    if(a * i + b * (n - i) == w){
      cnt++;
      x = i;
      y = n - i;
    }
  }
  if(cnt == 1) cout << x << " " << y << endl;
  else cout << -1 << endl;
}