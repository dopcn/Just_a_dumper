//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UILabel;

@interface UMComPageNumberView : UIView
{
    double itemOffset;
    double noticeViewWidth;
    int _itemType;
    UIColor *_itemColor;
    UIImageView *_itemImageView;
    UILabel *_itemLabel;
    UIImageView *_itemNoticeImageView;
    CDUnknownBlockType _clickOnItem;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) CDUnknownBlockType clickOnItem; // @synthesize clickOnItem=_clickOnItem;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) UIImageView *itemNoticeImageView; // @synthesize itemNoticeImageView=_itemNoticeImageView;
@property(retain, nonatomic) UILabel *itemLabel; // @synthesize itemLabel=_itemLabel;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
@property(retain, nonatomic) UIColor *itemColor; // @synthesize itemColor=_itemColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)reloadItems;
- (void)didClickOnItem;
- (id)initWithFrame:(struct CGRect)arg1;

@end

