#include <cstdlib>
#include <cstdio>
#include <cmath>

int gearCount = 40;
int gearAngle = 360/40;

int getRotation(int src, int target, bool clockwise)
{
    if(clockwise)
    {
        if(src <= target)
        {
            return (gearCount + src - target)* gearAngle;
        }
        else
        {
            return (src - target)*gearAngle;
        }
    }
    else
    {
        if(src < target)
        {
            return (target - src)*gearAngle;
        }
        else
        {
            return (gearCount + target - src)*gearAngle;
        }
    }
}
     

int main()
{
    int a, b, c, d;
    int totalAngle;
    while(true)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a == 0 && b == 0 && c == 0 && d == 0)
        {
            break;
        }

        totalAngle = 720;
        totalAngle += getRotation(a, b, true);
        totalAngle += 360;
        totalAngle += getRotation(b, c, false);
        totalAngle += getRotation(c, d, true);
                
        printf("%d\n", totalAngle);
    }

}
