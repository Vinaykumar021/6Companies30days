class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    map<int,vector<int>> m ;
    for( int i = 0  ; i < mat.size() ; i++ ) {
        auto up = upper_bound(mat[i].begin() , mat[i].end() , 1 , greater<int>()) ;
        auto d = distance(mat[i].begin(), up) ;
        if ( m.count(d) == 0 ) m[d] = {i} ;
        else m[d].push_back(i) ;
    }
    
    vector<int> res ;
    for ( auto &p : m ) {
        if(k<=0) break;
        int i = 0 ;
        while( i < k && i < p.second.size() ){
            res.push_back(p.second[i]) ;
            i++ ;
        }
        k-= i ;
    }
    return res ;
}
};