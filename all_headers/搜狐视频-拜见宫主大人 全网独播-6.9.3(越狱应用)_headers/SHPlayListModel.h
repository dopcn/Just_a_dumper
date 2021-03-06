//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SHPlayListModelProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, VideoAlbum;
@protocol SHPlayDownloadListModelDelegate, SHPlayListModelDelegate;

@interface SHPlayListModel : NSObject <SHPlayListModelProtocol>
{
    _Bool _isLoactedPage;
    id <SHPlayListModelDelegate> _playListDelegate;
    id <SHPlayDownloadListModelDelegate> _playDownloadListDelegate;
    unsigned long long _currentIndex;
    long long _selectedPageIndex;
    NSMutableArray *_listArray;
    NSMutableDictionary *_pageListDict;
    unsigned long long _beginPageIndex;
    unsigned long long _endPageIndex;
    VideoAlbum *_videoAlbum;
    unsigned long long _currentPage;
}

@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool isLoactedPage; // @synthesize isLoactedPage=_isLoactedPage;
@property(nonatomic) __weak VideoAlbum *videoAlbum; // @synthesize videoAlbum=_videoAlbum;
@property(nonatomic) unsigned long long endPageIndex; // @synthesize endPageIndex=_endPageIndex;
@property(nonatomic) unsigned long long beginPageIndex; // @synthesize beginPageIndex=_beginPageIndex;
@property(retain, nonatomic) NSMutableDictionary *pageListDict; // @synthesize pageListDict=_pageListDict;
@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray=_listArray;
@property(nonatomic) long long selectedPageIndex; // @synthesize selectedPageIndex=_selectedPageIndex;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <SHPlayDownloadListModelDelegate> playDownloadListDelegate; // @synthesize playDownloadListDelegate=_playDownloadListDelegate;
@property(nonatomic) __weak id <SHPlayListModelDelegate> playListDelegate; // @synthesize playListDelegate=_playListDelegate;
- (void).cxx_destruct;
- (void)updateCurrentIndex:(unsigned long long)arg1;
- (void)clearCurrentIndex;
- (id)preVideoItem;
- (id)nextVideoItem;
- (id)videoItemWithSelectedIndex:(unsigned long long)arg1;
- (id)currentVideoItem;
- (id)fristVideoItem;
- (void)updateListData;
- (void)loadVideoListWithPageIndex:(long long)arg1 Success:(CDUnknownBlockType)arg2 Failure:(CDUnknownBlockType)arg3;
- (void)loadPreVideoListSuccess:(CDUnknownBlockType)arg1 Failure:(CDUnknownBlockType)arg2;
- (void)loadNextVideoListSuccess:(CDUnknownBlockType)arg1 Failure:(CDUnknownBlockType)arg2;
- (void)loadCurrentVideoListSuccess:(CDUnknownBlockType)arg1 Failure:(CDUnknownBlockType)arg2;
- (_Bool)hasNextPageList;
- (_Bool)hasPrePageList;
- (unsigned long long)currentListType;
- (void)configureDataWithAlbum:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

