//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KTVSimpleTableFooterView, KTVTableView, NSMutableArray, NSString;
@protocol KTVWishCardRecordedSongDelegate;

@interface KTVWishCardUserWorkProvider : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isLoading;
    _Bool _hasMore;
    long long _pageNum;
    long long _topId;
    KTVSimpleTableFooterView *_footerView;
    KTVTableView *_tableView;
    NSMutableArray *_results;
    NSMutableArray *_heightCache;
    id <KTVWishCardRecordedSongDelegate> _delegate;
}

@property(nonatomic) id <KTVWishCardRecordedSongDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *heightCache; // @synthesize heightCache=_heightCache;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(retain, nonatomic) KTVTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) KTVSimpleTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) long long topId; // @synthesize topId=_topId;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)loadUserWorks;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadTableView;
- (id)initWithTableView:(id)arg1 withDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

