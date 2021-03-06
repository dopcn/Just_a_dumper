//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTSimpleItemCollectionLayout.h"

@interface BottomBarCollectionLayout : TTSimpleItemCollectionLayout
{
    unsigned long long _resolution;
    double _lineHeight;
    double _itemOffW;
    struct CGSize _itemSize;
    struct CGSize _titleSize;
    struct UIEdgeInsets _titleInset;
}

@property(nonatomic) double itemOffW; // @synthesize itemOffW=_itemOffW;
@property(nonatomic) struct UIEdgeInsets titleInset; // @synthesize titleInset=_titleInset;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) unsigned long long resolution; // @synthesize resolution=_resolution;
- (void)prepareLayout;
- (double)computeLineHeight:(struct CGRect)arg1;
- (id)init;

@end

