#include <bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main() {

    int N,M;
    cin >> M >> N;
    int MAP[N][M];
    for(int i=0; i<N;i++){
        for(int j=0; j<M;j++){
            cin >> MAP[i][j];
            // cout << MAP[i][j];
        }
        // cout << endl;
    }
    int cnt = 0;
    bool flag = true;
    while(flag){
      flag = false;
      for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
          if(MAP[i][j] == 1){
            if(i!=0 && MAP[i-1][j] == 2){
              MAP[i][j] = 2;
              for(int jj=M-1; jj>=0; jj--){
                if(jj!=M-1 && MAP[i][jj] == 1 && MAP[i][jj+1] == 2){
                  MAP[i][jj] = 2;
                }
              }
              continue;
            }
            if(j!=0 && MAP[i][j-1] == 2){
              MAP[i][j] = 2;continue;
            }
            if(j!=M-1 && MAP[i][j+1] == 2){
              MAP[i][j] = 2;
              for(int jj=M-1; jj>=0; jj--){
                if(jj!=M-1 && MAP[i][jj] == 1 && MAP[i][jj+1] == 2){
                  MAP[i][jj] = 2;
                }
              }
              
              continue;
            }
            if(flag == false){
              cnt++;
              flag = true;
              MAP[i][j] = 2;
            }
          }
        }
      }
      // cout << "---" << endl;
      // for(int i=0; i<N;i++){
      //   for(int j=0; j<M;j++){
      //       //cin >> MAP[i][j];
      //       cout << MAP[i][j];
      //   }
      //   cout << endl;
      // }
    }
    cout << cnt << endl;
    return 0;
}