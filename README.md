# stem-and-branches
write a stem and branches game using c++

Stems-and-Branches, a.k.a. sexagenary cycle, is a cycle of sixty terms used for indicating dates, years,
etc. in ancient China. Each term in the cycle consists of two Chinese characters: the first is called a
Heavenly Stem (天干; Cantonese romanization tin1-gon1) and the second is called an Earthly Branch
(地支; Cantonese romanization dei6-ji1). Heavenly Stem can have 10 possibilities, while Earthly Branch
can have 12 possibilities. Tables 1 and 2 show the characters for the 10 stems and 12 branches
respectively.

Converting from Western Years to Cyclic Years
Given a Western year 𝑌, its stem number 𝑝! and branch number 𝑞! can be computed as follows:
𝑝! = (𝑌 − 3) mod 10 (However, if 𝑝! = 0, then set 𝑝! = 10 instead.)
𝑞! = (𝑌 − 3) mod 12 (However, if 𝑞! = 0, then set 𝑞! = 12 instead.)
Example: year 2013
𝑝! = (2013 − 3) mod 10 = 2010 mod 10 = 0. As 𝑝! = 0, we set 𝑝! = 10 instead.
𝑞! = (2013 − 3) mod 12 = 2010 mod 12 = 6.
Thus, year 2013 is S10-B6 (癸巳).

Converting from Western Dates to Cyclic Dates
Given a Western date 𝐷/𝑀/𝑌, its stem number 𝑝" and branch number 𝑞" can be computed as follows:
𝑡 =  𝑌 − 1, 𝑀 ≤ 2 or
     𝑌, 𝑀 > 2
     
𝑟 = 𝑀 + 12, 𝑀 ≤ 2 or
    𝑀, 𝑀 > 2
    
𝐶 = |𝑡/100|

𝑎 = 𝑡 mod 100

𝑔 = 4𝐶 + |𝐶/4| + 5𝑎 + |a/4| + |[3(r+1)]/5| + D - 3

𝑖 = 6, 𝑟 is odd or
    0, 𝑟 is even
    
𝑧 = 8𝐶 + |𝐶/4| + 5𝑎 + |𝑎/4| + |[3(r+1)]/5| + D + 1 + 𝑖

𝑝" = 𝑔 mod 10 (However, if 𝑝" = 0, then set 𝑝" = 10 instead.)
𝑞" = 𝑧 mod 12 (However, if 𝑞" = 0, then set 𝑞" = 12 instead.)

Example: date 7/9/2022
𝑡 = 2022
𝑟 = 9
𝐶 = |2022/100| = 20
𝑎 = 2022 mod 100 = 22
𝑔 = 4 × 20 + |20/4| + 5 × 22 + |22/4| + [3 × (9 + 1)]/5 + 7 − 3 = 210
𝑖 = 6
𝑧 = 8 × 20 + |20/4| + 5 × 22 + |22/4| + [3 × (9 + 1)]/5 + 7 + 1 + 6 = 300
𝑝" = 210 mod 10 = 0 As 𝑝" = 0, we set 𝑝" = 10 instead.
𝑞" = 300 mod 12 = 0 As 𝑞" = 0, we set 𝑞" = 12 instead.
Thus, 7/9/2022 is a S10-B12 day (癸亥).

Program Specification
The program shall obtain three integers as user input, which represents a date. You do not have to
validate the inputs. (That is, we assume that all inputs are always valid dates.) Then you apply the
above method to compute the cyclic year and cyclic dates of the input, and print the result.
