Vim�UnDo� ���rj�8]�����=�'#kI�7׎ l���4�   4   #include "BigInt.hpp"                             X�L    _�                            ����                                                                                                                                                                                                                                                                                                                                                             X�K�     �      	   4      #include "BigInt.hpp"5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             X�K�    �   -   /          0  BOOST_CHECK( std::string{(BigInt{2} ^ 999)} ==�   ,   .          &  BOOST_CHECK( (BigInt{0} ^ 9) == 0 );�   +   -          &  BOOST_CHECK( (BigInt{8} ^ 0) == 1 );�   )   +             BOOST_CHECK( BigInt{2} ^ 99 );�   '   )          %  BOOST_CHECK( BigInt{81} / 9 == 9 );�   &   (          $  BOOST_CHECK( BigInt{0} / 3 == 0 );�   $   &          $  BOOST_CHECK( BigInt{1} * 7 == 7 );�   #   %          $  BOOST_CHECK( BigInt{6} * 1 == 6 );�   "   $          $  BOOST_CHECK( BigInt{5} * 0 == 0 );�   !   #          $  BOOST_CHECK( BigInt{0} * 4 == 0 );�      !          $  BOOST_CHECK( BigInt{7} - 4 == 3 );�                 $  BOOST_CHECK( BigInt{2} - 0 == 2 );�                %  BOOST_CHECK( BigInt{5} + 6 == 11 );�                $  BOOST_CHECK( BigInt{1} + 0 == 1 );�                  BigInt a = 0;�                )BOOST_AUTO_TEST_CASE( BigInt_arithmetic )�                  BOOST_CHECK( BigInt{"456"} );�                  BOOST_CHECK( BigInt{123} );�   	             ,BOOST_AUTO_TEST_CASE( BigInt_instantiation )�                $#define BOOST_TEST_MODULE BigIntTest5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             X�L     �                  BOOST_CHECK( Bigint{123} );5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             X�L    �   
             {5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             X�L     �   
             //{5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             X�L    �                  BOOST_CHECK( Bigint{"456"} );5��