//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SWWeiboDetailViewController.h"

#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "SWRCTableDataSourceDelegate-Protocol.h"

@class EGORefreshTableHeaderView, NSDate, NSString, SWRCDetailTableDataSource;
@protocol SWRecourceCenterObject;

@interface SWRCDetailViewController : SWWeiboDetailViewController <SWRCTableDataSourceDelegate, EGORefreshTableHeaderDelegate>
{
    _Bool _loading;
    id <SWRecourceCenterObject> _object;
    long long _depthInStack;
    EGORefreshTableHeaderView *_refreshHeader;
    NSDate *_updateDate;
}

@property(retain, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeader; // @synthesize refreshHeader=_refreshHeader;
@property(nonatomic) long long depthInStack; // @synthesize depthInStack=_depthInStack;
@property(retain, nonatomic) id <SWRecourceCenterObject> object; // @synthesize object=_object;
- (void).cxx_destruct;
- (_Bool)networkConnected;
- (_Bool)egoRefreshTableHeaderDataSourceCanRefresh:(id)arg1;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadData;
- (void)onTapLike:(id)arg1;
- (void)onTapFollow:(id)arg1;
- (void)onTapDownload:(id)arg1;
- (void)onTapListen:(id)arg1;
- (void)onTapRecommend:(id)arg1;
- (void)dataSource:(id)arg1 didTapRecommendObject:(id)arg2;
- (void)requestCompletedWithType:(int)arg1 isSucess:(_Bool)arg2 data:(id)arg3 identifier:(id)arg4;
- (void)destroyModel;
- (void)createModel;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(retain, nonatomic) SWRCDetailTableDataSource *dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

