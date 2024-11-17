package com.example;

import java.io.*;

public class MyStack
{
    private static final int STACK_CAP = 3;
    private int[] myArray;
    private int myTop;

    public MyStack()
    {
        myArray = new int [STACK_CAP];
        myTop = -1;
    }

    public boolean full()
    {
        return myTop == STACK_CAP - 1;
    }

    public void push(int value)
    {
        if (!full())
        {
            myTop++;
            myArray[myTop] = value;
        }
    }

    public boolean empty()
    {
        return myTop == -1;
    }

    public void pop()
    {
        myTop--;
    }

    public int top()
    {
        return myArray[myTop];
    }

    public String toString()
    {
        String myString = "";

        for(int i=myTop; i> -1; i--)
        {
            myString += myArray[i] + "  ";
        }

        return myString;
    }
}
