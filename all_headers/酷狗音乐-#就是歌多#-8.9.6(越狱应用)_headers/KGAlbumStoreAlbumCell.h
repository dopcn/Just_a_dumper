//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KGAlbumStoreAlbumInfo, KGAlbumStoreAlbumItemButton;
@protocol KGAlbumStoreAlbumCellDelegate;

@interface KGAlbumStoreAlbumCell : UITableViewCell
{
    KGAlbumStoreAlbumItemButton *_leftAlbumBtn;
    KGAlbumStoreAlbumItemButton *_rightAlbumBtn;
    KGAlbumStoreAlbumItemButton *_midAlbumBtn;
    unsigned long long _showType;
    double _albumItemSpace;
    double _albumBtnWidth;
    double _numberOneline;
    KGAlbumStoreAlbumInfo *_leftAlbumInfo;
    KGAlbumStoreAlbumInfo *_rightAlbumInfo;
    KGAlbumStoreAlbumInfo *_midAlbumInfo;
    id <KGAlbumStoreAlbumCellDelegate> _delegate;
}

+ (double)calculateAlbumCellHeightWithShowBuyCount:(_Bool)arg1 itemsPerLine:(long long)arg2;
@property(nonatomic) __weak id <KGAlbumStoreAlbumCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KGAlbumStoreAlbumInfo *midAlbumInfo; // @synthesize midAlbumInfo=_midAlbumInfo;
@property(retain, nonatomic) KGAlbumStoreAlbumInfo *rightAlbumInfo; // @synthesize rightAlbumInfo=_rightAlbumInfo;
@property(retain, nonatomic) KGAlbumStoreAlbumInfo *leftAlbumInfo; // @synthesize leftAlbumInfo=_leftAlbumInfo;
- (void).cxx_destruct;
- (void)rightAlbumBtnDidClicked:(id)arg1;
- (void)midAlbumBtnDidClicked:(id)arg1;
- (void)leftAlbumBtnDidClicked:(id)arg1;
- (void)layoutSubviews;
- (void)makeViewWithShowItemPrice:(_Bool)arg1 showBuyCount:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 showItemPrice:(_Bool)arg3 showBuyCount:(_Bool)arg4 itemsPerLine:(long long)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

