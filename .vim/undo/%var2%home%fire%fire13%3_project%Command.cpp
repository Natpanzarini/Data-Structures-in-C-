Vim�UnDo� �@���昇-"O�m��$�B���,�
uw"^�                    K       K   K   K    Y\b   " _�                             ����                                                                                                                                                                                                                                                                                                                                                             Y
��     �                   5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             Y
��     �               #include "Command.h"5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             Y
��     �                #include <stack>5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             Y
��     �                    std::vector<Bigint> operations5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             Y
��     �      	   	         std::vector<Bigint> operations5�_�                       !    ����                                                                                                                                                                                                                                                                                                                                                             Y
�     �      	   	      !void handler(std::string& input){5�_�                    	   !    ����                                                                                                                                                                                                                                                                                                                                                             Y
�\     �         
      !  std::vector<Bigint> operations;5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                v       Y
��     �               !void handler(std::string& input){5�_�      
           	           ����                                                                                                                                                                                                                                                                                                                                                 v        Y
��     �                 "voiud handler(std::string& input){       !  std::vector<Bigint> operations;     std::stack<Bigint> commands;            }5�_�   	              
           ����                                                                                                                                                                                                                                                                                                                                                 v        Y
��     �                  5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                 v        Y
��     �                5�_�                           ����                                                                                                                                                                                                                                                                                                                            	                     v        Y
�#     �                 std::vector<Bigint> commands;5�_�                           ����                                                                                                                                                                                                                                                                                                                            	                     v        Y
�)     �                 #std::vector<Bigint> commands = {num5�_�                       %    ����                                                                                                                                                                                                                                                                                                                            	                     v        Y
�0    �                 %std::vector<Command*> commands = {num5�_�                            ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
�]     �               Command* num,plus,mult,exp;5�_�                           ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
�`    �                 5std::vector<Command*> commands = {num,plus,mult,exp};5�_�                       !    ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
�q    �               !mesa::Command* num,plus,mult,exp;5�_�                       !    ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
�{     �               !mesa::Command* num,plus,mult,exp;5�_�                           ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
��     �               #include "Command.h"5�_�                           ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
��     �               #include "Command.h"5�_�                           ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
��    �   
            mesa::Command* 5�_�                           ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
��    �   
            mesa::OperandPusher num;5�_�                            ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
�3    �   
            OperandPusher num;5�_�                           ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
�u    �   
            mesa::OperandPusher num;5�_�                           ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
�z   	 �   
            mesa::OperandPusher* num;5�_�                           ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
��     �   
            OperandPusher* num;5�_�                    
        ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
��   
 �   	             5�_�                           ����                                                                                                                                                                                                                                                                                                                               4          5       v   L    Y
��    �               OperandPusher* num;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  v       Y
��     �   
            OperandPusher num;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  v       Y
��    �               OperandPusher* nump;5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  v       Y
��     �               OperandPusher* num = a;5�_�      !                       ����                                                                                                                                                                                                                                                                                                                                                  v       Y
��    �   
             OperandPusher a;5�_�       "           !      '    ����                                                                                                                                                                                                                                                                                                                                                  v       Y
��     �   
            'OperandPusher* num = new OperandPusher;5�_�   !   #           "           ����                                                                                                                                                                                                                                                                                                                                                  v       Y
�    �                
Add* plus;5�_�   "   $           #          ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
�p    �               Add* plus = new Add;5�_�   #   %           $          ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
��    �               Multiply mult = new Multiply;5�_�   $   &           %          ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
��    �               Multiply* mult = new Multiply;5�_�   %   '           &      ;    ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
�     �                 ;std::vector<mesa::Command*> commands = {num,plus,mult,exp};5�_�   &   (           '           ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
�#     �                �             5�_�   '   )           (           ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
�/     �                �             5�_�   (   *           )           ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
�3    �                �             5�_�   )   +           *          ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
�F    �               std::stack<BigInt> operands;5�_�   *   ,           +          ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
�M    �               "std::stack<mesa::BigInt> operands;5�_�   +   -           ,          ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
�P     �               "std::stack<mesa::Bigint> operands;5�_�   ,   .           -          ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
�Q    �                std::stack<mesaBigint> operands;5�_�   -   /           .          ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
��     �   
            'OperandPusher* num = new OperandPusher;5�_�   .   0           /          ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
��     �   
            #OperandPusher* = new OperandPusher;5�_�   /   1           0          ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
��    �                num->execute(operands, token);5�_�   0   2           1           ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
��     �                �             5�_�   1   3           2           ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
��    �                ;std::vector<mesa::Command*> commands = {num,plus,mult,exp};5�_�   2   4           3           ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
��     �                �             5�_�   3   5           4          ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
��    �               a->execute(operands, token)5�_�   4   6           5   
        ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
��     �   
             �   
          5�_�   5   7           6           ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
��     �                  �               5�_�   6   =           7           ����                                                                                                                                                                                                                                                                                                                                          '       v   +    Y
��    �                =//std::vector<mesa::Command*> commands = {num,plus,mult,exp};�                 //num->execute(operands, token);�                a->execute(operands, token);�                std::string token;�                std::stack<Bigint> operands;�                Power* exp = new Power;�                Multiply* mult = new Multiply;�                Add* plus = new Add;�                %OperandPusher* a = new OperandPusher;5�_�   7   >   8       =   
        ����                                                                                                                                                                                                                                                                                                                                                  V        Y
��     �   
             �   
          5�_�   =   ?           >          ����                                                                                                                                                                                                                                                                                                                                                  V        Y
��    �   
            // TODO5�_�   >   A           ?          ����                                                                                                                                                                                                                                                                                                                                                  V        Y=�     �               '  OperandPusher* a = new OperandPusher;5�_�   ?   B   @       A          ����                                                                                                                                                                                                                                                                                                                                                  V        Y=�     �                  a->execute(operands, token);5�_�   A   C           B          ����                                                                                                                                                                                                                                                                                                                                                  V        Y=�     �                "  //num->execute(operands, token);5�_�   B   D           C          ����                                                                                                                                                                                                                                                                                                                                                  V        Y=�     �                ?  //std::vector<mesa::Command*> commands = {num,plus,mult,exp};5�_�   C   E           D          ����                                                                                                                                                                                                                                                                                                                                                  V        Y=�     �                   //a->execute(operands, token);5�_�   D   F           E           ����                                                                                                                                                                                                                                                                                                                                                  V        Y=�     �                 5�_�   E   G           F          ����                                                                                                                                                                                                                                                                                                                                                v       Y>8     �               )  OperandPusher* num = new OperandPusher;     Add* plus = new Add;      Multiply* mult = new Multiply;     Power* exp = new Power;5�_�   F   H           G   
        ����                                                                                                                                                                                                                                                                                                                                                v       Y>;     �   	             �   
          5�_�   G   I           H   
        ����                                                                                                                                                                                                                                                                                                                                                v       Y><     �   	            'OperandPusher* num = new OperandPusher;5�_�   H   J           I          ����                                                                                                                                                                                                                                                                                                                                                v       Y>A   ! �                 Power* exp = new Power;5�_�   I   K           J      -    ����                                                                                                                                                                                                                                                                                                                               <                 v       YW�     �               =  std::vector<mesa::Command*> commands = {num,plus,mult,exp};5�_�   J               K           ����                                                                                                                                                                                                                                                                                                                               <                 v       Y\a   " �                5�_�   ?           A   @          ����                                                                                                                                                                                                                                                                                                                                                  V        Y=�     �                 a->execute(operandss, token);5�_�   7   9       =   8           ����                                                                                                                                                                                                                                                                                                                                                  V        Y
��     �              5�_�   8   :           9   	        ����                                                                                                                                                                                                                                                                                                                                                  V        Y
��     �   	   
       �   	   
         '  OperandPusher* a = new OperandPusher;     Add* plus = new Add;      Multiply* mult = new Multiply;     Power* exp = new Power;5�_�   9   ;           :   	       ����                                                                                                                                                                                                                                                                                                                                                  V        Y
��     �   	   
          5�_�   :   <           ;           ����                                                                                                                                                                                                                                                                                                                            
           
           V        Y
��     �   
             %OperandPusher* a = new OperandPusher;�                Add* plus = new Add;�                Multiply* mult = new Multiply;�                Power* exp = new Power;5�_�   ;               <   
        ����                                                                                                                                                                                                                                                                                                                            
           
           V        Y
��     �   	             5��