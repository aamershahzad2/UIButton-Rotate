//
//  UIButton+Rotate.h
//
//  Created by Aamer Khalid on 27/03/2015.
//  Copyright (c) 2015 Addil Arif. All rights reserved.
//

#import <Foundation/Foundation.h>


#define SPIN_CLOCK_WISE 1
#define SPIN_COUNTERCLOCK_WISE -1


@interface UIButton (ButtonRotate)
- (void)spinButtonWithTime:(CFTimeInterval)inDuration direction:(int)direction;

- (void)spinInfinityButtonWithTime:(CFTimeInterval)inDuration direction:(int)direction;
- (void)stopSpinInfinityButton;
@end
