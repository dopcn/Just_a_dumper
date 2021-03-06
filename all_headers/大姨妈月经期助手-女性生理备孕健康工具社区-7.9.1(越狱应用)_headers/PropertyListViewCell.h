//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, UIView;

@interface PropertyListViewCell : UICollectionViewCell
{
    UIView *_view;
    UIView *_separatorLine;
    CALayer *_borderLayer;
}

@property(nonatomic) __weak CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(nonatomic) __weak UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSeparatorColor:(id)arg1;
- (void)setGridColor:(id)arg1;
- (void)setGridWidth:(double)arg1;

@end

