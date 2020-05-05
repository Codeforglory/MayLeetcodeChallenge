class Solution {
public:
    int findComplement(int num) {
       unsigned int x = num,res = 1;
        int cnt = 0;
        while(x > 0){
           cnt++;
           x = x >> 1; 
        }
        //cout<< cnt<<endl;
        res = (res << cnt) - 1;// set all the bits used to represent the number to 1.
        return res ^ num;
       
    }
};
/*
if the number is 5
then its unsigned representation is

0000.....000101
no. of bits used to represent the number excluding the leading zeros is 3.
now we create mask
0000.....000111


now we perform xor operation of the number and the mask 
  0000.....000101
  0000.....000111
= 0000.....000010
which is the resultant complement
*/
