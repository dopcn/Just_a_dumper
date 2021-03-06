//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface ATFlowerAnimateView : UIView
{
    UIView *_bgView;
    UIImageView *_bgImageView;
    UIImageView *_animateImageView;
}

@property(retain, nonatomic) UIImageView *animateImageView; // @synthesize animateImageView=_animateImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)dismissToFrame:(struct CGRect)arg1 complete:(CDUnknownBlockType)arg2;
- (void)startAnimate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initViews;

@end

