//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PDTiledItemHotwordData, UIButton, UILabel;

@interface PDTiledItemHotwordView : UIView
{
    _Bool _editStatus;
    PDTiledItemHotwordData *_itemData;
    double _viewMaxWidth;
    CDUnknownBlockType _blockItemClicked;
    CDUnknownBlockType _blockDelClicked;
    UILabel *_laeblHotword;
    UIButton *_deleteBtn;
}

+ (struct CGSize)calculateSizeByItemData:(id)arg1 viewMaxWidth:(double)arg2;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UILabel *laeblHotword; // @synthesize laeblHotword=_laeblHotword;
@property(nonatomic) __weak CDUnknownBlockType blockDelClicked; // @synthesize blockDelClicked=_blockDelClicked;
@property(nonatomic) __weak CDUnknownBlockType blockItemClicked; // @synthesize blockItemClicked=_blockItemClicked;
@property(nonatomic) _Bool editStatus; // @synthesize editStatus=_editStatus;
@property(nonatomic) double viewMaxWidth; // @synthesize viewMaxWidth=_viewMaxWidth;
@property(retain, nonatomic) PDTiledItemHotwordData *itemData; // @synthesize itemData=_itemData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tapedInHealthPointView;
- (void)tapedInDel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

