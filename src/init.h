// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 Bitcoin Developers
// Copyright (c) 2014 Chatcoin Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef CHATCOIN_INIT_H
#define CHATCOIN_INIT_H

#include "wallet.h"

extern CWallet* pwalletMain;

void StartShutdown();
bool ShutdownRequested();
void Shutdown();
bool AppInit2(boost::thread_group& threadGroup);
std::string HelpMessage();

#endif
