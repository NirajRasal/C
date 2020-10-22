#inlcude<stdio.h>
#include(conio.h)
void main();
{
float p,px1,px2,py1,py2,py1_x1,py1_x2,py2_x1,py2_x2,hx,hy,hxy,hy_x,hx_y,ixy;
float px1y1,px1y2,px2y1,px2y2,ix1y1,ix1y2,ix2y1,ix2y2;
clrscr();
printf("\n binary symmetric channel: \n");
printf("\n \n enter the probability p:");
scanf("%f",&p);
px1=0.2;
px2=0.8;
printf("\n \n source probabilities are: px1=0.2\n px2=0.8");
py1_x1=1-p;
py2_x2=1-p;
py1_x2=p;
py2_x1=p;
printf("\n \n conditional probabilities are: py1_x1=%f\n py2_x1=%f\n py1_x2=%f\n py2_x2=%f",py1_x1,py2_x1,py1_x2,py2_x2);

/* receiver probabilities */
py1=(px1*py1_x1)+(px2*py1_x2);
py2=(px2*py1_x2)+(px1*py2_x1);
printf("\n \n probabilities of y:py1=%f\n py2=%f", py1,py2);

/* entropy */
hx=(-1)*(px1*(log10(px1)/log10(2)))+(px2*(log10(px2)/log10(2)));
printf("\n\n entropy of x is : %f bits per symbol",hx);
hy=(-1)*(py1*(log10(py1)/log10(2)))+(py2*(log10(py2)/log10(2)));
printf("\n entropy of y is: %f bits per symbol",hy);

/* joint probabilities */

px1y1=px1*py1_x1;
px1y2=px1*py2_x1;
px2y1=px2*py1_x2;
px2y2=px2*py2_x2;

printf("\n\n joint probabilities are: px1y1=%f\n px1y2=%f\n px2y2=%f",px1y1,px1y2,px2y1,px2y2);

/* joint entropy */

hxy=(-1)*((px1y1*(log10(px1y1)/log10(2)))+(px1y1*(log10(px1y2)/log10(2)))+(px2y1*(log10(px2y2)/log10(2)))+px2y2*(log10(px2y2)/log10(2)));
printf("\n\njoint entropy is:%f bits per symbol",hxy);

/* conditional entropies */

hy_x=(-1)*((px1y1*(log10(py1_x1)/log10(2)))+(px1y2*(log10(py2_x1)/log10(2)))+(px2y1*(log10(py1_x2)/log10(2)))+px2y2*(log10(py2_x2)/log10(2)));
printf("\n\nconditional entropy is:%f bits per symbol",hy_x);
hx_y=hxy-hy_x;
printf("\nconditional entropy is:%f bits per symbol",hx_y);

/*mutual info  */

ix1y1=log10(py1_x1/py1)/log10(2);
ix1y2=log10(py2_x1/py2)/log10(2);
ix2y1=log10(py1_x2/py1)/log10(2);
ix2y2=log10(py2_x2/py2)/log10(2);

printf("\n mutual information is:ix1y1=%fbits \n ix1y2=%fbits \n ix2y1=%fbits \n ix2y2=%fbits",ix1y1,ix1y2,ix2y1,ix2y2 );

/* average mututal information */
ixy=hy-hy_x;
printf("\n\naverage mututal information is:%fbits",ixy);
getch();

}