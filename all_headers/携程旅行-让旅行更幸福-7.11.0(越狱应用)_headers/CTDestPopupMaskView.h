//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CTDestPopupMaskView : UIView
{
    _Bool isDismissed;
    _Bool _tapToDismiss;
    double _animationDuration;
    CDUnknownBlockType _dismission;
}

@property(copy, nonatomic) CDUnknownBlockType dismission; // @synthesize dismission=_dismission;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool tapToDismiss; // @synthesize tapToDismiss=_tapToDismiss;
- (void).cxx_destruct;
- (void)doDismiss;
- (void)showInView:(id)arg1 maskColor:(id)arg2 completion:(CDUnknownBlockType)arg3 dismission:(CDUnknownBlockType)arg4;
- (_Bool)shouldTapToDismissWithTouchPosition:(struct CGPoint)arg1;
- (void)maskDidDisappear;
- (void)maskDoDisappear;
- (void)maskWillDisappear;
- (void)maskDidAppear;
- (void)maskDoAppear;
- (void)maskWillAppear;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

