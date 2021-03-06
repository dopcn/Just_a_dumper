//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SOHUCollectionViewController.h"

@class VideoAlbum;

@interface SOHUEpisodeViewController : SOHUCollectionViewController
{
    int _episodeFooterState;
    CDUnknownBlockType _headerRefreshingBlock;
    CDUnknownBlockType _footerRefreshingBlock;
    VideoAlbum *_videoAlbum;
}

@property(nonatomic) int episodeFooterState; // @synthesize episodeFooterState=_episodeFooterState;
@property(nonatomic) __weak VideoAlbum *videoAlbum; // @synthesize videoAlbum=_videoAlbum;
@property(copy, nonatomic) CDUnknownBlockType footerRefreshingBlock; // @synthesize footerRefreshingBlock=_footerRefreshingBlock;
@property(copy, nonatomic) CDUnknownBlockType headerRefreshingBlock; // @synthesize headerRefreshingBlock=_headerRefreshingBlock;
- (void).cxx_destruct;
- (void)displayExposureDataForSection:(id)arg1 atIndexPath:(id)arg2;
- (void)selectExposureDataForSection:(id)arg1 atIndexPath:(id)arg2;
- (void)updateRefreshFooterIdleString:(id)arg1 pullingString:(id)arg2;
- (void)updateRefreshHeaderIdleString:(id)arg1 pullingString:(id)arg2;
- (void)resetRefreshFooterNoMoreData;
- (void)noticeRefreshFooterNoMoreData;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)didSelectObject:(id)arg1 atIndexPath:(id)arg2;
- (double)minimumInteritemSpacingForSectionObject:(id)arg1 atSection:(long long)arg2;
- (double)minimumLineSpacingForSectionObject:(id)arg1 atSection:(long long)arg2;
- (struct UIEdgeInsets)insetForSectionObject:(id)arg1 atSection:(long long)arg2;
- (void)reloadEpisodeData;
- (void)endRefreshing;
- (void)createDataSource;
- (void)scrollToIndexPath:(id)arg1;
- (void)pullDownToRefreshAction;
- (void)pullUpToRefreshAction;
- (void)dealloc;
- (void)viewDidLoad;

@end

