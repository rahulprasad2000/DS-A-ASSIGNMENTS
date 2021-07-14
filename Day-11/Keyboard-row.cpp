class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        unordered_map<char,int> mY;
mY['q']=1,mY['w']=1,mY['e']=1,mY['r']=1,mY['t']=1,mY['y']=1,mY['u']=1,mY['i']=1,mY['o']=1,mY['p']=1;
mY['a']=2,mY['s']=2,mY['d']=2,mY['f']=2,mY['g']=2,mY['h']=2,mY['j']=2,mY['k']=2,mY['l']=2;
        mY['z']='3',mY['x']='3',mY['c']='3',mY['v']='3',mY['b']='3',mY['n']='3',mY['m']='3';
        
        int startVal;
        for(string word: words)
        {
            startVal=mY[tolower(word[0])];
            bool oneRow=true;
            for(int j=1;j<word.size();j++)
            {
                if(mY[tolower(word[j])]!=startVal){
                    oneRow=false;
                    break;
                }
                    
            }
            if(oneRow) res.push_back(word);
            
        }
        return res;
    }
};