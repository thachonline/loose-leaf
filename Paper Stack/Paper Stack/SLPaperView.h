//
//  SLPaperView.h
//  Paper Stack
//
//  Created by Adam Wulf on 6/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constants.h"
#import "SLPaperViewDelegate.h"
#import "SLPanAndPinchGestureRecognizer.h"

@interface SLPaperView : UIView{
    
    NSString* uuid;
    
    NSObject<SLPaperViewDelegate>* delegate;
    
    // properties for pinch gesture
    CGFloat preGestureScale;
    CGPoint normalizedLocationOfScale;
    
    // properties for pan gesture
    CGPoint firstLocationOfPanGestureInSuperView;
    CGRect frameOfPageAtBeginningOfGesture;
    NSInteger lastNumberOfTouchesForPanGesture;

    BOOL isBeingPannedAndZoomed;
    
    UILabel* textLabel;
    
    SLPanAndPinchGestureRecognizer* panGesture;
    
    BOOL isBrandNewPage;
    
    
    NSInteger shadowSeed;
    UIBezierPath* unitShadowPath;
}

@property (nonatomic, readonly) NSString* uuid;
@property (nonatomic, readonly) UIBezierPath* unitShadowPath;
@property (nonatomic, assign) NSObject<SLPaperViewDelegate>* delegate;
@property (nonatomic, assign) CGFloat scale;
@property (nonatomic, readonly) BOOL isBeingPannedAndZoomed;
// this will only be true if the bezel gesture is triggered and the page is actively being panned
@property (nonatomic, readonly) NSInteger numberOfTimesExitedBezel;
@property (nonatomic, readonly) UILabel* textLabel;
@property (nonatomic, assign) BOOL isBrandNewPage;

-(void) cancelAllGestures;
-(void) disableAllGestures;
-(void) enableAllGestures;

@end
