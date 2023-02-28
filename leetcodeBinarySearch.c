// https://leetcode.com/problems/binary-search/submissions/906730616/

int search(int* nums, int numsSize, int target){
    int l=0,r=numsSize-1,mid,result=-1;
    while (l<=r)
    {
        mid=(l+r)/2;
        if (target==*(nums+mid)){
            result=mid;
            break;
        }
        else if (target<*(nums+mid)){
            r=mid-1;
        }
        else if (target>*(nums+mid)){
            l=mid+1;
        }
        else{
            break;
        }
    }
    return result;
}
