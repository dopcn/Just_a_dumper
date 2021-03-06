//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTFlightCommonUpPushSubView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, UITableView;
@protocol CTFlightPassengerRelateListViewDelegate;

@interface CTFlightPassengerRelateListView : CTFlightCommonUpPushSubView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _interNationaled;
    int _collectAction;
    NSString *_firstDepartDate;
    NSString *_lastDepartDate;
    id <CTFlightPassengerRelateListViewDelegate> _delegate;
    UILabel *_titleLabel;
    UITableView *_tableView;
    NSMutableArray *_passengerList;
}

@property(retain, nonatomic) NSMutableArray *passengerList; // @synthesize passengerList=_passengerList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool interNationaled; // @synthesize interNationaled=_interNationaled;
@property(nonatomic) __weak id <CTFlightPassengerRelateListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int collectAction; // @synthesize collectAction=_collectAction;
@property(copy, nonatomic) NSString *lastDepartDate; // @synthesize lastDepartDate=_lastDepartDate;
@property(copy, nonatomic) NSString *firstDepartDate; // @synthesize firstDepartDate=_firstDepartDate;
- (void).cxx_destruct;
- (void)handleRelateWithNode:(id)arg1;
- (void)handleEditNodeWithIndex:(long long)arg1;
- (void)hanldeAddCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)calRowHeight:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupcollectAction:(int)arg1 firstDepartDate:(id)arg2 lastDepartDate:(id)arg3 interNationaled:(_Bool)arg4;
- (void)awakeFromNib;
- (double)contentHeight;
- (void)sortArrayNode:(_Bool)arg1;
- (void)resetCustomCertificates;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

