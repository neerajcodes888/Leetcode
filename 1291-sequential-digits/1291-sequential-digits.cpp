class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
          string s = "123456789";
          vector<int> v;
          int lenMin = to_string(low).length();
          int lenMax = to_string(high).length();
          for (int i = lenMin; i <= lenMax; i++)
          {
               for (int j = 0; j < 10 - i; j++)
               {
                    int n= stoi(s.substr(j, i));
                    if (n >= low and n <= high)
                    {
                         v.push_back(n);
                    }
               }
          }
          return v;
    }
};