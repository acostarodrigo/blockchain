/*
 * minerwhitelist.cpp
 *
 *  Created on: Aug 26, 2016
 *      Author: rodrigo
 */

#include "minerwhitelist.h"
#include "tinyformat.h"
#include "serialize.h"

using namespace std;

/**
 * IoP changes by Rodrigo Acosta
 */
//
// MinerWhiteList
//
CMinerWhiteList::CMinerWhiteList() {
	pathMinerWhiteList = GetDataDir() / "MinerWhiteList.dat";
}

bool CMinerWhiteList::Write(std::string pkey) {
	// Generate random temporary filename
	unsigned short randv = 0;
	GetRandBytes((unsigned char*) &randv, sizeof(randv));
	std::string tmpfn = strprintf("minerwhitelist.dat.%04x", randv);

	// serialize banlist, checksum data up to that point, then append csum
	CDataStream ssMinerWhiteList(SER_DISK, CLIENT_VERSION);
	ssMinerWhiteList << FLATDATA(Params().MessageStart());
	ssMinerWhiteList << pkey;
	uint256 hash = Hash(ssMinerWhiteList.begin(), ssMinerWhiteList.end());
	ssMinerWhiteList << hash;

	// open temp output file, and associate with CAutoFile
	boost::filesystem::path pathTmp = GetDataDir() / tmpfn;
	FILE *file = fopen(pathTmp.string().c_str(), "wb");
	CAutoFile fileout(file, SER_DISK, CLIENT_VERSION);
	if (fileout.IsNull())
		return error("%s: Failed to open file %s", __func__, pathTmp.string());

	// Write and commit header, data
	try {
		fileout << ssMinerWhiteList;
	} catch (const std::exception& e) {
		return error("%s: Serialize or I/O error - %s", __func__, e.what());
	}
	FileCommit(fileout.Get());
	fileout.fclose();

	// replace existing banlist.dat, if any, with new banlist.dat.XXXX
	if (!RenameOver(pathTmp, pathMinerWhiteList))
		return error("%s: Rename-into-place failed", __func__);

	return true;
}

bool CMinerWhiteList::Read(std::string pkey) {
	return true;
}

