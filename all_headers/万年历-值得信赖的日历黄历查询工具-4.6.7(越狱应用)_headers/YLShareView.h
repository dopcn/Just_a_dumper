//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, UICollectionView, UIImage, UIImageView, UIViewController;
@protocol YLShareViewCancelShareDelegate;

@interface YLShareView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    _Bool _isShareForWX;
    _Bool _isShareClick;
    _Bool _isShareFailed;
    UIImage *_shareImage;
    UIImageView *_imageView;
    UIImageView *_maskBgView;
    UICollectionView *_shareCollection;
    NSDictionary *_shareInfo;
    UIViewController *_presentViewController;
    id <YLShareViewCancelShareDelegate> _cancelDelegate;
    NSArray *_customSnsArray;
}

@property(nonatomic) _Bool isShareFailed; // @synthesize isShareFailed=_isShareFailed;
@property(nonatomic) _Bool isShareClick; // @synthesize isShareClick=_isShareClick;
@property(nonatomic) _Bool isShareForWX; // @synthesize isShareForWX=_isShareForWX;
@property(retain, nonatomic) NSArray *customSnsArray; // @synthesize customSnsArray=_customSnsArray;
@property(nonatomic) __weak id <YLShareViewCancelShareDelegate> cancelDelegate; // @synthesize cancelDelegate=_cancelDelegate;
@property(nonatomic) __weak UIViewController *presentViewController; // @synthesize presentViewController=_presentViewController;
@property(retain, nonatomic) NSDictionary *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) UICollectionView *shareCollection; // @synthesize shareCollection=_shareCollection;
@property(nonatomic) __weak UIImageView *maskBgView; // @synthesize maskBgView=_maskBgView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
- (void).cxx_destruct;
- (id)shareHeaderOfAll4PlatformType:(long long)arg1;
- (id)shareHeaderOfAll;
- (void)shareUsePlatform:(long long)arg1;
- (id)messageObjectForPlatformType:(long long)arg1;
- (id)webpageToShare:(long long)arg1;
- (id)imageToShare:(long long)arg1;
- (id)textToShare:(long long)arg1;
- (id)titleToShare:(long long)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)initAllData;
- (void)cancelShare;
- (void)commitUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

