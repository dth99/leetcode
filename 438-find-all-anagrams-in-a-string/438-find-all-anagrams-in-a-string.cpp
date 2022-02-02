class Solution {
public:
    bool check(int fre_p[], int mov_fre[]) {
  for (int i = 0; i < 26; i++) {
    if (fre_p[i] != mov_fre[i]) return false;
  }
  return true;
}
    vector<int> findAnagrams(string s, string p) {
        int mov_fre[26], fre_p[26], n = s.size();
  memset(mov_fre, 0, sizeof(mov_fre));
  memset(fre_p, 0, sizeof(fre_p));
  vector<int> ans;
  int k = p.size();
  if (k > s.size()) return ans;
  for (int i = 0; i < k; i++) {
    fre_p[p[i] - 'a']++;
  }
  for (int i = 0; i < k; i++) mov_fre[s[i] - 'a']++;

  if (check(fre_p, mov_fre)) ans.push_back(0);
  for (int i = k, j = 0; i < n; i++, j++) {
    mov_fre[s[j] - 'a']--;
    mov_fre[s[i] - 'a']++;
    if (check(fre_p, mov_fre)) ans.push_back(j + 1);
  }
  return ans;
    }
};