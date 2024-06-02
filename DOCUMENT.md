#AtcoderにおけるC++活用

## vector配列の宣言
- 配列は様々なデータの列を扱うことができる機能
- <span style="color:red;">配列変数名 .at(i)</span>でi番目の要素にアクセスできる
- <span style="color:red;">配列変数 .size()</span>で配列の要素数を取得できる
- <span style="color:red;">vector<型> 配列変数名(要素数)</span>と書くと指定した要素数で配列を初期化できる
- <span style="color:red;">vector<vector<int>> 配列変数名(要素数)</span>でた次元配列を作成できる
- 配列でN個の入力を受け取るときは、N要素で初期化した後、for文の中でatを使って1ずつ受け取る
```main.cpp
vector<int> vec(N);
for (int i = 0; i < N; i++) {
  cin >> vec.at(i);
}
for (int v : vec){
  cout << v << endl;
}
```

##配列のソート
```
sort(vec, vec+vec.size());
```