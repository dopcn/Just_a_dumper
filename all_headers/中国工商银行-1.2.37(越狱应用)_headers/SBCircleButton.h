//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSTimer, UIImage;

@interface SBCircleButton : UIButton
{
    int _animatedRadius;
    NSTimer *_timer_roation;
    _Bool _animating;
    UIImage *_btnImage;
}

@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIImage *btnImage; // @synthesize btnImage=_btnImage;
- (void).cxx_destruct;
- (void)stopAnimateWaitUntilOriginPosition;
- (void)stopAnimate;
- (void)startAnimate;
- (void)doAnimate;
- (id)init;

@end

