//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, NSString, UILabel;

@interface CommuneRewardLogoView : UIView
{
    NSString *_rewardTip;
    JDImageView *_bestImageView;
    UILabel *_rewardLabel;
}

@property(retain, nonatomic) UILabel *rewardLabel; // @synthesize rewardLabel=_rewardLabel;
@property(retain, nonatomic) JDImageView *bestImageView; // @synthesize bestImageView=_bestImageView;
@property(copy, nonatomic) NSString *rewardTip; // @synthesize rewardTip=_rewardTip;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

