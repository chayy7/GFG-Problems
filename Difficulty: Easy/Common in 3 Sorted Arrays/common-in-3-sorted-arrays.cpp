class Solution {
  public:
    vector<int> commonElements(vector<int> &arr1,
                               vector<int> &arr2,
                               vector<int> &arr3) {

        vector<int> v;
        int i = 0, j = 0, k = 0;

        while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {

            if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
                v.push_back(arr1[i]);

                int val = arr1[i];

                while (i < arr1.size() && arr1[i] == val) i++;
                while (j < arr2.size() && arr2[j] == val) j++;
                while (k < arr3.size() && arr3[k] == val) k++;
            }
            else {
                int mn = min({arr1[i], arr2[j], arr3[k]});

                if (arr1[i] == mn) {
                    int val = arr1[i];
                    while (i < arr1.size() && arr1[i] == val) i++;
                }
                else if (arr2[j] == mn) {
                    int val = arr2[j];
                    while (j < arr2.size() && arr2[j] == val) j++;
                }
                else {
                    int val = arr3[k];
                    while (k < arr3.size() && arr3[k] == val) k++;
                }
            }
        }
        return v;
    }
};