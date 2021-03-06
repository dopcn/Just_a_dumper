//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer, UIPinchGestureRecognizer;

@protocol QYGestureHandleViewDelegate <NSObject>
- (_Bool)shouldRespondMultipleGesture:(UIGestureRecognizer *)arg1;
- (_Bool)shouldReceiveTapGesture:(UIGestureRecognizer *)arg1;
- (void)doubleTapGesture:(UIGestureRecognizer *)arg1;
- (void)gestureCancelled:(UIGestureRecognizer *)arg1;
- (void)gestureEnded:(UIGestureRecognizer *)arg1;
- (void)gestureMoved:(UIGestureRecognizer *)arg1;
- (void)gestureBegan:(UIGestureRecognizer *)arg1;
- (void)handlePinchGesture:(UIPinchGestureRecognizer *)arg1;
@end

