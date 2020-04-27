#include<stdio.h>
#include<math.h>
#define PI 3.1415

int main()
{
	double wr, db, f_rope, s_rope ,ff, sf, nf;
/*wr = width of river, db = distance of boat from bank, f_rope = length of first rope, s_rope = length of second rope, a = alpha,b = beta,ff = force on first rope, sf = force on second rope, xf = force in x direction, yf = force in y direction, nf = netforce acting on the boat */
	double x ,y ,a ,b;
	printf("problem to be solved only if the boat is moving parallel to the river.\n");
	printf("\n");
	printf("Enter the width of the river: ");
	scanf("%lf",&wr);
	printf("Enter the perpendicular distance of boat from one of the bank of the river: ");
	scanf("%lf",&db);
	printf("Enter the distance of rope from bank(first rope): ");
	scanf("%lf",&f_rope);
	printf("Enter the distance of rope from bank(second rope): ");
	scanf("%lf",&s_rope);
	printf("Enter the force acting on the first rope (in kN): ");
	scanf("%lf",&ff);
	x = db/f_rope;
	a = asin(x);
	y = (wr-db)/s_rope;
	b = asin(y);
	sf = (sin(a)/sin(b))*ff;
	nf = (ff*cos(a))+(sf*cos(b));
	printf("There for net force acting on the boat is %.2lf",nf);
}
