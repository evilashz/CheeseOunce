# CheeseOunce
![image](https://github.com/evilashz/CheeseOunce/assets/50722929/d73aeaf6-1918-437c-ab56-ca1642b05184)

## Notice:
The MS-EVEN runing under the `NT AUTHORITY\LOCAL SERVICE` account, and **this account can't provide valid credentials during network authentication**
so, in the NTLMRelay attacking, it can't work, like this (Sorry,I didn't test it fully, before push it):
![image](https://github.com/evilashz/CheeseOunce/assets/50722929/11ebf47a-e93b-4b50-b3fc-5cc9405d657f)


![snow](https://images-1258433570.cos.ap-beijing.myqcloud.com/imagesimage-20220906201735833.png)



This Simple POC make windows machines auth to another via MS-EVEN.

Use `ElfrOpenBELW` could make us did it.

![image-20220906202316168](https://images-1258433570.cos.ap-beijing.myqcloud.com/imagesimage-20220906202316168.png)

Besides the C-based POC, an impacket-based python version is also available as `cheese.py`.

#### reference

https://github.com/topotam/PetitPotam

https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-even/4db1601c-7bc2-4d5c-8375-c58a6f8fc7e1
