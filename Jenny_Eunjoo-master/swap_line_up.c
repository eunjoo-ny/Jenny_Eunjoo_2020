#include<stdio.h>
void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);
int main(void) {
	double max, mid, min;
	printf("Insert three numbers");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	prinf("%.1lf,%.1lf,%.1lf", max, mid, min);
	return 0;

}
void swap(double *pa, double *pb) {
	double temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
 }
void line_up(double *maxp, double *midp, double *minp) {
	if (*maxp >= *midp && *maxp >= *minp) {
		if (*midp >= *minp) {
			return;
			
		}
		else if (*midp < *minp) {
			swap(&minp, &midp);
			return;

		}

	}
	else if (*maxp > * midp && *maxp < *minp) {
		swap(&minp, &maxp);
		swap(&minp, &midp);
		return;
		
	}
	else if (*maxp<*midp && *maxp> * minp) {
		swap(&midp, &maxp);
		return;

	}
	else {
		if (*midp < *minp) {
			
			swap(&minp, &maxp);
			return;
		}
		else {
			swap(&midp, &minp);
			swap(&minp, &maxp);
			return;
		}
	}
}//I can't find the error 

