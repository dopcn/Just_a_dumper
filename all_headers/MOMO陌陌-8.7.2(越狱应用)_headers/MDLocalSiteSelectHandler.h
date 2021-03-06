//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MDLocalSiteSelectManagerDelegate-Protocol.h"
#import "TableHelperDelegate-Protocol.h"

@class MDLocalSiteModel, MDLocalSiteSelectManager, MDTableHelper, NSMutableArray, NSString, UITableView;
@protocol MDLocalSiteSelectHandlerDelegate, MDLocalSiteSelectResultProtocol;

@interface MDLocalSiteSelectHandler : NSObject <TableHelperDelegate, MDLocalSiteSelectManagerDelegate>
{
    NSMutableArray *_tableSource;
    id <MDLocalSiteSelectResultProtocol> _delegate;
    id <MDLocalSiteSelectHandlerDelegate> _mDelegate;
    MDTableHelper *_tableHelper;
    UITableView *_tableView;
    MDLocalSiteSelectManager *_manager;
    long long _index;
    MDLocalSiteModel *_mySiteModel;
}

@property(retain, nonatomic) MDLocalSiteModel *mySiteModel; // @synthesize mySiteModel=_mySiteModel;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) MDLocalSiteSelectManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MDTableHelper *tableHelper; // @synthesize tableHelper=_tableHelper;
@property(nonatomic) __weak id <MDLocalSiteSelectHandlerDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
@property(nonatomic) __weak id <MDLocalSiteSelectResultProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *tableSource; // @synthesize tableSource=_tableSource;
- (void).cxx_destruct;
- (id)cellReuseIdentiferAtIndexPath:(id)arg1;
- (double)cellHeightAtIndexPath:(id)arg1;
- (void)getSiteSelectListFailed;
- (void)getSiteSelectListSuccess:(id)arg1 mySite:(id)arg2 hasMore:(_Bool)arg3 isFirstPage:(_Bool)arg4;
- (void)loadMoreData;
- (void)loadFistPage;
- (void)reloadTableView;
- (void)addRefreshFooter;
- (void)refreshFooter:(_Bool)arg1;
- (CDUnknownBlockType)didSelectedCellBlock;
- (id)cellClassNameList;
- (void)dealloc;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

