package com.example;

import java.io.*;

public class TestStack
{
    public static void main(String[] args)
    {
        MyStack myStack = new MyStack();
        myStack.push(3);
        myStack.push(5);
        myStack.push(7);

        while (!myStack.empty())
        {
            System.out.println(myStack);
            myStack.pop();
        }
    }
}