// Copyright (c) 2012-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The Bata developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

/**
 * network protocol versioning
 */

//
// client versioning
// There were multiple releases with the same protocol version creating many Orphan Txs
// Updated minimum version for GETHEADER -> 80007 to avoid conflicts and flooding.
// GETHEADERS_VERSION was implemented with 80007 however there are other nodes with 80007
// that do not support GETHEADERS therefore NOBLKS_VERSION_END increased to 80007
//
// added stuff for gravity update ( changed proto version to 80005, 80003 unsupported )

static const int PROTOCOL_VERSION = 80010;

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 209;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

//
// network protocol versioning
//

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 80008;

//! disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION = 80008;

//! minimum peer version accepted by ObfuscationPool
static const int MIN_POOL_PEER_PROTO_VERSION = 80010;

//! minimum peer version for masternode budgets
static const int MIN_BUDGET_PEER_PROTO_VERSION = 80010;

//! minimum peer version for masternode winner broadcasts
static const int MIN_MNW_PEER_PROTO_VERSION = 80010;

static const int PROTOCOL_VERSION_SHORT = 10;

//! minimum peer version that can receive masternode payments
// V1 - Last protocol version before update
// V2 - Newest protocol version
static const int MIN_MASTERNODE_PAYMENT_PROTO_VERSION_1 = 80010;
static const int MIN_MASTERNODE_PAYMENT_PROTO_VERSION_2 = 80010;

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 80000;
static const int NOBLKS_VERSION_END = 80007;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

// "mempool" command, enhanced "getdata" behavior starts with this version:
static const int MEMPOOL_GD_VERSION = 60002;

#endif // BITCOIN_VERSION_H
