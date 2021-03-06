//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPhoneCardBaseCell.h"

#import "QYUCardCellCustomProtocol-Protocol.h"
#import "QYUSortFilterRowDelegate-Protocol.h"

@class NSMutableArray, NSString, QYCardData, UIImageView, UIScrollView, UIView;

@interface QYUSearchGraphFilterCardCell : QYUPhoneCardBaseCell <QYUSortFilterRowDelegate, QYUCardCellCustomProtocol>
{
    NSMutableArray *_arraySortFilterRowViews;
    NSMutableArray *_arraySelectedItemIDs;
    NSMutableArray *_arraySelectedItemTitles;
    NSMutableArray *_arraySubIDs;
    NSString *_append_para;
    QYCardData *_cardData;
    double _fRestoreHeight;
    double _fFloatHeight;
    UIView *_viewRestoreBackground;
    UIView *_viewFloatBackground;
    UIScrollView *_scrollSelectedTitles;
    UIImageView *_imageViewExpand;
}

+ (double)floatViewHeight;
+ (_Bool)shouldShowTopBlankWhenNoJointedCard:(id)arg1 defaultValue:(_Bool)arg2;
+ (id)getCellObjByContainer:(id)arg1 andIndex:(long long)arg2;
+ (long long)getLinesByCardData:(id)arg1 andShowNum:(long long)arg2;
+ (void)load;
- (void).cxx_destruct;
- (void)restoreSubContentView;
- (id)detachSubContentView;
- (void)onRestoreCard;
- (void)selectedItemChanged;
- (void)p_updateSelectedItemArrays;
- (void)setCellModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

