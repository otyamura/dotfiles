Vim�UnDo� ��0��+� �La'�,3b"V�5��n��k��qAv   G                                   ^[ȴ    _�                             ����                                                                                                                                                                                                                                                                                                                                                             ^[��     �              5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             ^[��     �               �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        ^[��    �                 #include <bits/stdc++.h>   using namespace std;   using ll = long long;   -#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)   0#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)   3#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)   $#define all(x) (x).begin(),(x).end()   '#define rall(x) (x).rbegin(),(x).rend()   const int INF = 1e9;   const int MOD = 1e9+7;   const ll LINF = 1e18;       int main(){       }    5�_�                    E       ����                                                                                                                E                                                                                                                                                                                                                                V        ^[ȯ     �   E            �   E            5�_�                             ����                                                                                                                E                                                                                                                                                                                                          E                      V        ^[ȳ    �              E   #include <bits/stdc++.h>   using namespace std;   -#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)       int main(){       int N,M;       bool J = false;       bool gomi = false;       cin >> N >> M;       vector<int> s(M);       vector<int> c(M);       vector<int> ans(N,0);       for(int i = 0;i < M;i++){   "        cin >> s.at(i) >> c.at(i);       }           if(M == 0){           if(N == 1){               cout << 0 << endl;           }else if(N == 2){               cout << 10 << endl;           }else{                cout << 100 << endl;   	        }   
    }else{   !        for(int i = 0;i < M;i++){   %            for(int j = i;j < M;j++){   %                if(s.at(i)==s.at(j)){   +                    if(c.at(i) != c.at(j)){   "                        J = false;   $                        gomi = true;                           break;                                              }                   }               }               if(gomi){                   break;               }   	        }           if(gomi){               cout << -1 << endl;           }else{   %            for(int i = 0;i < M;i++){   1                if(s.at(i) == 1 && c.at(i) == 0){                       J = false;                       break;                   }else{   0                    ans.at(s.at(i)-1) = c.at(i);                       J = true;                   }               }   )            if(N != 1 && ans.at(0) == 0){                   J = false;               }               if(!(gomi)&&J){   '                for(int i = 0;i<N;i++){                          "                cout << ans.at(i);                   }               }else{   #                cout << -1 << endl;               }   	        }                  }          }       5��