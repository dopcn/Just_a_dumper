//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQScreenSaverAnimationView.h"

@class NSMutableArray;

@interface MQQScreenSaverWheelView : MQQScreenSaverAnimationView
{
    NSMutableArray *_wheelFragmentArray;
    long long _wheelState;
}

- (void)stopAnimation;
- (void)startAnimation;
- (void)setBatteryLevel:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

