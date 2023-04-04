#include<stdio.h>

union  Marks {
    int roll_no;
    char name[10];
    float chem_marks, maths_marks, phy_marks;
    
};

 main() {
 	
	float percentage;
    union Marks m[5];

    int i,n;
    printf("How many students data had you want to insert :");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
	  {
		printf("Student %d\n",i+1);
        printf("Enter roll no. :");
        scanf("%d", &m[i].roll_no);
        printf("Enter name :");
        scanf("%s",m[i].name);
        printf("Enter Chemistry marks :");
        scanf("%f", &m[i].chem_marks);
        printf("Enter Maths marks :");
        scanf("%f", &m[i].maths_marks);
        printf("Enter Physics marks :");
        scanf("%f", &m[i].phy_marks);
        printf("=============================\n");
      }
    
    for(i=0; i<n; i++) 
		{
	    printf("Student %d\n",i+1);
	    percentage = (m[i].chem_marks+m[i].maths_marks+m[i].phy_marks)/300.0*100;
	    printf("Percentage : %f\n", percentage);
		}
}
