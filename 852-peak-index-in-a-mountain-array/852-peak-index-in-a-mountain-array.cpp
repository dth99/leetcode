class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //brute force O(n)
        /*
        for(int i=0;i<arr.size();i++){
            if(arr[i+1]<arr[i])
                return i;
        }
        return -1;
        */
        
        //binary search O(log n)
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]<arr[mid+1])
                low=mid+1;
            else{
                high=mid-1;
            }
        }
        return low;
    }
};