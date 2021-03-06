//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DIVADisplayLargePicOperation, NSIndexPath, NSMutableArray, NSString, UICollectionView;
@protocol TPBAttachPicContentViewDelegate;

@interface TPBAttachPicContentView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    id <TPBAttachPicContentViewDelegate> _delegate;
    UICollectionView *_mainCollectionView;
    NSMutableArray *_dataSource;
    NSIndexPath *_lastIndexPath;
    DIVADisplayLargePicOperation *_fileOperation;
}

@property(retain, nonatomic) DIVADisplayLargePicOperation *fileOperation; // @synthesize fileOperation=_fileOperation;
@property(retain, nonatomic) NSIndexPath *lastIndexPath; // @synthesize lastIndexPath=_lastIndexPath;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(nonatomic) __weak id <TPBAttachPicContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)existFilePath:(id)arg1;
- (void)updateCellAtIndex:(id)arg1;
- (void)reloadContentWithDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

