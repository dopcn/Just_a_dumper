//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface FALCBlankView : UIView
{
    _Bool _isAutoFit;
    UIImageView *_imgView;
    UILabel *_promptLabel;
    UIView *_contentView;
}

@property(nonatomic) _Bool isAutoFit; // @synthesize isAutoFit=_isAutoFit;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (void)setPromptMessage:(id)arg1;
- (void)adjustContentFrame;
- (void)willMoveToSuperview:(id)arg1;
- (id)initAutoFitWithImage:(id)arg1 text:(id)arg2;
- (id)initWithImage:(id)arg1 discription:(id)arg2;
- (void)updateFrameImageSize:(struct CGSize)arg1 verticalSpace:(float)arg2;
- (id)initWithFrame:(struct CGRect)arg1 imageNameStr:(id)arg2 discription:(id)arg3;

@end

