//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "UGCPhotoAlbumInfoViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString, UGCPhotoAlbumInfoView, UICollectionView, UILabel;

@interface UGCPhotoAlbumViewController : MTBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate, UGCPhotoAlbumInfoViewDelegate>
{
    _Bool _lastPageToast;
    long long _feedSourceType;
    NSArray *_data;
    unsigned long long _section;
    unsigned long long _filteredPhotoIndex;
    UILabel *_titleLabel;
    UICollectionView *_collectionView;
    UGCPhotoAlbumInfoView *_infoView;
    NSIndexPath *_leftIndexPath;
    NSIndexPath *_rightIndexPath;
    unsigned long long _visibleCount;
}

@property(nonatomic) unsigned long long visibleCount; // @synthesize visibleCount=_visibleCount;
@property(retain, nonatomic) NSIndexPath *rightIndexPath; // @synthesize rightIndexPath=_rightIndexPath;
@property(retain, nonatomic) NSIndexPath *leftIndexPath; // @synthesize leftIndexPath=_leftIndexPath;
@property(nonatomic) _Bool lastPageToast; // @synthesize lastPageToast=_lastPageToast;
@property(retain, nonatomic) UGCPhotoAlbumInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long filteredPhotoIndex; // @synthesize filteredPhotoIndex=_filteredPhotoIndex;
@property(nonatomic) unsigned long long section; // @synthesize section=_section;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) long long feedSourceType; // @synthesize feedSourceType=_feedSourceType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didClickDownLoadButton:(id)arg1;
- (void)didClickCommentButton:(id)arg1;
- (void)didClickLikeButton:(id)arg1;
- (void)didClickTopContainerView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideOverlay;
- (void)showOverlay;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)isIndexPathVisible:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)originPhotoIndexWithFilteredIndexPath:(id)arg1;
- (long long)filteredPhotoIndexWithPhotos:(id)arg1 originIndex:(long long)arg2;
- (long long)numberOfPhotoItemsInSection:(long long)arg1;
- (void)recordVisibleCount;
- (void)clickStatistics:(id)arg1 feedDetail:(id)arg2;
- (void)updateData;
- (id)configration;
- (void)exitCurrentPage:(id)arg1;
- (void)clickBackButton;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (id)initWithData:(id)arg1 section:(unsigned long long)arg2 photoIndex:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

