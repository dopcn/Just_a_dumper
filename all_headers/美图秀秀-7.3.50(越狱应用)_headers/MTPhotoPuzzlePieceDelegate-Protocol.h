//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTFramesPhotoPieceView, UIGestureRecognizer;

@protocol MTPhotoPuzzlePieceDelegate <NSObject>
- (_Bool)gestureMovedOut:(UIGestureRecognizer *)arg1 fromView:(MTFramesPhotoPieceView *)arg2;

@optional
- (void)gestureTapedPhotoPuzzlePieceView:(MTFramesPhotoPieceView *)arg1 point:(struct CGPoint)arg2;
- (void)gestureDidPressPhotoPuzzlePieceView:(MTFramesPhotoPieceView *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)gesture:(UIGestureRecognizer *)arg1 didTouchesPuzzlePieceView:(MTFramesPhotoPieceView *)arg2;
@end

