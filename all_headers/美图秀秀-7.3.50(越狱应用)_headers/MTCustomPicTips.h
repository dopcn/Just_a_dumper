//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MTMaterialManagedObject, NSArray, NSIndexPath, NSString, UIButton, UICollectionView, UILabel, UIVisualEffectView;
@protocol MTCustomPicTipsDelegate;

@interface MTCustomPicTips : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    unsigned long long _currentIndex;
    NSArray *_dataArray;
    id <MTCustomPicTipsDelegate> _delegate;
    UIView *_containView;
    UIVisualEffectView *_backgroundView;
    UICollectionView *_containCollectionView;
    UIButton *_progressButton;
    UIButton *_closeButton;
    UIView *_animationView;
    NSIndexPath *_lastShowed;
    UILabel *_countLabel;
    MTMaterialManagedObject *_currentObject;
    UIView *_inView;
}

+ (void)hide;
+ (void)showWithMaterials:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 inView:(id)arg4;
@property(nonatomic) __weak UIView *inView; // @synthesize inView=_inView;
@property(retain, nonatomic) MTMaterialManagedObject *currentObject; // @synthesize currentObject=_currentObject;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) NSIndexPath *lastShowed; // @synthesize lastShowed=_lastShowed;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *progressButton; // @synthesize progressButton=_progressButton;
@property(retain, nonatomic) UICollectionView *containCollectionView; // @synthesize containCollectionView=_containCollectionView;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *containView; // @synthesize containView=_containView;
@property(nonatomic) __weak id <MTCustomPicTipsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (_Bool)checkManagedObject:(id)arg1;
- (void)downloadFailedWithNotification:(id)arg1;
- (void)downloadSuccessWithNotification:(id)arg1;
- (void)materialDownloadDidStartNotification:(id)arg1;
- (double)adjustScreenSizeByValue:(double)arg1;
- (void)updateCellNewFlagWithIndex:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateDownloadButtonState:(id)arg1;
- (void)showWWANTipsWithMaterial;
- (void)startDownload;
- (void)actionOperation:(id)arg1;
- (void)dismissToBottom:(_Bool)arg1;
- (void)actionClose;
- (void)show;
- (void)tapAction:(id)arg1;
- (void)commondInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

