Vim�UnDo� �%I֛�'R9=�����d�c����U�   )   A                dp[i+1][k] = max(dp[i+1][k], dp[i][k] + a[i][k]);      >      7       7   7   7    ^`�     _�                             ����                                                                                                                                                                                                                                                                                                                                                             ^_��     �              5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             ^_�}    �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �                   �             5�_�                       (    ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �               )    vector<vector<ll>> a(n,vector<ll>(3))5�_�                       )    ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �               *    vector<vector<ll>> a(n,vector<ll>(3);)5�_�                       )    ����                                                                                                                                                                                                                                                                                                                                                             ^`��    �               )    vector<vector<ll>> a(n,vector<ll>(3))5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �             5�_�      	                      ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �                   �             5�_�                 	      ,    ����                                                                                                                                                                                                                                                                                                                                                             ^`�4    �               ,    vector<vector<ll>> dp(n+1,vector<ll>(3))5�_�   	      
             +    ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �                   �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �                       �             �                   rep(i,n)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`�    �                           �             �                       rep(j,3)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �                   �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �         !              �              �                   rep(i,n)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �         #                  �         "    �         !              rep(j,3)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`��    �         #                  dp[i]5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �         #                  dp[i+1]5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`��    �         #                   dp[i+1] = max(dp[i])5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`�w     �         $                  �         #    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`�|     �         %    �         $                  rep(k,3)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`�}     �                #            dp[i+1][j] = max(dp[i])5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �         %    �         %    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �                #            dp[i+1][j] = max(dp[i])5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �         &                      �         %    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �         &                      if(j == k)5�_�                       #    ����                                                                                                                                                                                                                                                                                                                                                             ^`�    �         &      #                if(j == k) continue5�_�                       #    ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �         '                      �         &    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �         '                      dp[i+k]5�_�                       %    ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �         '      &                dp[i+k] = max(dp[i+k])5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �         '      -                dp[i+k] = max(dp[i+k], dp[i])5�_�      !                  $    ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �         '      -                dp[i+j] = max(dp[i+k], dp[i])5�_�       "           !      +    ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �         '      -                dp[i+j] = max(dp[i+j], dp[i])5�_�   !   #           "      .    ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �         '      /                dp[i+j] = max(dp[i+j], dp[i+k])5�_�   "   $           #          ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �         '      5                dp[i+j] = max(dp[i+j], dp[i+k] + a[])5�_�   #   %           $      (    ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �         '      8                dp[i+j][k] = max(dp[i+j], dp[i+k] + a[])5�_�   $   &           %      3    ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �         '      ;                dp[i+j][k] = max(dp[i+j][k], dp[i+k] + a[])5�_�   %   '           &      2    ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �         '      9                dp[i+j][k] = max(dp[i+j][k], dp[i] + a[])5�_�   &   (           '      :    ����                                                                                                                                                                                                                                                                                                                                                             ^`��     �         '      <                dp[i+j][k] = max(dp[i+j][k], dp[i][k] + a[])5�_�   '   )           (      @    ����                                                                                                                                                                                                                                                                                                                                                             ^`�   	 �         '      @                dp[i+j][k] = max(dp[i+j][k], dp[i][k] + a[i][k])5�_�   (   *           )           ����                                                                                                                                                                                                                                                                                                                                                             ^`�   
 �                 5�_�   )   +           *   "        ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �   "   $   '          �   "   $   &    5�_�   *   ,           +          ����                                                                                                                                                                                                                                                                                                                                                             ^`�L     �         '      A                dp[i+j][k] = max(dp[i+j][k], dp[i][k] + a[i][k]);5�_�   +   -           ,      '    ����                                                                                                                                                                                                                                                                                                                                                             ^`�N    �         '      A                dp[i+1][k] = max(dp[i+j][k], dp[i][k] + a[i][k]);5�_�   ,   .           -   #       ����                                                                                                                                                                                                                                                                                                                                                             ^`�R     �   "   #              cout<<dp[n]5�_�   -   /           .   "        ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �   "   $   '          �   "   $   &    5�_�   .   0           /   #       ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �   "   $   '          rep(i,3)5�_�   /   1           0   "        ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �   "   $   (          �   "   $   '    5�_�   0   2           1   $       ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �   #   %   (          rep(i,3) 5�_�   1   3           2   $        ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �   #   %   (      !    rep(i,3) ans = max(ans,dp[n])5�_�   2   4           3   $   $    ����                                                                                                                                                                                                                                                                                                                                                             ^`�    �   #   %   (      $    rep(i,3) ans = max(ans,dp[n][i])5�_�   3   5           4   $   $    ����                                                                                                                                                                                                                                                                                                                                                             ^`�    �   $   &   )          �   $   &   (    5�_�   4   6           5      >    ����                                                                                                                                                                                                                                                                                                                                                             ^`��    �         )      A                dp[i+1][k] = max(dp[i+1][k], dp[i][k] + a[i][k]);5�_�   5   7           6      4    ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �         )      A                dp[i+1][k] = max(dp[i+1][k], dp[i][k] + a[i][j]);5�_�   6               7      >    ����                                                                                                                                                                                                                                                                                                                                                             ^`�    �         )      A                dp[i+1][k] = max(dp[i+1][k], dp[i][j] + a[i][j]);5�_�   	              
      +    ����                                                                                                                                                                                                                                                                                                                                                             ^`�     �               ,    vector<vector<ll>> dp(n+1,vector<ll>(3);5��