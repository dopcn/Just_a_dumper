//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBCImageView, TBCPBNewsInfoItem, UIButton, UILabel;

@interface TBCPBGiftInfoView : UIView
{
    TBCPBNewsInfoItem *_item;
    TBCImageView *_iconImage;
    UILabel *_summaryLabel;
    UIButton *_getButton;
    UILabel *_subTitle;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UIButton *getButton; // @synthesize getButton=_getButton;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) TBCImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) TBCPBNewsInfoItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)buttonClick;
- (void)resetSkin;
- (void)bindData:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

