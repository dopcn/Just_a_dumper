//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CTMyCtripMoudleRemind, UIButton, UILabel;

@interface CTMyCtripNaquhuaCardCell : UITableViewCell
{
    UIButton *_titleBtn;
    UIButton *_moreBtn;
    UILabel *_recentRefundNum;
    UILabel *_recentRefundTip;
    UILabel *_allRefundNum;
    UILabel *_allRefundTip;
    UIButton *_toPayFund;
    CTMyCtripMoudleRemind *_remindInfo;
    UIButton *_closeBtn;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) CTMyCtripMoudleRemind *remindInfo; // @synthesize remindInfo=_remindInfo;
- (void).cxx_destruct;
- (void)clickToPayFund;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

