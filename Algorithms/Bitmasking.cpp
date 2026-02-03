//Bitmasking to get all unique subsets of array of Integers (Including Empty)

vector<vector<int>> ans;
for (int mask = 0 ; mask < (1 << n); mask++) {
  vector<int> temp;
  for (int bit = 0; bit < n; bit++) {
    if ((1 << bit) & mask) {
      temp.pb(vec[bit]);
    }     
  }
  ans.pb(temp);
}
