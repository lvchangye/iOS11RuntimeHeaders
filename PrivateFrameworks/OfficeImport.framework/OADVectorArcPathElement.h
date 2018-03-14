/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADVectorArcPathElement : OADPathElement {
    struct OADAdjustCoord { 
        bool isFormulaResult; 
        int value; 
    }  mBottom;
    bool  mClockwise;
    bool  mConnectedToPrevious;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } y; 
    }  mEndVector;
    struct OADAdjustCoord { 
        bool isFormulaResult; 
        int value; 
    }  mLeft;
    struct OADAdjustCoord { 
        bool isFormulaResult; 
        int value; 
    }  mRight;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            bool isFormulaResult; 
            int value; 
        } y; 
    }  mStartVector;
    struct OADAdjustCoord { 
        bool isFormulaResult; 
        int value; 
    }  mTop;
}

- (struct OADAdjustCoord { bool x1; int x2; })bottom;
- (bool)clockwise;
- (bool)connectedToPrevious;
- (struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })endVector;
- (id)initWithLeft:(struct OADAdjustCoord { bool x1; int x2; })arg1 top:(struct OADAdjustCoord { bool x1; int x2; })arg2 right:(struct OADAdjustCoord { bool x1; int x2; })arg3 bottom:(struct OADAdjustCoord { bool x1; int x2; })arg4 startVector:(struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })arg5 endVector:(struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })arg6 clockwise:(bool)arg7 connectedToPrevious:(bool)arg8;
- (struct OADAdjustCoord { bool x1; int x2; })left;
- (struct OADAdjustCoord { bool x1; int x2; })right;
- (struct OADAdjustPoint { struct OADAdjustCoord { bool x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { bool x_2_1_1; int x_2_1_2; } x2; })startVector;
- (struct OADAdjustCoord { bool x1; int x2; })top;

@end