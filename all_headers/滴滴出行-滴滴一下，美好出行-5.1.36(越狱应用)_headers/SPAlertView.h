//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel;

@interface SPAlertView : UIView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_bottomView;
    NSMutableArray *_actionBtns;
}

@property(retain, nonatomic) NSMutableArray *actionBtns; // @synthesize actionBtns=_actionBtns;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (double)contentHeight;
- (double)titleSizeHeight;
- (double)imageSize;
- (double)subtitleHeight;
- (void)dismiss;
- (void)dismissAnimation:(_Bool)arg1;
- (void)show;
- (void)addOtherButtonTitle:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;
- (void)addCancelButtonTitle:(id)arg1;
- (id)rootViewController;
- (id)initWithImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (id)sortActionBtns;
- (void)addAction:(id)arg1 actionColor:(id)arg2 dismissBlock:(CDUnknownBlockType)arg3;
- (void)addAction:(id)arg1 dismissBlock:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

