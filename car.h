/*	car.h -- Header file that defines the car class	*/

#define INLINE inline

typedef float type;

class Car
{
	private:
	type A;
	type C;
	type M;
	type moved;
    public:
    INLINE Car(type L, type c)
    {
        /*	The arg l, receives the total capacity of the car
			The arg c, receives the amount of gasoline consumed with 1L	*/
		setM(L);
		setC(c);
		moved = 0;
		A = 0;
    }

	INLINE
	void
	setM(type l)
	{
		/* Set the maximum capacity of the car	*/
		M = l;
	}

	INLINE
	void
	setA(type a)
	{
		/* Set the actual amount of gas	*/

		if ((a + A) > M){
			/*	The car can't store more gas than its maximum capacity	*/
			A = M;
			return ;
		}
		A = a;
	}

	INLINE
	void
	addGas(type g)
	{
		/*	Add G of gas to the total	*/
		setA(A + g);
	}

	INLINE
	void
	setC(type c)
	{
		/*	Define the consume of the car
			C is KM/L	*/
		C = c;
	}

	INLINE
	type
	getM()
	{
		/*	Return the maximum capacity of the car	*/
		return M;
	}

	INLINE
	type
	getA()
	{
		/*	Return the actual gas of the car	*/
		return A;
	}

	INLINE
	type
	getC()
	{
		/*	Return the consume of gas	*/
		return C;
	}

	INLINE
	void
	move(type K)
	{
		/*	Move the car in K KM	*/
		if (A < K/C)
		{
			/*	The car can't move more than the actual gas total	*/
			moved += A*C;
			setA(0);
			return;
		}
		moved += K;
		setA(A - (K / C));
	}

	INLINE
	type
	getTotalMoved()
	{
		/*	Return the moved distance in KM		*/
		return moved;
	}

};