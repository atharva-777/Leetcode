class Solution {
    
    private:
        

        bool check(int i,string &s,int k,int w,int sz,unordered_map<string,int>&mx){
            
        int cnt = 0;
            
        unordered_map<string,int>mp = mx;
            
        unordered_map<string,int>::iterator ch;
            
        for(int j=i;j<i+sz;j+=w){
            
            string sub(s.begin()+j,s.begin()+j+w);

            ch = mp.find(sub);
            
            if(ch!=mp.end() && mp[sub]>0){
                
                mp[sub]--;
                
                cnt++;
                
            }
            
            else{
                
                break;
                
            }
            
        }
        
        if(cnt==k){
            
            return true;
            
        }
            
        return false;
        
    }
    
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        s.push_back('A');
        int n = s.length(),k = words.size(),w = words[0].length();
        
        int sz = w*k;
        
        unordered_map<string,int>mx;
        vector<int>v;
        
        for(auto &it:words) mx[it]++;
        
        for(int i=0;i<n-sz;i++){
            bool f = check(i,s,k,w,sz,mx);
            if(f==true) v.push_back(i);
        }
        
        return v;
        
    }
};