#ifndef Passenger_H
#define Passenger_H

#include <iostream>

using namespace std;
/*Passenger class
*@param integer eneter lift
*@param integer set weight
*@param integer set floor
*@param integer set destination floor
*@param integer set lift
*/
class Passenger {
public:
<<<<<<< HEAD
	Passenger(int, int, int, string, string);             /*@param integer the passenger enters a lift, set the weight, set the destination floor*/
	void callLift();                                     /*the passenger calls the lift*/
	void enterLift(int);                                /*@param integer eneter lift*/
	void exitLift();                                   /*@param integer eneter lift*/
	int getWeight();                                  /*@param integer get the weight*/
	void setWeight(int);                             /*@param integer save the weight*/
	int getFloor();                                 /*get the floor*/
	void setFloor(int);                            /*@param integer save the floor number*/
	int getDestFloor();                           /*gets the destinstion floor*/
	void setDestFloor(int);                      /*@param integer sets the destinstion floor */
	int getLift();                              /*get the lift*/
	void setLift(int);                         /*@param integer set the  lift*/
=======
	Passenger(int, int, int, int, string, string);
	void callLift();
	void enterLift(int);
	void exitLift();
	int getWeight();
	void setWeight(int);
	int getDirection();
	void setDirection(int);
	int getFloor();
	void setFloor(int);
	int getDestFloor();
	void setDestFloor(int);
	int getLift();
	void setLift(int);
>>>>>>> origin/master
//		int getTravelFreq();
//		void setTravelFreq(int);
//		struct tm getArrivalTime();
//		void setArrivalTime(String);
//		struct tm getDeptTime();
//		void setDeptTime(String);
<<<<<<< HEAD
	
private:                      /*the passenger  can access itself  */
	int ID;                  /*@param integer the identity */
	int weight;             /*@param integer the weight*/
	int travelFreq;        /*@param integer the travel frequency*/
	int floor;            /*@param integer floor the passenger is on*/
	int destinationFloor;        /*@param integer the destination floor */
	int currentLift;            /*@param integer of the current lift */
	bool idle;                  /*@param booleean passenger is idle either not taking the lift  */
	string tArr;                /*@param string to arrive */
	string tDept;              /*@param string to depart */
=======
private:
	int ID;
	int weight;
	int direction;
	int travelFreq;
	int floor;
	int destinationFloor;
	int currentLift;
	bool idle;
	string tArr;
	string tDept;
>>>>>>> origin/master
};
#endif
