//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MCMarqueeLabel, UIImageView, UIView;

@interface UIViewController (titleColor)
+ (void)load;
- (void)dealloc_titleColor;
- (void)shrinkNavigationTitle;
- (void)shrinkNavigationTitleIfNeeded;
- (void)dynamicChangeNavigationTitle:(id)arg1 defaultTitle:(id)arg2 scrollOffsetY:(double)arg3 conditionOffsetY:(double)arg4;
- (struct CGRect)marqueeLabelLayoutRect;
- (void)_layoutNavigationFrame;
- (void)addNavigationImage:(id)arg1;
- (void)setNavigationTitle:(id)arg1;
- (id)string:(id)arg1 byTruncatingToWidth:(double)arg2 withFont:(id)arg3;
@property(retain, nonatomic) UIView *seperateView;
@property(retain, nonatomic) UIImageView *iconView;
@property(retain, nonatomic) MCMarqueeLabel *marqueeLabel;
@end

