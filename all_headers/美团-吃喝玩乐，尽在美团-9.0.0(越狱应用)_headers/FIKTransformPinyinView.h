//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FIKPinYinConvertResp, NSArray, NSString, RACCommand, UIButton, UILabel, UITableView;

@interface FIKTransformPinyinView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isSelectLastName;
    _Bool _showPinyinList;
    FIKPinYinConvertResp *_pinYinConvertResp;
    RACCommand *_lastNameCommand;
    RACCommand *_firstNameCommand;
    RACCommand *_endCommand;
    UIView *_contentView;
    UITableView *_selectTableView;
    UILabel *_titleLabel;
    UIButton *_writeButton;
    NSString *_titleName;
    NSArray *_results;
    NSArray *_lastNameArray;
    NSArray *_tableViewData;
}

@property(retain, nonatomic) NSArray *tableViewData; // @synthesize tableViewData=_tableViewData;
@property(retain, nonatomic) NSArray *lastNameArray; // @synthesize lastNameArray=_lastNameArray;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(nonatomic) _Bool showPinyinList; // @synthesize showPinyinList=_showPinyinList;
@property(nonatomic) _Bool isSelectLastName; // @synthesize isSelectLastName=_isSelectLastName;
@property(retain, nonatomic) UIButton *writeButton; // @synthesize writeButton=_writeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITableView *selectTableView; // @synthesize selectTableView=_selectTableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) RACCommand *endCommand; // @synthesize endCommand=_endCommand;
@property(retain, nonatomic) RACCommand *firstNameCommand; // @synthesize firstNameCommand=_firstNameCommand;
@property(retain, nonatomic) RACCommand *lastNameCommand; // @synthesize lastNameCommand=_lastNameCommand;
@property(retain, nonatomic) FIKPinYinConvertResp *pinYinConvertResp; // @synthesize pinYinConvertResp=_pinYinConvertResp;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)cellHeight;
- (void)updateTitle;
- (void)updateUI;
- (void)bindData;
- (void)setupUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

