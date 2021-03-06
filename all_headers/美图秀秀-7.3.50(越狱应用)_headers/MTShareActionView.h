//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString, NSURL, UIButton, UICollectionView, UIImage, UILabel;

@interface MTShareActionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    CDUnknownBlockType _shareActionViewCallback;
    UILabel *_shareToLabel;
    UICollectionView *_collectionView;
    UILabel *_segmentLabel;
    UIButton *_cancelButton;
    UIView *_backgroundView;
    NSMutableArray *_shareClientDataSource;
    UIImage *_image;
    NSURL *_assetURL;
    NSString *_link;
    NSString *_imageURL;
    NSString *_title;
    NSString *_descriptionString;
    NSString *_analyticsEvent;
}

+ (void)hideAll;
+ (void)show;
@property(copy, nonatomic) NSString *analyticsEvent; // @synthesize analyticsEvent=_analyticsEvent;
@property(copy, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSMutableArray *shareClientDataSource; // @synthesize shareClientDataSource=_shareClientDataSource;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UILabel *segmentLabel; // @synthesize segmentLabel=_segmentLabel;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UILabel *shareToLabel; // @synthesize shareToLabel=_shareToLabel;
@property(copy, nonatomic) CDUnknownBlockType shareActionViewCallback; // @synthesize shareActionViewCallback=_shareActionViewCallback;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)shareWithType:(unsigned long long)arg1;
- (void)removeShareView;
- (void)cancelButtonClicked:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)hide;
- (void)show;
- (void)awakeFromNib;
- (void)configSharePlatformData:(id)arg1;
- (void)initSharePlatformData;
- (id)initShareViewWithLink:(id)arg1 imageURL:(id)arg2 title:(id)arg3 descriptionString:(id)arg4 analyticsEvent:(id)arg5;
- (id)initShareViewWithImage:(id)arg1 assetURL:(id)arg2 title:(id)arg3 descriptionString:(id)arg4 analyticsEvent:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

