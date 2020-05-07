using System;

namespace ConsoleApp2
{
    class Program
    {
        public int[1][2] num;       //1.组号 2.组内数据
        public int[1] result;       //得到的运算结果
        public int[1] Tresult;      //正确结果
        static void Main(string[] args)
        {

        int right=0;                //正确数
        int Length = (result.Length-1); //组数
        for(int i=0;i<Length;i++){
        if(result==Tresult){
        right++;}}                  //计算正确数
        if(right==Length)           //判断是否全对
        { Console.WriteLine("You Pass");}
        else{ Console.WriteLine("Error,Right=%d,Totle=%d", right, Length);}
        }                           //错误显示正确数，总组数
    }
}
