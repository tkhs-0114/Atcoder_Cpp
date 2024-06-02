#include <bits/stdc++.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;
    char A[M][N];
    int B[M][N];
    for(int i=0; i<M; i++){
      for(int j=0; j<N; j++){
        cin >> A[i][j];
        if(A[i][j] == 's')B[i][j] = 0;
        else B[i][j] = -1;
        // cout << A[i][j];
      }
      // cout << endl;
    }
    for(int k=0; k<N+M; k++){
      for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
          if(B[i][j] >= 0){
            if(A[i][j] == 'g'){
              cout << B[i][j] << endl;
              return 0;
            }
            //cout << i << ":" << j << endl;
            int next = B[i][j]+1;
            if(i!=M-1 && A[i+1][j]!='1' && B[i+1][j]==-1){B[i+1][j] = next;}
            if(j!=N-1 && A[i][j+1]!='1' && B[i][j+1]==-1){B[i][j+1] = next;}
            if(i!=0 && A[i-1][j]!='1' && B[i-1][j]==-1){B[i-1][j] = next;}
            if(j!=0 && A[i][j-1]!='1' && B[i][j-1]==-1){B[i][j-1] = next;}
          }
        }
      }
    }
    /*for(int i=0; i<M; i++){
      for(int j=0; j<N; j++){
        cout << B[i][j];
      }
      cout << endl;
    }*/
    cout << "Fail" << endl;
    return 0;
}