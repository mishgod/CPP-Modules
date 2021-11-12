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

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif
