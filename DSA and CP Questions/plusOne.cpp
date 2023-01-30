class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size=digits.size();

        if(digits[size-1] < 9 )
           digits[size-1]=++digits[size-1];
        else if(size==1){
           digits[size-1]=0;
           digits.insert(digits.begin(),1);  
        }else{
            digits[size-1]=0;
            for(int i=size-2;i >= 0;i--){
                if(digits[i+1]==0 && digits[i] == 9 ){
                    digits[i]=0;
                    if(i==0)
                        digits.insert(digits.begin(),1);
                }
                else if(digits[i+1]==0 && digits[i] < 9)
                          digits[i]= ++digits[i];
                else 
                         break;      
            }     
        }
        return digits;
    }
};
