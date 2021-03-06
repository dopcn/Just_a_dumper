//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ListViewDelegate-Protocol.h"
#import "MyEventLoadingViewDelegate-Protocol.h"

@class DataItemDetail, ListView, MyEventLoadingView, NSString;

@interface CompanyDetailView : UIView <ListViewDelegate, MyEventLoadingViewDelegate>
{
    NSString *_companyid;
    NSString *_groupid;
    NSString *_groupname;
    NSString *_joblatitude;
    NSString *_joblongitude;
    _Bool _needShowGroup;
    _Bool _needShowAllJobs;
    ListView *_listViewComapnyDetail;
    DataItemDetail *_companyDetailInfo;
    _Bool _needShowExpecialChannel;
    NSString *_comlatitude;
    NSString *_comlongitude;
    MyEventLoadingView *_loadingTips;
    long long _shieldCompanyStatus;
}

+ (id)customPartViewWithDetail:(id)arg1 frame:(struct CGRect)arg2;
@property(nonatomic) long long shieldCompanyStatus; // @synthesize shieldCompanyStatus=_shieldCompanyStatus;
@property(retain, nonatomic) MyEventLoadingView *loadingTips; // @synthesize loadingTips=_loadingTips;
@property(nonatomic) _Bool needShowExpecialChannel; // @synthesize needShowExpecialChannel=_needShowExpecialChannel;
@property(nonatomic) _Bool needShowAllJobs; // @synthesize needShowAllJobs=_needShowAllJobs;
@property(nonatomic) _Bool needShowGroup; // @synthesize needShowGroup=_needShowGroup;
@property(copy, nonatomic) NSString *comlongitude; // @synthesize comlongitude=_comlongitude;
@property(copy, nonatomic) NSString *comlatitude; // @synthesize comlatitude=_comlatitude;
@property(retain, nonatomic) DataItemDetail *companyDetailInfo; // @synthesize companyDetailInfo=_companyDetailInfo;
@property(copy, nonatomic) NSString *groupname; // @synthesize groupname=_groupname;
@property(copy, nonatomic) NSString *groupid; // @synthesize groupid=_groupid;
@property(copy, nonatomic) NSString *companyid; // @synthesize companyid=_companyid;
@property(readonly, retain, nonatomic) ListView *listViewComapnyDetail; // @synthesize listViewComapnyDetail=_listViewComapnyDetail;
- (void).cxx_destruct;
- (void)reloadByEventLoadingView:(id)arg1;
- (void)listView:(id)arg1 selectedIndexPath:(id)arg2;
- (void)listData:(id)arg1 result:(id)arg2;
- (void)addCompanyAllJobsRow:(id)arg1 title:(id)arg2 tag:(int)arg3;
- (void)listViewData:(id)arg1 onReceived:(id)arg2;
- (id)dataCacheForSection:(id)arg1;
- (id)listViewData:(id)arg1;
- (_Bool)isExpecialCompany;
- (void)requestShieldCoStatus;
- (void)createClearRow:(id)arg1;
- (void)loadListData;
- (void)initListView;
- (void)customView;
- (void)dealloc;
- (id)initWithCompanyID:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

