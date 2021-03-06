//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSString, QNCommentCellFactory, QNMyRecommendManager, QNUserItem;
@protocol QNCommentCellActionDelegate;

@interface QNGuestDataSource : NSObject <UITableViewDataSource>
{
    _Bool _isRecommendRequesting;
    QNUserItem *_guestInfo;
    id <QNCommentCellActionDelegate> _commentCellDelegate;
    QNMyRecommendManager *_myRecommendManager;
    CDUnknownBlockType _recommendRequestSuccessBlock;
    CDUnknownBlockType _recommendRequestFailedBlock;
    QNCommentCellFactory *_cellFactory;
}

@property(retain, nonatomic) QNCommentCellFactory *cellFactory; // @synthesize cellFactory=_cellFactory;
@property(nonatomic) _Bool isRecommendRequesting; // @synthesize isRecommendRequesting=_isRecommendRequesting;
@property(copy, nonatomic) CDUnknownBlockType recommendRequestFailedBlock; // @synthesize recommendRequestFailedBlock=_recommendRequestFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType recommendRequestSuccessBlock; // @synthesize recommendRequestSuccessBlock=_recommendRequestSuccessBlock;
@property(retain, nonatomic) QNMyRecommendManager *myRecommendManager; // @synthesize myRecommendManager=_myRecommendManager;
@property(nonatomic) __weak id <QNCommentCellActionDelegate> commentCellDelegate; // @synthesize commentCellDelegate=_commentCellDelegate;
@property(retain, nonatomic) QNUserItem *guestInfo; // @synthesize guestInfo=_guestInfo;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *recommendList;
@property(readonly, copy, nonatomic) NSArray *dynamicList;
- (id)p_layoutContext;
- (void)p_resetUILineTableViewCell:(id)arg1;
- (_Bool)hasMoreRecommendData;
- (void)requestRecommendData:(_Bool)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

