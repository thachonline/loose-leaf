//
//  MMSidebarImagePicker.h
//  LooseLeaf
//
//  Created by Adam Wulf on 3/27/14.
//  Copyright (c) 2014 Milestone Made, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMSidebarButton.h"

@class MMFullScreenSidebarContainingView;

@interface MMSlidingSidebarView : UIView{
    __weak MMFullScreenSidebarContainingView* delegate;
}

@property (nonatomic, weak) MMFullScreenSidebarContainingView* delegate;

- (id)initWithFrame:(CGRect)frame forButton:(MMSidebarButton*)_button animateFromLeft:(BOOL)fromLeft;

-(CGRect) contentBounds;

-(BOOL) isVisible;

-(void) willShow;

-(void) showForDuration:(CGFloat)duration;

-(void) hideAnimation;

-(void) didHide;

@end
