//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface BDUpdateToastView : UIView
{
    _Bool _isShow;
    UIView *_bgView;
    CDUnknownBlockType _showBlock;
    CDUnknownBlockType _hiddenBlock;
    UILabel *_textLable;
}

@property(retain, nonatomic) UILabel *textLable; // @synthesize textLable=_textLable;
@property(copy, nonatomic) CDUnknownBlockType hiddenBlock; // @synthesize hiddenBlock=_hiddenBlock;
@property(copy, nonatomic) CDUnknownBlockType showBlock; // @synthesize showBlock=_showBlock;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(readonly, nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)showToastWithBGAnimate;
- (void)hiddenToast;
- (void)showToast;
- (void)hiddenUpdateToast;
- (void)showUpdateToast:(id)arg1;
- (void)setIsShow:(_Bool)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

