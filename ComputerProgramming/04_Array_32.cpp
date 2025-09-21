#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    int lift[n+1][5];
    for (int i = 0; i < n; i++)
    {
        int liftNum,liftAt,liftTo;
        cin >> liftNum >> liftAt >> liftTo;
        lift[i][0] = liftNum;
        lift[i][1] = liftAt;
        lift[i][2] = liftTo;
        if (liftAt <= liftTo) lift[i][3] = 1; 
        else lift[i][3] = 0; 
        lift[i][4] = 0; 
    }
    cin >> m;
    string ans = "";
    for (int j = 0; j < m; ++j)
    {
        int curFloor, goingFloor, minLoad = 1000, selected_lift;
        bool up = true;
        cin >> curFloor >> goingFloor;
        if (curFloor > goingFloor) up = false;
        for(int i = 0; i < n; ++i)
        {
            if(up == true && lift[i][3] == 1 && lift[i][1] <= curFloor && lift[i][2] >= curFloor) 
                lift[i][4] = 1;
            else if(up == false && lift[i][3] == 0 && lift[i][1] >= curFloor && lift[i][2] <= curFloor) 
                lift[i][4] = 1;
            int load;
            if (lift[i][4] == 1 && up == true) load = goingFloor - lift[i][2];
            else if (lift[i][4] == 1 && up == false) 
                load = lift[i][2] - goingFloor;
            else if (lift[i][4] == 0) 
                load = abs(curFloor - lift[i][2]) + abs(goingFloor - curFloor);
            if (load < 0) load = 0;
            if(load < minLoad)
            {
                selected_lift = lift[i][0];
                minLoad = load;
            }
            else if (load == minLoad) 
                selected_lift = min(lift[i][0],selected_lift);
            for (int i = 0; i < n; ++i) 
                lift[i][4] = 0;
        }
        if (j != m - 1) 
            ans = ans + ">> " + to_string(selected_lift) + "\n";
        else 
            ans = ans + ">> " + to_string(selected_lift);
    }
    cout << ans;
}