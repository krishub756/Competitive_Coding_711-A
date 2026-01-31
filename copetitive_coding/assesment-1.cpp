//Superultra's Favorite Permutation(Problem 2037-C)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<5){
            cout<<"-1"<<endl;
            continue;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            
            if(i%2==0 && i+1!=5){
                ans.push_back(i+1);
            }
        }
        ans.push_back(5);
        ans.push_back(4);
        for(int i=0;i<n;i++){
            if(i%2!=0 && i+1!=4){
                ans.push_back(i+1);
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


//Replace Character(Problem 2047-B)
#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>freq(26,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        int mx=0,mn=INT_MAX;
        int p=0,q=0;
        for(int i=0;i<26;i++){
            if(freq[i]>=mx){
                mx=freq[i];
                p=i;
            }
            if(freq[i]<mn && freq[i]!=0){
                mn=freq[i];
                q=i;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]==(q+'a')){
                s[i]=(p+'a');
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}