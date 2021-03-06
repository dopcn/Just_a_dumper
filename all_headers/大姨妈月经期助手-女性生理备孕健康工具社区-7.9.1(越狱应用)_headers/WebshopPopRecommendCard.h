//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebshopBaseCard.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, UITableView, UIView;

@interface WebshopPopRecommendCard : WebshopBaseCard <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isNeedExposure;
    UIView *_contentMainView;
    UITableView *_tableView;
    NSArray *_datasource;
    UILabel *_titleLabel;
    UIButton *_moreButton;
    NSString *_link;
}

@property(nonatomic) _Bool isNeedExposure; // @synthesize isNeedExposure=_isNeedExposure;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *contentMainView; // @synthesize contentMainView=_contentMainView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)addToShoppingCart:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)exposureDatas;
- (void)update;
- (id)viewOfModule;
- (double)heightOfModuleViewWithWidth:(double)arg1;
- (void)goodsInfoChanged:(id)arg1;
- (void)dealloc;
- (void)viewMore:(id)arg1;
- (void)initViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

