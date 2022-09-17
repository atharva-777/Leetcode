class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        sort(words.begin(),words.end());
        int n = words.size();
        int m=k;
        priority_queue<pair<int,string>>pq;
        map<int,vector<string>>mx;
        
        map<string,int>mp;
        
        for(auto &v:words){
            mp[v]++;
        }
        
        for(auto it:mp){
            pq.push(make_pair(it.second,it.first));
        }
        
        while(k--){
            int a = pq.top().first;
            string b = pq.top().second;
            pq.pop();
            mx[a].push_back(b);
        }
        
        while(!pq.empty()){
            mx[pq.top().first].push_back(pq.top().second);
            pq.pop();
        }
        
        vector<string>res;
        
        map<int,vector<string>>::reverse_iterator ip;
        
        for(ip=mx.rbegin();ip!=mx.rend();++ip){
            if(m==0) break;
            sort(ip->second.begin(),ip->second.end());
            for(auto &x:(ip->second)){
                if(m==0) break;
                res.push_back(x);
                m--;
            }
        }
        
        
        
//         for(auto &it:mx){
//             sort(it.second.begin(),it.second.begin());
//             // reverse(it.second.begin(),it.second.begin());
            
//             for(auto &x:it.second){
//                 res.push_back(x);
//                 cout<<it.first<<" "<<x<<endl;
//             }
            
           
//         }
        // reverse(res.begin(),res.end());
        // while(k--){
        //     string s = pq.top().second;
        //     pq.pop();
        //     res.push_back(s);
        // }
        
        
        
        
        return res;
        
    }
};