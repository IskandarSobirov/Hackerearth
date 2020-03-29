#include <bits/stdc++.h>
using namespace std; 
#define Tom 1 
#define Jerry 2 
  
struct move 
{ 
    int pile_index; 
    int stones_removed; 
}; 
  
void showPiles (deque<int> piles, int n)  
{ 
    int i; 
    printf ("Current Game Status -> "); 
    for (i=0; i<n; i++) 
        printf ("%d ", piles[i]); 
    printf("\n"); 
    return; 
} 
  
// A C function that returns True if game has ended and 
// False if game is not yet over 
bool gameOver(deque<int> piles, int n) 
{ 
    int i; 
    for (i=0; i<n; i++) 
        if (piles[i]!=0) 
            return (false); 
  
    return (true); 
} 
  
// A C function to declare the winner of the game 
void declareWinner(int whoseTurn) 
{ 
    if (whoseTurn == Tom) 
        printf ("Tom\n"); 
    else
        printf("Jerry\n"); 
    return; 
} 
  
// A C function to calculate the Nim-Sum at any point 
// of the game. 
int calculateNimSum(deque<int> piles, int n) 
{ 
    int i, nimsum = piles[0]; 
    for (i=1; i<n; i++) 
        nimsum = nimsum ^ piles[i]; 
    return(nimsum); 
} 
  
// A C function to make moves of the Nim Game 
void makeMove(deque<int> piles, int n, struct move * moves) 
{ 
    int i, nim_sum = calculateNimSum(piles, n); 
  
    // The player having the current turn is on a winning 
    // position. So he/she/it play optimally and tries to make 
    // Nim-Sum as 0 
    if (nim_sum != 0) 
    { 
        for (i=0; i<n; i++) 
        { 
            // If this is not an illegal move 
            // then make this move. 
            if ((piles[i] ^ nim_sum) < piles[i]) 
            { 
                (*moves).pile_index = i; 
                (*moves).stones_removed = 
                                 piles[i]-(piles[i]^nim_sum); 
                piles[i] = (piles[i] ^ nim_sum); 
                break; 
            } 
        } 
    } 
  
  
    else
    { 
        // Create an array to hold indices of non-empty piles 
        int non_zero_indices[n], count; 
  
        for (i=0, count=0; i<n; i++) 
            if (piles[i] > 0) 
                non_zero_indices [count++] = i; 
  
        (*moves).pile_index = (rand() % (count)); 
        (*moves).stones_removed = 
                 1 + (rand() % (piles[(*moves).pile_index])); 
        piles[(*moves).pile_index] = 
         piles[(*moves).pile_index] - (*moves).stones_removed; 
  
        if (piles[(*moves).pile_index] < 0) 
            piles[(*moves).pile_index]=0; 
    } 
    return; 
} 
  
// A C function to play the Game of Nim 
void playGame(deque<int> piles, int n, int whoseTurn) 
{ 
    printf("\nGAME STARTS\n\n"); 
    struct move moves; 
  
    while (gameOver (piles, n) == false) 
    { 
        //showPiles(piles, n); 
  
        makeMove(piles, n, &moves); 
  
        if (whoseTurn == Tom) 
        { 
            //printf("COMPUTER removes %d stones from pile "
                  // "at index %d\n", moves.stones_removed, 
                   //moves.pile_index); 
            whoseTurn = Jerry; 
        } 
        else
        { 
            // printf("HUMAN removes %d stones from pile at "
            //        "index %d\n", moves.stones_removed, 
            //        moves.pile_index); 
            whoseTurn = Tom; 
        } 
    } 
  
    //showPiles(piles, n); 
    declareWinner(whoseTurn); 
    return; 
} 
  
void knowWinnerBeforePlaying(deque<int> piles, int n, 
                             int whoseTurn) 
{ 
   // printf("Prediction before playing the game -> "); 
  
    if (calculateNimSum(piles, n) !=0) 
    { 
        if (whoseTurn == Tom) 
            printf("Tom\n"); 
        else
            printf("Jerry\n"); 
    } 
    else
    { 
        if (whoseTurn == Tom) 
            printf("Tom\n"); 
        else
            printf("Jerry\n"); 
    } 
  
    return; 
} 
  
using namespace std;

int main() 
{
        
    deque<int>piles;

    int Q,K, num, l, r;
    string s;
    cin >> Q >>K;
    
    for(int i = 0; i < Q; i++)
    {
        cin >> s; 
     
            if( s == "AL"){
                cin >> num;
                piles.push_front(num);
            }else if(s == "AR"){
                cin >> num;
                piles.push_back(num);
            }else if(s == "UR"){
                cin >> l >> r >> num;
                for(int i=l; i< r; i++)
                    piles[i]+=num;
            }else if(s == "UP"){
                cin >> l >> num;
                piles[l] =num;
            }else if(s == "Q1"){
                cin >> l >> r;
                cout << 2 << endl;//change later
            }else if(s == "Q2"){
                cin >> l >> r;
                //deque<int>::iterator it = piles.begin()+l; 
                playGame(piles,piles.size(),Tom);    
            }
                
        }


  return 0;
}

