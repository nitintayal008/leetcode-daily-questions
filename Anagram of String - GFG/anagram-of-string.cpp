// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
int hash[26]={0};
int count=0;
int n=str1.length();
for(int i=0; i<n; i++){
    hash[str1[i]-'a']++;
   
}
for(int i=0; i<str2.size(); i++){
     hash[str2[i]-'a']--;
}
for(int i=0; i<26; i++){
    count+=abs(hash[i]);
}
return count;
}