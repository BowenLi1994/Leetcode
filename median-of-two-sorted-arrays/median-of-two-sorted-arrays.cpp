class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size()>nums2.size()){
           return findMedianSortedArrays(nums2, nums1);
        }
    
        
        int size_x=nums1.size();
        int size_y=nums2.size();
        
        if(size_x==0){
            return (nums2[(size_y+1)/2-1]+nums2[(size_y+2)/2-1])/2.0;
        }
        
        if(size_y==0){
            return (nums1[(size_x+1)/2-1]+nums1[(size_x+2)/2-1])/2.0;
        }
        
        int start=0;
        int end=size_x;
        //cout<<"start: "<<start<<" end: "<<end<<endl;
        while(start<=end){
            
            int partitionX=(start+end)/2;
            int partitionY=(size_x+size_y+1)/2-partitionX;
            //cout<<"partitionX: "<<partitionX<<" partitionY: "<<partitionY<<endl;
            
            int maxXleft=(partitionX==0)?INT_MIN:nums1[partitionX-1];
            int minXright=(partitionX==size_x)?INT_MAX:nums1[partitionX];
            
            int maxYleft=(partitionY==0)?INT_MIN:nums2[partitionY-1];
            int minYright=(partitionY==size_y)?INT_MAX:nums2[partitionY];
            
            //cout<<"maxXleft: "<<maxXleft<<" minXright: "<<minXright<<" maxYleft: "<<maxYleft<<" minYright: "<<minYright<<endl;
            
            if(maxXleft<=minYright && maxYleft <=minXright){
                
                //cout<<"here!!!!"<<endl;
                if((size_x+size_y)%2==0){
                    //cout<<"even"<<endl;
                    return (max(maxXleft,maxYleft)+min(minXright,minYright))/2.0;
                }
                else{
                    return (double)max(maxXleft,maxYleft);
                }
            }
            else if( maxXleft >minYright){
                end=partitionX-1;
            }
            else if(maxYleft > minXright){
                start=partitionX+1;
            }
            
        }
        
        
        return 0;
    }
};