// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2017 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <primitives/block.h>

#include <hash.h>
#include <tinyformat.h>
#include <utilstrencodings.h>
#include <crypto/common.h>
#include <yespower/yespower.h>
#include <streams.h>
#include <pow.h>
#include <crypto/scrypt.h>
#include <chainparams.h>

uint256 CBlockHeader::GetHash() const
{
    return SerializeHash(*this);
}

uint256 CBlockHeader::GetPoWHash() const // Removed the " if fork then pow is sha256 " so always scrypt now !
{
    uint256 thash;
    scrypt_1024_1_1_256(BEGIN(nVersion), BEGIN(thash));
    return thash;
}

uint256 CBlockHeader::GetHashYespower() const
{
    uint256 thash;
    CDataStream ss(SER_NETWORK, PROTOCOL_VERSION);
    ss << *this;
    yespower_params_t yespower_1_0_ltncgyes = {
        .version = YESPOWER_1_0,
        .N = 2048,
        .r = 32,
        .pers = (const uint8_t *)"LTNCGYES",
        .perslen = 8 
    };
    if (yespower_tls( (unsigned char *)&ss[0], ss.size(), &yespower_1_0_ltncgyes, (yespower_binary_t *)&thash) ) {
        abort();
    }
    return thash;
}



std::string CBlock::ToString() const
{
    std::stringstream s;
    // Crionic: Hive: Include type
    s << strprintf("CBlock(type=%s, hash=%s, powHash=%s, yespowerpow=%s, ver=0x%08x, hashPrevBlock=%s, hashMerkleRoot=%s, nTime=%u, nBits=%08x, nNonce=%u, vtx=%u)\n",
        IsHiveMined(Params().GetConsensus()) ? "hive" : "pow",
        GetHash().ToString(),
        GetPoWHash().ToString(),
        GetHashYespower().ToString(),
        nVersion,
        hashPrevBlock.ToString(),
        hashMerkleRoot.ToString(),
        nTime, nBits, nNonce,
        vtx.size());
    for (const auto& tx : vtx) {
        s << "  " << tx->ToString() << "\n";
    }
    return s.str();
}
