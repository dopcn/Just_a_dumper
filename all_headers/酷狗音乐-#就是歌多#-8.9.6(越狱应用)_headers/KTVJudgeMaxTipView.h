//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface KTVJudgeMaxTipView : UIView
{
    _Bool _isShow;
    UIView *_contentView;
    UIImageView *_contentBgView;
}

@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) UIImageView *contentBgView; // @synthesize contentBgView=_contentBgView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showWithDuration:(double)arg1;
- (void)show;
- (void)setupContentViewWithFrame:(struct CGRect)arg1;
- (id)initContentViewWithFrame:(struct CGRect)arg1;

@end

