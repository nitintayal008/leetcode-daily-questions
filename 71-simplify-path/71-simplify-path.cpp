class Solution {
public:
    string simplifyPath(string path) {
        vector<string>v;
        string ans="";
        for(int i=0; i<path.size(); i++)
        {
            string str = "";
            
            while(i<path.length() && path[i]!='/')
            { str+=path[i++]; }  
            
            if(str=="" || str==".")
                continue;
            else if(str=="..")
            {
                if(v.size()>0)
                    v.pop_back();
            }else
                v.push_back(str);
        }
        if(v.size()==0) return "/";
        for(int i=0; i<v.size();i++)ans+="/" + v[i];    
        return ans;
    }
};