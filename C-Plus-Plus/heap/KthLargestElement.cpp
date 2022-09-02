/*
  Following is the code to find the Kth largest element in an array
  Approach:
      1.  Maintain a min heap of size k.
      2.  Traverse the array and if incase the size of the heap becomes larger than k, remove the top element.
      3.  The top element of the heap after the traversal of the array
          is the Kth Largest element of the array.
*/

#include<bits/stdc++.h>
using namespace std;

  int findKthLargest(vector<int>& nums, int k) {
        
        //creating a minheap using the prioeiry queue.
        priority_queue<int,vector<int>,greater<int>>minheap;
        
        for(auto x:nums)
        {
            minheap.push(x);
            if(minheap.size()>k)
                minheap.pop();
            
        }
        
        return minheap.top();
    }

int main()
{
    cout<<"Enter the size of the array: ";
    int n,k;
    cin>>n;
    cout<<"Enter k: ";
    cin>>k;
    vector<int>nums(n,0);
    
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"The Kth Largest Element: "<<findKthLargest(nums,k)<<endl;
    return 0;
}

/*
Sample Input:

Enter the size of the array: 8
Enter k: 4
Enter array elements: 7 8 9 5 7 2 4 10

Sample Output:
The Kth Smallest Element: 7

Time Complexity: O(nlogk)
Space Complexity: O(k)
*/
