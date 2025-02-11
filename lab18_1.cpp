#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){


	double width, height,area;

	if(R1.x+R1.w < R2.x){
		width = 0;

	}else if(R2.x+R2.w < R1.x){
		width = 0;
	}else if((R1.x+R1.w)> R2.x){
		if((R1.x+R1.w)<= (R2.x+R2.w)){
			width = (R1.x+R1.w-R2.x);
		}else{
			width = R2.w;
		}

	}else if((R2.x+R2.w)> R1.x){
		if((R2.x+R2.w)<= (R1.x+R1.w)){
			width = (R2.x+R2.w-R1.x);
		}else{
			width = R1.w;
		}

	} 

		

	 
	
if(R1.y <= R2.y){
    if(R2.y-R2.h >= R1.y){
        height = 0;
    }else{
        if(R2.y-R2.h >= R1.y-R2.h){
            height=  R1.y-(R2.y-R2.h);
        }else{
            height = R1.h;
        }
        
        
    }
    
}else{
    if(R1.y-R1.h >= R2.y){
        height = 0;
    }else{
        
        if(R1.y-R1.h >= R2.y-R2.h){
            height = R2.y-(R1.y-R1.h);
        }else{
            height = R2.h;
        }
        
    }
    
    
}





	area = height * width;



	return area;
	
}