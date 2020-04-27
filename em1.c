#include<stdio.h>
#include<math.h>
#define PI 3.141

int main()
{
    double fa, ua, ub, uab, a;
    /*fa = force acting on block A due to above pipe, ua = coefficient of friction between block A and wall*/
    /*ub = coefficient of friction between block B and wall, uab = coefficient of friction between block A and block B*/
    /*a = Angle of inclination*/
    printf("Enter the force acting on the pipe(Placed on Block A): ");
    scanf("%lf",&fa);
    printf("Enter the Friction Between Block A and Wall: ");
    scanf("%lf",&ua);
    printf("Enter the Friction Between Block B and Wall: ");
    scanf("%lf",&ub);
    printf("Enter the Friction Between Block A and Block B: ");
    scanf("%lf",&uab);
    printf("Enter the angle of inclination(in Degree): ");
    scanf("%lf",&a);
    double naw, nab, nba, nbw, val;
    /*naw = normal force b/w block A and wall, nab = normal force b/w block A and block B = nba*/
    /*nbw = normal force b/w block B and wall*/
    double faw, fab,fbw,p;
    /*faw =  friction force b/w block A and wall, fab = friction force b/w block A and block B*/
    /*fbw = friction force b/w block B and wall*/
    val = (PI/180)*a;
    nab = fa/((cos(val))-(uab*(sin(val))));
    nbw = nab*cos(val);
    fbw = uab*nbw;
    p = (nab*sin(val)) + fbw;
    printf("%.2f\n",p);
}
