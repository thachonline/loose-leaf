//
//  MMStretchGestureRecognizer.h
//  ShapeShifter
//
//  Created by Adam Wulf on 2/21/14.
//  Copyright (c) 2014 Adam Wulf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIGestureRecognizerSubclass.h>
#import "Constants.h"


@interface MMStretchScrapGestureRecognizer : UIGestureRecognizer{
    // the collection of valid touches for this gesture
    NSMutableSet* ignoredTouches;
    NSMutableOrderedSet* possibleTouches;
    NSMutableOrderedSet* validTouches;
}

+ (CATransform3D)transformQuadrilateral:(Quadrilateral)origin toQuadrilateral:(Quadrilateral)destination;

-(Quadrilateral) getQuad;

@end
