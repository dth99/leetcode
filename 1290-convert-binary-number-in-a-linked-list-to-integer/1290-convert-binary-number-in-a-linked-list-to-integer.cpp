
class Solution {
public:
    
//     // approach 1 linked list to string , binary string to integer 0ms
    
//     // converting binary of string into number
//     int binaryToDecimal(string s)
//     {
//         int dec=0;
//         // 10000 -> 2^0
        
//         int base=1;
        
//         int n= (int)s.length();
//         for(int i=n-1;i>=0;i--){
//             if(s[i]=='1'){
//                 dec+=base;
//             }
//             base*=2;
//         }
//         return dec;
//     }
//     int getDecimalValue(ListNode* head) {
        
        
//         // converting linkedlist into string
//         string s;
//         ListNode *temp=head;
//         while(temp!=NULL){
//             int data= temp->val;
//             char x=(data==1)?'1':'0';
//             s=s+x;
//             temp=temp->next;
//         }
        
//         int ans=binaryToDecimal(s);
//         return ans;
             
//     }    
            // aprroach 2  0ms

            int getDecimalValue(ListNode* head) {

                int ans=0;
                ListNode *temp=head;
                while(temp!=NULL){
                    ans*=2;
                    ans+=(temp->val);
                    temp=temp->next;
                }

                return ans;
        }
};