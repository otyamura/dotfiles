Vim�UnDo� I�?nr#἖��-A�ٶ�M'����*�N�ǩ                                       ^c��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             ^c�y    �              5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             ^c��    �                   �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^c��    �                   int n,a,b;cin>>a>>b;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^c��    �                   int n,a,b;cin>>n>>a>>b;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^c��     �                   �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^c�     �             �                   while(n>0)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^c�    �                   �             5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             ^c�    �                       �             5�_�                 	          ����                                                                                                                                                                                                                                                                                                                                                             ^c�`     �             �                       rep(i,n)5�_�   	      
                 ����                                                                                                                                                                                                                                                                                                                                                             ^c�b     �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^c�&     �                    while(n>0){5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       ^c�(    �                        rep(i,n){       	        }               }5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       ^c�+     �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       ^c�,     �                 5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       ^c�-    �                 5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       ^c�1   	 �                   �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       ^c�=   
 �                   �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       ^c�S    �                   �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       ^c�c    �                   �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       ^c��    �                   �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       ^c��    �                   if(amari > a)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       ^c��     �                   �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       ^c��     �                   if(amari > a) amari+=a;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       ^c��     �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       ^c��     �                 5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                                V       ^c��    �               	    else 5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       ^c��    �                   �             5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             ^c�a     �             �               #include <bits/stdc++.h>   using namespace std;   using ll = long long;   -#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)   0#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)   3#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)   $#define all(x) (x).begin(),(x).end()   '#define rall(x) (x).rbegin(),(x).rend()   const int INF = 1e9;   const int MOD = 1e9+7;   const ll LINF = 1e18;       int main(){       string s;cin>>s;       int a = 0;       int b = 0;       rep(i,3){           if(s[i] == 'A' )a++;           if(s[i] == 'B' )b++;       }   '    if(a==3 || b == 3)cout<<"No"<<endl;       else cout<<"Yes"<<endl;               return 0;   }    5��