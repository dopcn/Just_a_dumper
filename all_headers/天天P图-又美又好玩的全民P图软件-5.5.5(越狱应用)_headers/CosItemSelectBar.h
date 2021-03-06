//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ScrollSelectBar.h"

@class CustomButton, NSObject, TipsWordingImageView, UIView;
@protocol CosItemSelectBarDelegate;

@interface CosItemSelectBar : ScrollSelectBar
{
    int _style;
    CustomButton *_btnGear;
    UIView *_line;
    TipsWordingImageView *_tipsImageView;
}

@property(retain, nonatomic) TipsWordingImageView *tipsImageView; // @synthesize tipsImageView=_tipsImageView;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) CustomButton *btnGear; // @synthesize btnGear=_btnGear;
@property(nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (long long)translateIndex:(long long)arg1;
- (void)handleGearEvent:(id)arg1;
- (void)setupGear:(id)arg1;
- (id)createCollectionViewWithStyle:(int)arg1;
- (void)updateGearWithInfo:(id)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak NSObject<CosItemSelectBarDelegate> *delegate; // @dynamic delegate;

@end

