/*
 * Program2.c
 *
 *  Created on: Feb 10, 2023
 *      Author: a771s435
 */

#include <stdio.h>

#define TD 6 //touchdown score
#define FG 3 //field goal score
#define SAFETY 2 //safety score
#define TDCV 8 //touchdown with conversion score
#define TDFG 7 //touchdown with field goal score

int main(){
	int score = 2;
	printf("Enter 0 or 1 to STOP\n");
	while(1){
		printf("Enter the NFL score: ");
		scanf("%d", &score);
		if(score == 1 || score == 0) break;
		for(int a = 0; a <= score/TDCV; ++a){
			for(int b = 0; b <= score/TDFG; ++b){
				for(int c = 0; c <= score/TD; ++c){
					for(int d = 0; d <= score/FG; ++d){
						for(int e = 0; e <= score/SAFETY; ++e){
							if(a*TDCV + b*TDFG + c*TD + d*FG + e*SAFETY == score){
								printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety/Safeties\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
}
