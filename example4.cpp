#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

bool isLessThan( const string & lhs, const string & rhs )
{ return strcasecmp( lhs.c_str( ), rhs.c_str( ) ) < 0; }

template <typename Object>
const Object & findMax( const vector<Object> & arr, bool (*compar)(const Object&, const Object&))
{
	int maxIndex = 0;

	for( int i = 1; i < arr.size( ); ++i )
		if( compar( arr[ maxIndex ], arr[ i ] ) )
			maxIndex = i;

	return arr[ maxIndex ];
}


int main( )
{
	vector<string> arr = { "ZEBRA", "alligator", "crocodile" };
	cout << findMax( arr, isLessThan) << endl;

	return 0;
}

