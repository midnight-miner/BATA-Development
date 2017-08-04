// Copyright (c) 2012-2014 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

/**
 * network protocol versioning
 */

//
// client versioning
//
// added stuff for gravity update ( changed proto version to 80005, 80003 unsupported )

// static const int PROTOCOL_VERSION = 70003;

//! initial proto version, to be increased after version/verack negotiation

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

//
// network protocol versioning
//

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 70002;

static const int PROTOCOL_VERSION_SHORT = 7;

static const int PROTOCOL_VERSION = 80008;

// intial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 209;

//! disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION = GETHEADERS_VERSION;

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 81402;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 80000;
static const int NOBLKS_VERSION_END = 80002;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

// "mempool" command, enhanced "getdata" behavior starts with this version:
static const int MEMPOOL_GD_VERSION = 60002;

#endif // BITCOIN_VERSION_H
