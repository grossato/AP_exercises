#include<iostream>
#include<vector>

enum class montht{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};



class date{
  unsigned int year;
  montht month;
  unsigned int day;
 
public:
   date();
 const  unsigned int get_day(){
   return day;
  }
 const unsigned int get_month(){
    return  int(month);
  }
 const  unsigned int  get_year(){
    return year;
      }

  void add_month();
  
    void  add_day(){
    day=day+1;
    add_month();
  }
  void  add_days(int n){
    for(int i=0;i<n;i++){
      add_day();
    }

  }

  
};

date::date(void){
  year=2019;
  month=montht::feb;
  day=9 ;


}

bool operator==(const date & lhs, const date & rhs);

int main(){
  date d;
  std::cout << int(montht::dec)+1<< "\n";
  d.add_days(20);
  std::cout << d.get_day()<< "/"<<d.get_month()+1<< "/"<<d.get_year()<<std::endl;





}
void date::add_month(){
    unsigned int i=0;
      switch(month){
	case montht::jan:
	case montht::mar:
	case montht::may:
	case montht::jul:
	case montht::aug:
	case montht::oct:	if(day>30){

	 day=1;
      	 i=int(month)+1;
	 std::cout << i<< std::endl;
	 month=montht(i);
        

	  break;
	}
      case montht::dec:{
               if(day>31){
	  
	  day=1;
	  month=montht(1);
	 
	  year=year+1;
	 
	  break;
	       }}
      case montht::apr:
      case montht::jun:
      case montht::sep:
      case montht::nov:if(day>30){

	  i=0;
	  day=1;
	  
	 month=montht(1+int(month));
	 break;
	}
      case montht::feb:
	if(year % 4==0 && year % 400!=0){
	  if(day>29){
	  day=1;
	 i=int(month)+1;
	 month=montht(i);	 
	   
	 break;}
	}
	else{   

	  if(day>28){
	  day=1;
	 i=int(month)+1;
	 month=montht(i);	 
	   
	  break;
	}
	}
      }
    }






bool operator==( date & lhs,  date & rhs){
  if(lhs.get_day()==rhs.get_day() && lhs.get_year()==rhs.get_year() && lhs.get_month()==rhs.get_month()){ return 1;}
  else return 0;
}





