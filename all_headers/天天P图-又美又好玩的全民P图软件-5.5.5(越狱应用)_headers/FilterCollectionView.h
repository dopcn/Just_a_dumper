//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BaseCollectionLayout, NSArray, NSObject, NSString, UICollectionView, UICollectionViewCell;
@protocol FilterCollectionViewDelegate;

@interface FilterCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _reddotHidden;
    _Bool _textHidden;
    NSObject<FilterCollectionViewDelegate> *_delegate;
    UICollectionView *_collectionView;
    BaseCollectionLayout *_themeLayout;
    NSArray *_list;
    NSString *_selectName;
    UICollectionViewCell *_selectedCell;
    long long _selectFilterId;
    struct UIEdgeInsets _imageInset;
    struct UIEdgeInsets _titleInset;
}

@property(nonatomic) struct UIEdgeInsets titleInset; // @synthesize titleInset=_titleInset;
@property(nonatomic) struct UIEdgeInsets imageInset; // @synthesize imageInset=_imageInset;
@property(nonatomic) long long selectFilterId; // @synthesize selectFilterId=_selectFilterId;
@property(retain, nonatomic) UICollectionViewCell *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(retain, nonatomic) NSString *selectName; // @synthesize selectName=_selectName;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) BaseCollectionLayout *themeLayout; // @synthesize themeLayout=_themeLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool textHidden; // @synthesize textHidden=_textHidden;
@property(nonatomic) _Bool reddotHidden; // @synthesize reddotHidden=_reddotHidden;
@property(nonatomic) __weak NSObject<FilterCollectionViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)autoLayoutCollectionView;
- (void)handleTapEvent:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)resetLayoutPosition;
- (_Bool)selectFilterItemViewWithName:(id)arg1;
- (void)updateWithSelectedFilterID:(long long)arg1;
- (void)updateWithSelectedIndex:(long long)arg1;
- (void)layoutWithList:(id)arg1 imageInset:(struct UIEdgeInsets)arg2 titleInset:(struct UIEdgeInsets)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

