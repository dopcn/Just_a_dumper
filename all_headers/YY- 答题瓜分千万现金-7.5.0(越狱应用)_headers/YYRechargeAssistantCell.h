//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface YYRechargeAssistantCell : UITableViewCell
{
    UILabel *_labDate;
    UILabel *_labRechargeState;
    UILabel *_labDetailDate;
    UILabel *_labPayChannel;
    UILabel *_labRechargeMoney;
    UILabel *_labRechargeDetailState;
    UILabel *_labRechargeStateTips;
}

+ (double)height;
+ (id)nib;
+ (id)identifier;
+ (id)new;
@property(nonatomic) __weak UILabel *labRechargeStateTips; // @synthesize labRechargeStateTips=_labRechargeStateTips;
@property(nonatomic) __weak UILabel *labRechargeDetailState; // @synthesize labRechargeDetailState=_labRechargeDetailState;
@property(nonatomic) __weak UILabel *labRechargeMoney; // @synthesize labRechargeMoney=_labRechargeMoney;
@property(nonatomic) __weak UILabel *labPayChannel; // @synthesize labPayChannel=_labPayChannel;
@property(nonatomic) __weak UILabel *labDetailDate; // @synthesize labDetailDate=_labDetailDate;
@property(nonatomic) __weak UILabel *labRechargeState; // @synthesize labRechargeState=_labRechargeState;
@property(nonatomic) __weak UILabel *labDate; // @synthesize labDate=_labDate;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

