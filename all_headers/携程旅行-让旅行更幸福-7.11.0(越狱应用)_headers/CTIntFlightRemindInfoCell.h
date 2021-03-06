//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "CTFlightTouchLabelDelegate-Protocol.h"

@class CTDashLineView, CTFlightRadioView, NSArray, NSIndexPath, NSString, UIButton, UILabel;
@protocol CTIntFlightRemindInfoCellDelegate;

@interface CTIntFlightRemindInfoCell : UITableViewCell <CTFlightTouchLabelDelegate>
{
    _Bool _isOpen;
    id <CTIntFlightRemindInfoCellDelegate> _isShowDelegate;
    NSIndexPath *_myIndexPath;
    CTDashLineView *_lineView;
    UIButton *_remindButton;
    UILabel *_remindLabel;
    long long _lineNum;
    CTFlightRadioView *_radioView;
    NSArray *_contentArray;
}

+ (double)heightForRemindCell:(id)arg1 mutiPUInfo:(id)arg2 isShowRemindInfo:(_Bool)arg3;
+ (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(retain, nonatomic) NSArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) CTFlightRadioView *radioView; // @synthesize radioView=_radioView;
@property(nonatomic) long long lineNum; // @synthesize lineNum=_lineNum;
@property(retain, nonatomic) UILabel *remindLabel; // @synthesize remindLabel=_remindLabel;
@property(retain, nonatomic) UIButton *remindButton; // @synthesize remindButton=_remindButton;
@property(retain, nonatomic) CTDashLineView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) NSIndexPath *myIndexPath; // @synthesize myIndexPath=_myIndexPath;
@property(nonatomic) __weak id <CTIntFlightRemindInfoCellDelegate> isShowDelegate; // @synthesize isShowDelegate=_isShowDelegate;
- (void).cxx_destruct;
- (void)touchLabelForKey:(id)arg1;
- (void)setButtonStyle;
- (void)setButtomStyle;
- (id)formatAttrText:(id)arg1;
- (void)clickRemindButton:(id)arg1;
- (void)getimportInfo:(id)arg1;
- (void)setupCellWithInfo:(id)arg1 mutiPUInfo:(id)arg2 isOpen:(_Bool)arg3;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

