//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GCGridViewProtocol-Protocol.h"

@class JOYHomeNaviTag, NSString, NVModelBaseJoyCateItem, UIImageView, UILabel;

@interface JOYHomeNaviSubCategoryView : UIView <GCGridViewProtocol>
{
    NVModelBaseJoyCateItem *_categoryItem;
    UIImageView *_imageViewForIcon;
    UILabel *_labelForTitle;
    JOYHomeNaviTag *_labelForTag;
}

+ (struct CGSize)viewSize:(id)arg1;
+ (id)viewReuseId:(id)arg1;
@property(retain, nonatomic) JOYHomeNaviTag *labelForTag; // @synthesize labelForTag=_labelForTag;
@property(retain, nonatomic) UILabel *labelForTitle; // @synthesize labelForTitle=_labelForTitle;
@property(retain, nonatomic) UIImageView *imageViewForIcon; // @synthesize imageViewForIcon=_imageViewForIcon;
@property(retain, nonatomic) NVModelBaseJoyCateItem *categoryItem; // @synthesize categoryItem=_categoryItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setData:(id)arg1;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

