#pragma once
#ifndef __BOOST_TIMER_H__
#define __BOOST_TIMER_H__

#include <boost/date_time/posix_time/posix_time.hpp>

class boost_timer{
public:
	boost_timer(){}
	~boost_timer(){}
	void begin(){
		t1_=boost::posix_time::microsec_clock::local_time();
	}
	void end(){
		t2_=boost::posix_time::microsec_clock::local_time();
	}
	double get_elapsed_time(){
		boost::posix_time::time_duration diff=t2_-t1_;
		return diff.total_milliseconds()/1000.0;
	}

private:
	boost_timer& operator=(const boost_timer&);
	boost_timer(const boost_timer&);
private:
	boost::posix_time::ptime t1_;
	boost::posix_time::ptime t2_;
};

#endif
