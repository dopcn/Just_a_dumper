//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CCB_O_SJLQ12_Detail_Grp, UIImageView, UILabel;

@interface CCB_12_VC_DPTradeRecodeCell : UITableViewCell
{
    _Bool ifHasCharge;
    CCB_O_SJLQ12_Detail_Grp *_item;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_oriAmomentLabel;
    UILabel *_trueAmomentLabel;
    UIImageView *_separateLine;
}

@property(retain, nonatomic) UIImageView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *trueAmomentLabel; // @synthesize trueAmomentLabel=_trueAmomentLabel;
@property(retain, nonatomic) UILabel *oriAmomentLabel; // @synthesize oriAmomentLabel=_oriAmomentLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) CCB_O_SJLQ12_Detail_Grp *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

