
/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(int candles_count, int* candles) 
{
    int Local_intLoopCounter;
    int Local_intCandleCounter = 0;
    int Local_intMax = candles[0];
    
    for(Local_intLoopCounter=0; Local_intLoopCounter<candles_count; Local_intLoopCounter++)
    {   
        if(candles[Local_intLoopCounter] > Local_intMax) 
        { 
            Local_intMax = candles[Local_intLoopCounter]; 
        }
        
    }
    
    for(Local_intLoopCounter=0; Local_intLoopCounter<candles_count; Local_intLoopCounter++)
    {   
        if(candles[Local_intLoopCounter] == Local_intMax) 
        { 
            Local_intCandleCounter++; 
        }
        
    }
    
    return Local_intCandleCounter;
}