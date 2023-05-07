
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

Discord Server : https://discord.gg/SKDkjcJTKM


Exchanges : 

Integration under way : 



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

- YespowerLTNCG / Hive blocks ratio : 75 % / 25 % ( active since Hive 1.1 )

- Maximum Supply : 335999919,891 CRNC 

- Coins created so far : 0 CRNC ( @ Block # 0 , May 2th 2023 ) ---> 0 % of max supply

- Coins circulating : 0 CRNC  on September 13th 2022

- Coins burned in the hive so far : 0 CRNC  on September 13th 2022 

- First halving : Block #4200000

- Official Mining Pool http://pool.crionic.org

- 20 seconds block time. ( In chainparams.cpp. is set at 25 seconds, with hive, makes it 20s)

- Number of confirmations needed for a transaction : 6  (transaction is confirmed in approximately 30.6 seconds)

- Premine : 3.360.000 coins, just 1 % of max supply

- Block Reward : 40 Crionic

- Halved every 4200000 blocks


The Hive Characteristics
---------------------------------------------------------------------------

- blocks for a new bee to mature: 48 * 51 = 2448 Blocks or ~= 12 Hours

- blocks a bee lives for after maturation : 48 * 24 * 29,75= 34.272 Blocks or ~= 7 Days

- Target Hive block frequency (1 out of this many blocks should be Hivemined) : 1 Every 4 Blocks 

- Bee cost Creation : ~0.08 CRNC

- Hive 1.1- Activated: June 17, 2023 (more bee lives and more) 

- OPTIONAL to return 10% of bee Creation to community fund( will by used to promote the coin)



				Block Reward
-------------------------------------------------------------------------------------------------------
				
From Block	To Block	Coins Reward	Total Coins Supply		Halving Time
0		4.200.000	40,0000			168.000.000		19. July 2025
4.200.001	8.400.000	20,0000			84.000.000		19. October 2027
8.400.001	12.600.000	10,0000			42.000.000	        19. January 2030
12.600.001	16.800.000	5,0000			21.000.000	        19. April 2032
16.800.001	21.000.000	2,5000			10.500.000	        19. July 2034
21.000.001	25.200.000	1,2500			5.250.000	        19. October 2036
25.200.001	29.400.000	0,6250			2.625.000	        19. January 2039
29.400.001	33.600.000	0,3125			1.312.500	        19. April 2041
33.600.001	37.800.000	0,1563			656.250		        19. July 2043
37.800.001	42.000.000	0,0781			328.125		        19. October 2045
42.000.001	46.200.000	0,0391			164.063		        19. January 2048
46.200.001	50.400.000	0,01953			82.031		        19. April 2050
50.400.001	54.600.000	0,00977			41.016		        19. July 2052
54.600.001	58.800.000	0,00488			20.508		        19. October 2054
58.800.001	63.000.000	0,00244			10.254		        19. January 2057
63.000.001	67.200.000	0,00122			5.127		        19. April 2059
67.200.001	71.400.000	0,00061			2.563		        19. July 2061
71.400.001	75.600.000	0,00031			1.282		        19. October 2063
75.600.001	79.800.000	0,00015			641		        19. January 2066
79.800.001	84.000.000	0,00008			320	       	        19. April 2068
84.000.001	88.200.000	0,00004			160		        19. July 2070
88.200.001	92.400.000	0,00002			80		        19. October 2072
			Total Coins=			335.999.920	



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
