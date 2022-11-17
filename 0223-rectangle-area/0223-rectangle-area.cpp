class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int a1=abs(ax1-ax2)*abs(ay1-ay2);
        int a2=abs(bx1-bx2)*abs(by1-by2);
        int a=min(ax2,bx2);
        int b=max(ax1,bx1);
        int dif=a-b;
        int c=min(ay2,by2);
        int d=max(ay1,by1);
        int dif1=c-d;
        
        
        if(dif>=0&&dif1>=0)
        {
            return a1+a2-dif*dif1;
        }
        else
        {
            return a1+a2;
        }
    }
};