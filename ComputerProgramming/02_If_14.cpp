    #include<iostream>
    using namespace std;
    int main()
    {
        long long int id1,id2;
        float grade1,grade2;
        char comprog1,comprog2,cal1_std1,cal2_std1,cal1_std2,cal2_std2;
        bool pass1 = true;
        bool pass2 = true;
        cin>>id1>>grade1>>comprog1>>cal1_std1>>cal2_std1;
        cin>>id2>>grade2>>comprog2>>cal1_std2>>cal2_std2;

        //operation
        if(comprog1!='A'&&comprog2!='A')
        {
            pass1 = false;
            pass2 = false;
        }
        if(comprog1=='A'&&comprog2!='A')
        {
            pass1 = true;
            pass2 = false;
            if(cal1_std1=='D'||cal1_std1=='F'||cal2_std1=='D'||cal2_std1=='F') pass1 = false;
            if(cal1_std2=='D'||cal1_std2=='F'||cal2_std2=='D'||cal2_std2=='F') pass2 = false;
        }
        if(comprog1!='A'&&comprog2=='A')
        {
            pass1 = false;
            pass2 = true;
            if(cal1_std1=='D'||cal1_std1=='F'||cal2_std1=='D'||cal2_std1=='F') pass1 = false;
            if(cal1_std2=='D'||cal1_std2=='F'||cal2_std2=='D'||cal2_std2=='F') pass2 = false;
        }
        if(comprog1=='A'&&comprog2=='A')
        {
            if(cal1_std1=='D'||cal1_std1=='F'||cal2_std1=='D'||cal2_std1=='F') pass1 = false;
            if(cal1_std2=='D'||cal1_std2=='F'||cal2_std2=='D'||cal2_std2=='F') pass2 = false;
        }

        //output
        if(pass1==false&&pass2==false) cout<<"None";
        else if(pass1==false&&pass2==true) cout<<id2;
        else if(pass1==true&&pass2==false) cout<<id1;
        else if(pass1==true&&pass2==true)
        {
            if(grade1>grade2) cout<<id1;
            if(grade2>grade1) cout<<id2;
            if(grade1==grade2)
            {
                if(grade1==grade2&&comprog1==comprog2&&cal1_std1==cal1_std2&&cal2_std1==cal2_std2) cout<<"Both";
                else
                {
                    if(cal1_std1=='B'&&cal1_std2=='C' || cal2_std1=='B'&&cal2_std2=='C') cout<<id1;
                    else if(cal1_std1=='A'&&cal1_std2=='B' || cal2_std1=='A'&&cal2_std2=='B') cout<<id1;
                    else if(cal1_std1=='A'&&cal1_std2=='C' || cal2_std1=='A'&&cal2_std2=='C') cout<<id1;
                    else if(cal1_std2=='B'&&cal1_std1=='C' || cal2_std2=='B'&&cal2_std1=='C') cout<<id2;
                    else if(cal1_std2=='A'&&cal1_std1=='B' || cal2_std2=='A'&&cal2_std1=='B') cout<<id2;
                    else if(cal1_std2=='A'&&cal1_std1=='C' || cal2_std2=='A'&&cal2_std1=='C') cout<<id2;
                }
            }
        }
    }
