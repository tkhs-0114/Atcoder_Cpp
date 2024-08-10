# Atcoder_Cpp
Docker上のAtcoderで使用するC++の環境

### 使用コマンド
- 起動
```console
sh dockUp
```
Dockerを起動し、コンテナ内のBashに入る。
（初回起動時にはbuildが必要）
- 実行
```bash
$ run
```
main.cppをgcc12を使用してコンパイルしinput.txtを標準入力として実行する
- 新規プログラムを書く
```bash
$ start
```
現在のプログラムのログを出力した後、main.cpp，input.txtをデフォルトの状態にリセットする

### マクロと定数
- MAKE(変数名)
変数の作成(int型)と入力
- AIN(配列名)
配列の各要素に入力
- COUT(変数名)
変数を出力して改行
- AOUT(配列名)
配列の各要素を出力して改行
- REP(index, 上限値)
for文の短縮記述
- INF
int型の最大値を返す

### Atcoder Libraly
[Document](https://atcoder.github.io/ac-library/production/document_ja/)