#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Karen {

public:
	Karen();
	~Karen();

	void	complain(string const& level);
	void	setNumLevel(int num);
	int		getNumLevel();

private:
	int		numLevel_;
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

#endif
