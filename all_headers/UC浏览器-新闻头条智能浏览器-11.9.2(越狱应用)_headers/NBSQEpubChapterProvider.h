//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BookChapterParserDelegate-Protocol.h"
#import "NBBookServiceManagerObserver-Protocol.h"
#import "NBChapterIndexProviderDelegate-Protocol.h"
#import "NBChapterProviderProtocol-Protocol.h"
#import "NBEpubPageIndexProviderDelegate-Protocol.h"
#import "NBPageIndexHandlerDelegate-Protocol.h"
#import "NBSQEpubOnlineContentQueueDelegate-Protocol.h"

@class NBBookItem, NBBookLayoutConfig, NBChapterIndexProvider, NBEpubChapterItem, NBEpubChaptersInfo, NBEpubPageIndexProvider, NBPageIndexHandler, NBPrereadManager, NBSQEpubOnlineContentQueue, NSString;
@protocol NBBookChapterParser, NBChapterProviderDelegate;

@interface NBSQEpubChapterProvider : NSObject <NBChapterIndexProviderDelegate, NBPageIndexHandlerDelegate, BookChapterParserDelegate, NBEpubPageIndexProviderDelegate, NBBookServiceManagerObserver, NBSQEpubOnlineContentQueueDelegate, NBChapterProviderProtocol>
{
    _Bool _shouldRefreshChapterContent;
    _Bool _hasRetryRequestData;
    id <NBChapterProviderDelegate> _delegate;
    NBBookLayoutConfig *_layoutConfig;
    NBPageIndexHandler *_pageIndexHandler;
    NBBookItem *_bookItem;
    NBEpubChaptersInfo *_chapterInfo;
    NBEpubChapterItem *_curChapterItem;
    id <NBBookChapterParser> _chapterParser;
    NBPrereadManager *_prereadManager;
    NBEpubPageIndexProvider *_pageIndexProvider;
    NBChapterIndexProvider *_chapterIndexProvider;
    NBSQEpubOnlineContentQueue *_onlineChapterDataRequestQueue;
}

@property(retain, nonatomic) NBSQEpubOnlineContentQueue *onlineChapterDataRequestQueue; // @synthesize onlineChapterDataRequestQueue=_onlineChapterDataRequestQueue;
@property(retain, nonatomic) NBChapterIndexProvider *chapterIndexProvider; // @synthesize chapterIndexProvider=_chapterIndexProvider;
@property(retain, nonatomic) NBEpubPageIndexProvider *pageIndexProvider; // @synthesize pageIndexProvider=_pageIndexProvider;
@property(retain, nonatomic) NBPrereadManager *prereadManager; // @synthesize prereadManager=_prereadManager;
@property(retain) id <NBBookChapterParser> chapterParser; // @synthesize chapterParser=_chapterParser;
@property(retain) NBEpubChapterItem *curChapterItem; // @synthesize curChapterItem=_curChapterItem;
@property(retain) NBEpubChaptersInfo *chapterInfo; // @synthesize chapterInfo=_chapterInfo;
@property(retain, nonatomic) NBBookItem *bookItem; // @synthesize bookItem=_bookItem;
@property(retain, nonatomic) NBPageIndexHandler *pageIndexHandler; // @synthesize pageIndexHandler=_pageIndexHandler;
@property(nonatomic) _Bool hasRetryRequestData; // @synthesize hasRetryRequestData=_hasRetryRequestData;
@property(nonatomic) _Bool shouldRefreshChapterContent; // @synthesize shouldRefreshChapterContent=_shouldRefreshChapterContent;
@property(retain) NBBookLayoutConfig *layoutConfig; // @synthesize layoutConfig=_layoutConfig;
@property(nonatomic) id <NBChapterProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bookServiceManager:(id)arg1 didFnishDownloadEpubForBookItem:(id)arg2;
- (void)splitPageInfoWithOnlineChapter:(id)arg1;
- (void)didPurchaseFinished:(id)arg1;
- (_Bool)isBuy:(id)arg1;
- (_Bool)isReadingOnlineChapterInfo;
- (_Bool)isReadingChapterInfo;
- (id)getLayoutConfig;
- (long long)getChapterCount;
- (void)rushSplitChapter:(id)arg1;
- (void)bookChapterParserDidErrorParse:(id)arg1;
- (void)bookChapterParserDidFinishParse:(id)arg1;
- (void)bookChapterParser:(id)arg1 receiveChapter:(id)arg2;
- (void)retryReadOnlineChaptersInfo;
- (id)getPreChapterItem:(id)arg1;
- (id)getNextChapterItem:(id)arg1;
- (id)getPageIndexWithChapterItem:(id)arg1 pageIndex:(long long)arg2 withType:(long long)arg3;
- (void)epubOnlineDataQueue:(id)arg1 didFailDownloadChapter:(id)arg2;
- (void)epubOnlineDataQueue:(id)arg1 didFinishDownloadChapter:(id)arg2;
- (void)cancelAnalyze;
- (void)clearBookItem;
- (void)handlePreReadingWithChapter:(id)arg1;
- (int)convertPageIndexWithChapter:(id)arg1 fromLayoutConfig:(id)arg2 fromPageIndex:(int)arg3 toLayoutConfig:(id)arg4;
- (id)getPageItemsForChapterItem:(id)arg1;
- (long long)getPageCountWithChapter:(id)arg1;
- (id)getChapterItemAtIndex:(long long)arg1;
- (id)getChapterItem:(long long)arg1;
- (id)getChapterInfo;
- (void)setCurrentChapterItem:(id)arg1;
- (void)prepareChapterDataAndPreReading:(id)arg1;
- (void)prepareOnlineChapterData:(id)arg1;
- (void)prepareChapterData:(id)arg1;
- (void)prepareChapterInfo;
- (void)parseEpubBookItem;
- (void)deletePageInfoIfNeed:(id)arg1;
- (void)dealloc;
- (id)initWithBookItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

