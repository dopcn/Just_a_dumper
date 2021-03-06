//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SingerClassifyItemButton, SingerClassifyPopViewItem;

@interface SingerClassifyCollectionCell : UICollectionViewCell
{
    SingerClassifyItemButton *_classifyBtn;
    CDUnknownBlockType _callback;
    SingerClassifyPopViewItem *_data;
}

+ (double)cellMargin;
+ (double)cellWidth;
+ (double)cellHeight;
@property(retain, nonatomic) SingerClassifyPopViewItem *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) SingerClassifyItemButton *classifyBtn; // @synthesize classifyBtn=_classifyBtn;
- (void).cxx_destruct;
- (void)classifyBtnHandler:(id)arg1;
- (void)buildData:(id)arg1;
- (void)makeView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

