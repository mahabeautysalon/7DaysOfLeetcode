class Solution {
public:
    string intToRoman(int num) {
        map<int,string> int_to_roman;
        string res="";
        int_to_roman[1]="I";
        int_to_roman[5]="V";
        int_to_roman[10]="X";
        int_to_roman[50]="L";
        int_to_roman[100]="C";
        int_to_roman[500]="D";
        int_to_roman[1000]="M";
        // 587
        //   DLXXXVII
        //   487
        //    CDLXXXVII
        while(num>0)
        {
            cout << "num : " << num << " ";
            if(num>=1000)
            {
                res+=int_to_roman[1000];
                num-=1000;
            }else if(num<1000 && num>=900)
            {
                res+=int_to_roman[100];
                res+=int_to_roman[1000];
                num-=900;
            }else if(num>=500)
            {
                res+=int_to_roman[500];
                num-=500;
            }else if(num<500 && num>=400)
            {
                res+=int_to_roman[100];
                res+=int_to_roman[500];
                num-=400;
            }else if(num>=100)
            {
                res+=int_to_roman[100];
                num-=100;
            }else if(num<100 && num>=90)
            {
                res+=int_to_roman[10];
                res+=int_to_roman[100];
                num-=90;
            }else if(num>=50){
                res+=int_to_roman[50];
                num-=50;
            }else if(num<50 && num>=40)
            {
                res+=int_to_roman[10];
                res+=int_to_roman[50];
                num-=40;
            }else if(num>=10)
            {
                res+=int_to_roman[10];
                num-=10;
            }else if(num<10 && num>=9)
            {
                res+=int_to_roman[1];
                res+=int_to_roman[10];
                num-=9;
            }else if(num>=5)
            {
                res+=int_to_roman[5];
                num-=5;
            }else if(num<5 && num>=4)
            {
                res+=int_to_roman[1];
                res+=int_to_roman[5];
                num-=4;
            }else if(num>=1)
            {
                res+=int_to_roman[1];
                num-=1;
            }
        }
        return res;
    }
};