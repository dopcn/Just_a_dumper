//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class OrderCopyLabel, PickSiteDetailInfoModel, UIButton, UILabel;

@interface OrderInfoPickSitePopView : UIView
{
    UILabel *_addTitleLabel;
    OrderCopyLabel *_addLabel;
    UILabel *_telTitleLabel;
    UILabel *_telLabel;
    UILabel *_timeTitleLabel;
    UILabel *_timeLabel;
    UIButton *_telePhoneBtn;
    UIButton *_callBtn;
    PickSiteDetailInfoModel *_detailModel;
}

@property(retain, nonatomic) PickSiteDetailInfoModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)surePhoneBtnTap:(id)arg1;
- (void)telPhoneBtnTap:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

