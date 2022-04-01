// 14.Maximum distinct elements after removing k elements

/* Example:

No. of elements in an array = 7

Input array = {5, 7, 9, 3, 1, 2, 4}

k = 3

Output : 4

Following are the steps: 

1. Make a multi set from the given array.

2. During making this multiset check if the current element is present or not in multiset, if it is already present then simply reduce the k value and donot insert in the multiset.

3. If k becomes 0 then simply just put values in multiset.

4. After traversing the whole given array, 

       a) if k is not equal to zero then it means the multiset is consist of only unique elements and we have to remove any of the k elements from the multiset to make k=0, so in this case the answer will be size of multiset minus k value at that time.

       b) if k is equal to zero then it means there may be duplicate values present in the multiset so put all the values in a set and the size of this set will be the number of distinct elements after removing k elements
*/

#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::multiset;
using std::set;

int maxDistinctNum(int a[], int n, int k)
{
  int i;
  multiset<int> s;
        for(i=0;i<n;i++){
            if(s.find(a[i])==s.end()||k==0)
            s.insert(a[i]);
            else
            {
                k--;
            }
        }
   
        if(k != 0)
        return s.size()-k;
        else{
            set<int> st;
            for(auto it:s){
                st.insert(it);
            }
            return st.size();
        }
}

int main()
{
    int arr[7];
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    int size;
    
    cin >> size;
    
    for (int i = 0; i < 7; ++i) {
        cin >> arr[i];
    }
    
    cin >> k;

    cout << maxDistinctNum(arr, n, k);
    return 0;
}

/* (1)
  Input: 7
         5 7 9 3 1 2 4
		 3
  Output: 4
  (2)
  Input: 7
         1 2 3 4 5 6 7
		 4
  Output: 3
*/