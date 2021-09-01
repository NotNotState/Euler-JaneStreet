﻿using System;
using System.Collections;
using System.Numerics;
using System.IO;
using System.Collections.Generic;
using System.Linq;

namespace ProjectEuler.Net
{
    class Program
    {
        static void Main(string[] args)
        {
            
            find5thDigitPower();
        }
        static void find5thDigitPower()
        {
            int sum = 0;
            for (int i = 100; i<300000; i++)
            {
                if (is5thDigitPow(i))
                {
                    sum += i;
                }
            }
            Console.WriteLine(sum);
        }
        static bool is5thDigitPow(int num)
        {
            int sum = 0;
            int final = num;
            while(num!= 0)
            {
                sum += (int)Math.Pow((num %10), 5);
                num = num / 10;
            }
            if (sum == final)
                return true;
            else
            return false;
        }
    }
}


    


