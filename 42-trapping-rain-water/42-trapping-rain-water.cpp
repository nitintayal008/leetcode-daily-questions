class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
int i,trap=0;
vector left(n,0),right(n,0);
left[0]=arr[0];
right[n-1]=arr[n-1];
        
for(i=1;i<n;i++){
    left[i]=max(left[i-1],arr[i]);
}
for(i=n-2;i>=0;i--){
    right[i]=max(arr[i],right[i+1]);
}
for(i=0;i<n;i++){
    trap+=(min(left[i],right[i])-arr[i]);
}
        
return trap;
}

};