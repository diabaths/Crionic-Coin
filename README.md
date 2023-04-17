
# Crionic Core integration/staging tree
===========================================
Crionic Core new release version : 1.1.0

README.md Updated on april 17st 2023

What is Crionic ?
----------------------

Crionic is a coin based on Lightning-Cash ( LNC ),with Yespower POW algorithm, including DarkGravityWave ( difficulty changes for every block ) and possible CURRENT block difficulty change over time to protect against high network hash variation and long stale tip. It is also 15 times faster than LitecoinCash. For full details, please visit our website at https://crionic.org, or visit Litecoin Cash's website here : https://litecoinca.sh 

Compiled binary releases are available here on Github.
Whitepapers will be available soon.

Current supported version are 1.1.0

Crionic Core is the full node software that makes up the backbone of the Crionic p2p network.


Website : https://crionic.org

Pool : https://pool.crionic.org

Block Explorer : https://explorer.crionic.org

Discord Server : https://discord.gg/v7uqs6nhSt 


Exchanges : 

Integration under way : 

https://atomicdex.io/


Any OS build instructions :

https://github.com/diabaths/Crionic-Coin/blob/master/doc/build-ALL-OS.md




Crionic Characteristics
---------------------------------------------------------------------------


- Hash Algorithm : Yespower POW algorithm    ( CPU only )

( With the addition of modified Dash's DarkGravityWave v3 algorithm, that changes difficulty every block, and progressively lowers difficulty if long stale tips happens. Tested and fully working !!) ---> check DarkGravity V3 (https://github.com/dashpay/dash/blob/master/src/pow.cpp#L82) (By Evan Duffield)
 <evan@dash.org>

And modifications from Lighining-Cash Dev made here :        https://github.com/MerlinMagic2018/Lightning-Cash/blob/main/src/pow.cpp#L110

( Difficulty adjusted every block and possibly in CURRENT block if a long network stale tip happens !! This protects Crionic from high hash variations and " high hash attacks " , that happens frequently for new coins and kills them by making the mining difficulty too high for the " normal " network's hash rate. )


- The Hive : A "hodl and profit" mining system accessible to everyone, that works side by side with POW mining, invented by LitecoinCash's developers !!

- YespowerLTNCG / Hive blocks ratio : 50 % / 50 % ( active since Hive 1.2 )

- Maximum Supply : 113,996,811 CRNC 

- Coins created so far : 2.200.000 CRNC ( @ Block # 0 , May 2th 2023 ) ---> 1 % of max supply

- Coins circulating : 62,315,986 CRNC  on September 13th 2022

- Coins burned in the hive so far : 27,524,595 CRNC  on September 13th 2022 

- First halving : Block #1050000 

- Official Mining Pool http://pool.crionic.org

- 20 seconds block time. ( In chainparams.cpp. is set at 25 seconds, with hive, makes it 20s)

- Number of confirmations needed for a transaction : 6  (transaction is confirmed in approximately 30.6 seconds)

- Premine : 2,200,000 coins, just 1.93 % of max supply

- Block Reward : 80 Crionic - halved every 1 050 000 blocks


Crionic Core is based on Lightning-Cash Core , LitecoinCash Core, Litecoin Core and Bitcoin Core's open source codes.
( Bitcoin ---> Litecoin ---> LitecoinCash ---> Lightning-Cash ---> Crionic )
Crionic is not directly associated with LitecoinCash's team, but was created with the help of Tanner / coldcity


License
-------

Crionic Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

A copy of this license can be found here :

https://github.com/diabaths/Crionic-Coin/blob/master/COPYING


Development Process
-------------------

You can fork Crionic github's repository, tweak the code and suggest pull request if you have bug fixes or improvements to propose.

Testing
-------

For now, testing is done privately before releasing new wallet's versions.

Translations
------------

Any translation corrections or expansions are welcomed as GitHub pull requests.
