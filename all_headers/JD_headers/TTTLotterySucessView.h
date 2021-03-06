//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

@class UIImageView, UILabel;

@interface TTTLotterySucessView : TTTBaseView
{
    UIImageView *_contentView;
    UIImageView *_lotteryImageView;
    UILabel *_lotteryAlertLabel;
    UILabel *_lotteryPrizeLabel;
}

+ (id)showData:(id)arg1;
@property(retain, nonatomic) UILabel *lotteryPrizeLabel; // @synthesize lotteryPrizeLabel=_lotteryPrizeLabel;
@property(retain, nonatomic) UILabel *lotteryAlertLabel; // @synthesize lotteryAlertLabel=_lotteryAlertLabel;
@property(retain, nonatomic) UIImageView *lotteryImageView; // @synthesize lotteryImageView=_lotteryImageView;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)tapBack:(id)arg1;
- (void)p_removeSelf;
- (id)rotateImage:(long long)arg1;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

