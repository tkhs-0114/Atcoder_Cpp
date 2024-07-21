void Compress(vector<int>& A){
  vector<int> B(A);
  sort(B.begin(), B.end());
  B.erase(unique(B.begin(), B.end()), B.end());
  for (auto& a:A) {
    a = lower_bound(B.begin(), B.end(), a)-B.begin();
  }
}

Compress(vec);