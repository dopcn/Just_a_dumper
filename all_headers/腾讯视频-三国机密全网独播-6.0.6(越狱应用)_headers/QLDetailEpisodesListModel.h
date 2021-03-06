//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QLRequestModelDelegate-Protocol.h"
#import "QLVideoListsViewControllerHelper-Protocol.h"

@class NSMutableArray, NSString, QLJCECoverListModel, QLJCEVideoListModel;
@protocol QLRequestModelDelegate;

@interface QLDetailEpisodesListModel : NSObject <QLRequestModelDelegate, QLVideoListsViewControllerHelper>
{
    NSString *_pageContext;
    NSString *_dataKey;
    NSString *_reportKey;
    NSMutableArray *_aryDatas;
    id <QLRequestModelDelegate> _delegate;
    QLJCEVideoListModel *_videoListModel;
    QLJCECoverListModel *_coverListModel;
    long long _sourceType;
}

@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) QLJCECoverListModel *coverListModel; // @synthesize coverListModel=_coverListModel;
@property(retain, nonatomic) QLJCEVideoListModel *videoListModel; // @synthesize videoListModel=_videoListModel;
@property(nonatomic) __weak id <QLRequestModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *aryDatas; // @synthesize aryDatas=_aryDatas;
@property(copy, nonatomic) NSString *reportKey; // @synthesize reportKey=_reportKey;
@property(copy, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
@property(copy, nonatomic) NSString *pageContext; // @synthesize pageContext=_pageContext;
- (void).cxx_destruct;
- (void)requestModelDidFinishLoad:(id)arg1;
- (_Bool)hasNextPageForDataKey:(id)arg1 sourceType:(long long)arg2;
@property(readonly, nonatomic) long long uiType;
- (void)handlePlayActionWithItemData:(id)arg1 dataKey:(id)arg2 index:(long long)arg3 isPop:(_Bool)arg4;
- (id)sourceVideoListsByDatakey:(id)arg1 sourceType:(long long)arg2;
- (void)load:(int)arg1 more:(_Bool)arg2 sourceType:(long long)arg3 dataKey:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

