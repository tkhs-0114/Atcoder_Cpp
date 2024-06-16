#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  int H = pow(3, N);
  char M[H][H] = {};

  for(int i=0; i<H; i++){
    for(int j=0; j<H; j++){
      M[i][j] = '#';
    }
  }
  int pN = pow(3,N);
  //cout << "N: " <<pN << endl;
  for(int K=N-1; K>=0; K--){
    int pK = pow(3, K);
    cout << "pK: "<< pK << endl;
    pK =1;
    for(int i=0; i<pK; i++){
      for(int j=0; j<pK; j++){
        M[3*i+1][3*j+1] = '.';

        int S = pow(3, N-K-1);
        cout << S << endl;
        for(int ii=0; ii<S; ii++){
          for(int jj=0; jj<S; jj++){
            M[3*i+S+ii][3*j+S+jj] = '.';
          }
        }

      }
    }

    /*for(int g=0; g<pN/pK; g++){
      for(int i=0; i<pN; i++){
        for(int j=0; j<pN; j++){
          if( ){
            //M[i][j] = '#';
          }else
            M[i+3*g][j+3*g] = '.';
        }
      }
    }*/
  }


  for(int i=0; i<H; i++){
    for(int j=0; j<H; j++){
      cout << M[i][j];
    }
    cout << endl;
  }

  return 0;
}