class ForceStructure
{
public:
	ForceStructure()
	{
		id = total++;
	}
	virtual void report() = 0;

protected:
	int id;
	static int total;
};

int ForceStructure::total = 0;
