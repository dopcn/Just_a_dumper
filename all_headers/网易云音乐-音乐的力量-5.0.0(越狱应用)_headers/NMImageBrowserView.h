//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UICollectionView, UIImageView, UILabel;

@interface NMImageBrowserView : UIView
{
    UICollectionView *_collectionView;
    UIImageView *_controlSuperView;
    UILabel *_indexLabel;
    UIButton *_saveButton;
    UIButton *_loadOriginalButton;
    NSArray *_items;
    unsigned long long _type;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)loadOriginalButtonClicked:(id)arg1;
- (void)saveButtonClicked:(id)arg1;
- (void)updateIndex:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithImageBrowserCellType:(unsigned long long)arg1 items:(id)arg2;

@end

