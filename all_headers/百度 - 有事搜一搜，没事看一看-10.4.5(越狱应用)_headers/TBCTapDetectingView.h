//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol TapDetectingViewDelegate;

@interface TBCTapDetectingView : UIView
{
    id <TapDetectingViewDelegate> _tapDelegate;
}

@property(nonatomic) id <TapDetectingViewDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void)handleTripleTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

