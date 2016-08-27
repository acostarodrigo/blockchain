/*
 * minerwhitelist.h
 *
 *  Created on: Aug 26, 2016
 *      Author: rodrigo
 */

#ifndef MINERWHITELIST_H_
#define MINERWHITELIST_H_
#endif /* MINERWHITELIST_H_ */

#include <boost/filesystem/path.hpp>
#include <boost/foreach.hpp>
#include <boost/signals2/signal.hpp>

using namespace std;

/**
 * IoP changes by Rodrigo Acosta
 */
//!check is the MinerWhiteList has unwritten changes
//static bool MinerWhiteListIsDirty();
//!set the "dirty" flag for the MinerWhiteList
//static void SetMinerWhiteListDirty(bool dirty=true);
/**
 * IoP change by Rodrigo Acosta
 */
/** Access to the miner list minerWhiteList.dat */
class CMinerWhiteList {
private:
	boost::filesystem::path pathMinerWhiteList;
public:
	CMinerWhiteList();
	bool Write(std::string pkey);
	bool Read(std::string pkey);
};

