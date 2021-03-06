//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class ICBCCalendarYYCell, NSDate, NSMutableArray, NSString, UICollectionView;
@protocol ICBCCalendarSelectYYDelegate;

@interface ICBCCalendarSelectYYItem : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    ICBCCalendarYYCell *highLightCell;
    NSDate *_date;
    id <ICBCCalendarSelectYYDelegate> _delegate;
    UICollectionView *_collectionView;
    NSMutableArray *_yearArray;
    struct CGRect _myFrame;
}

@property(retain, nonatomic) NSMutableArray *yearArray; // @synthesize yearArray=_yearArray;
@property(nonatomic) struct CGRect myFrame; // @synthesize myFrame=_myFrame;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <ICBCCalendarSelectYYDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupCollectionView;
- (id)previousDecadeDate;
- (id)nextDecadeDate;
- (id)initWithCustomFrame:(struct CGRect)arg1 Date:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

